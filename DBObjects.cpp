
//////////////////////////////////////////////////////////////////////
//
// DBObjects.cpp
// classes implementation for Bulk Disconnection Engine
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#pragma warning (disable:4786)
#include "DBObjects.h"


//////////////////////////////////////////////////////////////////////
// Prov_Switch_Image Class
//////////////////////////////////////////////////////////////////////

map<char*, Prov_Switch_Image*, ltstr> Prov_Switch_Image::map_ProvSwitchImage;

Prov_Switch_Image::Prov_Switch_Image()
{
	z_Imsi[0] = '\0';
	i_ImageID = -1;

	pDisconnectData = NULL;
}

Prov_Switch_Image::~Prov_Switch_Image()
{

}

Prov_Switch_Image* Prov_Switch_Image::Find(char *zImsi)
{
	map<char*, Prov_Switch_Image*, ltstr>::iterator ite;

	ite = map_ProvSwitchImage.find(zImsi);
	if(ite != map_ProvSwitchImage.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Dyn_1_Connection Class
//////////////////////////////////////////////////////////////////////

map<int, Dyn_1_Connection* > Dyn_1_Connection::map_Dyn1Connection;
map<char* ,Dyn_1_Connection*, ltstr >	Dyn_1_Connection::map_Dyn1ConnectionByImsi;

Dyn_1_Connection::Dyn_1_Connection()
{
	i_ConnectionID = -1;
	z_Imsi[0] = '\0';
	z_MobileNo[0] = '\0';
}

Dyn_1_Connection::~Dyn_1_Connection()
{
	
}

Dyn_1_Connection* Dyn_1_Connection::Find(int iConnectionID)
{
	map<int, Dyn_1_Connection* >::iterator ite;

	ite = map_Dyn1Connection.find(iConnectionID);
	if(ite != map_Dyn1Connection.end())
		return ite->second;

	return NULL;
}

Dyn_1_Connection* Dyn_1_Connection::FindByImsi(char *zImsi)
{
	map<char* ,Dyn_1_Connection*, ltstr >::iterator ite;
	ite = map_Dyn1ConnectionByImsi.find(zImsi);
	if(ite != map_Dyn1ConnectionByImsi.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Cam_Connection Class
//////////////////////////////////////////////////////////////////////

map<int, Cam_Connection* > Cam_Connection::map_CamConnection;

Cam_Connection::Cam_Connection()
{
	i_ConnectionID = -1;
	i_PkgContarctID = -1;
	i_ImageID = -1;
}

Cam_Connection::~Cam_Connection()
{

}

Cam_Connection* Cam_Connection::Find(int iConnectionID)
{
	map<int, Cam_Connection* >::iterator ite;

	ite = map_CamConnection.find(iConnectionID);
	if(ite != map_CamConnection.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Cam_Contract_Package Class
//////////////////////////////////////////////////////////////////////

map<int, Cam_Contract_Package* > Cam_Contract_Package::map_CamContractPkg;

Cam_Contract_Package::Cam_Contract_Package()
{
	i_ContractID = -1;
	i_ContractPkgID = -1;
}

Cam_Contract_Package::~Cam_Contract_Package()
{

}

Cam_Contract_Package* Cam_Contract_Package::Find(int iContractPkgID)
{
	map<int, Cam_Contract_Package* >::iterator ite;
	ite = map_CamContractPkg.find(iContractPkgID);
	if(ite != map_CamContractPkg.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Cam_Contract Class
//////////////////////////////////////////////////////////////////////

map<int, Cam_Contract* > Cam_Contract::map_CamContract;

Cam_Contract::Cam_Contract()
{
	i_ContractID = -1;
	z_CreditType[0] = '\0';
}

Cam_Contract::~Cam_Contract()
{

}

Cam_Contract* Cam_Contract::Find(int iContractID)
{
	map<int, Cam_Contract* >::iterator ite;
	
	ite = map_CamContract.find(iContractID);
	if(ite != map_CamContract.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Cam_Primary_Supplementary Class
//////////////////////////////////////////////////////////////////////

map<int, Cam_Primary_Supplementary*> Cam_Primary_Supplementary::map_CamPrimarySupplimentary;

Cam_Primary_Supplementary::Cam_Primary_Supplementary()
{
	i_PrimaryContractPkgID = -1;
}

Cam_Primary_Supplementary::~Cam_Primary_Supplementary()
{

}

Cam_Primary_Supplementary* Cam_Primary_Supplementary::FindPrimary(int iPrimaryConPkgID)
{
	map<int, Cam_Primary_Supplementary*>::iterator ite;
	
	ite = map_CamPrimarySupplimentary.find(iPrimaryConPkgID);
	if(ite != map_CamPrimarySupplimentary.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Bd_Fb_Contract_Trxns_V Class
//////////////////////////////////////////////////////////////////////

map<int, Bd_Fb_Contract_Trxns_V* > Bd_Fb_Contract_Trxns_V::map_ContractBalance;

Bd_Fb_Contract_Trxns_V::Bd_Fb_Contract_Trxns_V()
{

}

Bd_Fb_Contract_Trxns_V::~Bd_Fb_Contract_Trxns_V()
{

}

Bd_Fb_Contract_Trxns_V* Bd_Fb_Contract_Trxns_V::Find(int iContractID)
{
	map<int, Bd_Fb_Contract_Trxns_V* >::iterator ite;
	
	ite = map_ContractBalance.find(iContractID);
	if(ite != map_ContractBalance.end())
		return ite->second;

	return NULL;
}

//////////////////////////////////////////////////////////////////////
// Bd_Fb_Deposits_V Class
//////////////////////////////////////////////////////////////////////

map<int, Bd_Fb_Deposits_V* > Bd_Fb_Deposits_V::map_Deposit;

Bd_Fb_Deposits_V::Bd_Fb_Deposits_V()
{

}

Bd_Fb_Deposits_V::~Bd_Fb_Deposits_V()
{

}

Bd_Fb_Deposits_V* Bd_Fb_Deposits_V::Find(int iContractID)
{
	map<int, Bd_Fb_Deposits_V* >::iterator ite;
	
	ite = map_Deposit.find(iContractID);
	if(ite != map_Deposit.end())
		return ite->second;

	return NULL;
}




