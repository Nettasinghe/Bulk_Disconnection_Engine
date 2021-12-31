
//////////////////////////////////////////////////////////////////////
//
// DisconnectionEngine.cpp
// Bulk Disconnection Engine
// implementation of the DisconnectionEngine class
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#pragma warning (disable:4786)

#include <fstream>
#include "DisconnectionEngine.h"

extern ofstream f_log;

DisconnectionEngine::DisconnectionEngine()
{
	z_ActionCode[0] = '\0';
	z_StatusReason[0] = '\0';
	z_RowID[0] = '\0';
	z_BillRunCode[0] = '\0';
	z_OperationMode[0] = '\0';
	d_MinOutstanding = 0.00;
	i_MaxActionCount = -1;
	i_ExemptedDays = -1;
	i_TotalActionTaken = 0;
	i_TotalActionRejected = 0;
	d_LastExecutedOutstanding = 0.0;
}

DisconnectionEngine::~DisconnectionEngine()
{

}

bool DisconnectionEngine::LoadNetworkData()
{
	LoadExemptedDate(i_ExemptedDays);	//pass no of days to be exempted

	LoadExemptedContractIDsMBC();
	LoadExemptedContractIDsCREDIT();
	o_Prov_Switch_Image.Load(z_BillRunCode);
	o_Dyn_1_Connection.Load(z_BillRunCode);
	o_Cam_Connection.Load(z_BillRunCode);
	o_Cam_Contract_Package.Load(z_BillRunCode);
	o_Cam_Contract.Load(z_BillRunCode);
	o_Cam_Primary_Supplementary.Load();

	return true;
}

bool DisconnectionEngine::LoadFinanceData()
{
	o_Bd_Fb_Contract_Trxns_V.Load();
	o_Bd_Fb_Deposits_V.Load();

	return true;
}

void DisconnectionEngine::PopulateDisconnectDataMap()
{
	map<double, map<int,DisconnectData* >* >::iterator ite_max_outstanding;

	map<char*, Prov_Switch_Image*, ltstr>::iterator ite_prov_switch_img;
	
	ite_prov_switch_img = Prov_Switch_Image::map_ProvSwitchImage.begin();
	for( ; ite_prov_switch_img != Prov_Switch_Image::map_ProvSwitchImage.end(); ite_prov_switch_img++)
	{
		Prov_Switch_Image* pProv_Switch_Image = ite_prov_switch_img->second;
		
		Dyn_1_Connection* pDyn_1_Connection = Dyn_1_Connection::FindByImsi(pProv_Switch_Image->z_Imsi);
		if(pDyn_1_Connection != NULL)
		{
			Cam_Connection* pCam_Connection = Cam_Connection::Find(pDyn_1_Connection->i_ConnectionID);
			if(pCam_Connection != NULL)
			{
				Cam_Contract_Package* pCam_Contract_Package = Cam_Contract_Package::Find(pCam_Connection->i_PkgContarctID);
				if(pCam_Contract_Package != NULL)
				{
					Cam_Contract* pCam_Contract = Cam_Contract::Find(pCam_Contract_Package->i_ContractID);
					if(pCam_Contract != NULL)
					{
						double dTotTranAmount = 0.0;
						double dTotExemptedBillAmount = 0.0;
						double dTotCreditLimit = 0.0;
						double dTotDepositAmount = 0.0;

						double dTotOutstanding = 0.0;

						pProv_Switch_Image->pDisconnectData = new DisconnectData();

						pProv_Switch_Image->pDisconnectData->i_ConnectionID = pDyn_1_Connection->i_ConnectionID;
						pProv_Switch_Image->pDisconnectData->i_ContractID = pCam_Contract->i_ContractID;
						pProv_Switch_Image->pDisconnectData->i_ImageID = pProv_Switch_Image->i_ImageID;
						pProv_Switch_Image->pDisconnectData->i_PkgContarctID = pCam_Contract_Package->i_ContractPkgID;
						strcpy(pProv_Switch_Image->pDisconnectData->z_CreditType,pCam_Contract->z_CreditType);
						strcpy(pProv_Switch_Image->pDisconnectData->z_Imsi,pProv_Switch_Image->z_Imsi);
						strcpy(pProv_Switch_Image->pDisconnectData->z_MobileNo,pDyn_1_Connection->z_MobileNo);

						if(IsExemptedContractID(pCam_Contract->i_ContractID) == true)
						{
							strcpy(pProv_Switch_Image->pDisconnectData->z_Status,"EXEMPTED");
							f_log<<"Contract id "<<(pCam_Contract->i_ContractID)<<" Exempted "<<(pCam_Contract->z_CreditType)<<endl;
						}
						else if(IsApplicableCreditType(pCam_Contract->z_CreditType) == true)
						{
							Bd_Fb_Contract_Trxns_V* pBd_Fb_Contract_Trxns_V = Bd_Fb_Contract_Trxns_V::Find(pCam_Contract->i_ContractID);
							if(pBd_Fb_Contract_Trxns_V != NULL)
							{
								dTotTranAmount = pBd_Fb_Contract_Trxns_V->d_TranAmount;
								dTotExemptedBillAmount = pBd_Fb_Contract_Trxns_V->d_ExemptedBillAmount;
							}

							Bd_Fb_Deposits_V* pBd_Fb_Deposits_V = Bd_Fb_Deposits_V::Find(pCam_Contract->i_ContractID);
							if(pBd_Fb_Deposits_V != NULL)
							{
								dTotCreditLimit = pBd_Fb_Deposits_V->d_CreditLimit;
								dTotDepositAmount = pBd_Fb_Deposits_V->d_DepositAmount;
							}

							dTotOutstanding = dTotTranAmount - (dTotCreditLimit + dTotDepositAmount);

							pProv_Switch_Image->pDisconnectData->d_OutstandingAmount = dTotOutstanding;

							
							if(d_MinOutstanding < dTotOutstanding)
							{
								//
								ite_max_outstanding = map_MaxOutstandingAmounts.find(dTotOutstanding);
								if(ite_max_outstanding != map_MaxOutstandingAmounts.end())
								{
									ite_max_outstanding->second->insert(make_pair(pCam_Contract->i_ContractID,pProv_Switch_Image->pDisconnectData));
								}
								else
								{
									map<int,DisconnectData* >* tmp_map = new map<int,DisconnectData* >;
									tmp_map->insert(make_pair(pCam_Contract->i_ContractID,pProv_Switch_Image->pDisconnectData));

									map_MaxOutstandingAmounts.insert(make_pair(dTotOutstanding,tmp_map));
								}

								strcpy(pProv_Switch_Image->pDisconnectData->z_Status,"MORE-MIN");
							}
							else	//outstanding is less than minimun
							{
								strcpy(pProv_Switch_Image->pDisconnectData->z_Status,"LESS-MIN");
							}
							//
						}
						else	//Invalid credit type
						{
							strcpy(pProv_Switch_Image->pDisconnectData->z_Status,"CR-TYPE");
							f_log<<"Contract id "<<(pCam_Contract->i_ContractID)<<" does not have applicable credit type "<<(pCam_Contract->z_CreditType)<<endl;
						}
					}
					else
					{
						f_log<<"No Data Found for Contract ID "<<(pCam_Contract_Package->i_ContractID)<<" In Cam_Contract"<<endl;
					}
				}
				else
				{
					f_log<<"No Data Found for Contract Pkg ID "<<(pCam_Connection->i_PkgContarctID)<<" In Cam_Contract_Package"<<endl;
				}
			}
			else
			{
				f_log<<"No Data Found for Connection ID "<<(pDyn_1_Connection->i_ConnectionID)<<" In Cam_Connection"<<endl;
			}
		}
		else
		{
			f_log<<"No Data Found for Imsi "<<(pProv_Switch_Image->z_Imsi)<<" In Dyn_1_Connection"<<endl;
		}
	}
}

bool DisconnectionEngine::IsApplicableCreditType(char *zCreditType)
{
	map<char*, int, ltstr >::iterator ite;
	ite = map_ApplicableCreditTypes.find(zCreditType);
	if(ite != map_ApplicableCreditTypes.end())
		return true;

	return false;
}

//If the contract_id found in map_ExemptedContractIDs, that means it should be
//NOT-considered for disconnection

bool DisconnectionEngine::IsExemptedContractID(int iContractID)
{
	map<int, int >::iterator ite;
	ite = map_ExemptedContractIDs.find(iContractID);

	if(ite != map_ExemptedContractIDs.end())
		return true;

	return false;
}


//////////////////////////////////////////////////////////////////////
// DisconnectData Class
//////////////////////////////////////////////////////////////////////


DisconnectData::DisconnectData()
{
	i_ConnectionID	= -1;
	i_ContractID	= -1;
	i_ImageID		= -1;
	i_PkgContarctID	= -1;
	z_Imsi[0] = '\0';
	z_MobileNo[0] = '\0';
	z_CreditType[0] = '\0';
	d_OutstandingAmount = 0.00;

	strcpy(z_Status,"REJ");	//default status
}

DisconnectData::~DisconnectData()
{

}


