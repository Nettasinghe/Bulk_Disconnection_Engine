
//////////////////////////////////////////////////////////////////////
//
// DisconnectionEngine.h
// Bulk Disconnection Engine
// interface for the DisconnectionEngine class
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#ifndef DC_ENGINE_H
#define DC_ENGINE_H

#include "DBObjects.h"
#include "RengDateTime.h"

//////////////////////////////////////////////////////////////////////////

class DisconnectData  
{
public:
	DisconnectData();
	~DisconnectData();

	char	z_Imsi[IMSI_LEN];
	char	z_MobileNo[MOBILE_NO_LEN];
	char	z_CreditType[CREDIT_TYPE_LEN];
	char	z_Status[STATUS_LEN];
	int		i_ImageID;
	int		i_ConnectionID;
	int		i_PkgContarctID;
	int		i_ContractID;
	double	d_OutstandingAmount;
};

//////////////////////////////////////////////////////////////////////////

class DisconnectionEngine  
{
public:
	double d_LastExecutedOutstanding;
	int i_TotalActionRejected;
	int i_TotalActionTaken;
	bool IsExemptedContractID(int iContractID);
	void LoadExemptedContractIDsCREDIT();
	void LoadExemptedContractIDsMBC();
	int GetNextGroupID();
	void InsertToPendingCommandsTable();
	void InsertToBulkDisconnectionSummary();
	void InsertToBulkDisconnectionDetails();
	bool IsApplicableCreditType(char* zCreditType);
	bool LoadFinanceData();
	void ReadConfigParameters();
	void PopulateDisconnectDataMap();
	void LoadExemptedDate(int iDateOffsetFromToday);
	bool LoadNetworkData();
	DisconnectionEngine();
	virtual ~DisconnectionEngine();

	Prov_Switch_Image			o_Prov_Switch_Image;
	Dyn_1_Connection			o_Dyn_1_Connection;
	Cam_Connection				o_Cam_Connection;
	Cam_Contract_Package		o_Cam_Contract_Package;
	Cam_Contract				o_Cam_Contract;
	Cam_Primary_Supplementary	o_Cam_Primary_Supplementary;

	Bd_Fb_Contract_Trxns_V		o_Bd_Fb_Contract_Trxns_V;
	Bd_Fb_Deposits_V			o_Bd_Fb_Deposits_V;

	RengDateTime				o_ExemptedDate;
	char	z_RowID[ROW_ID_LEN];
	char	z_BillRunCode[BILL_RUN_CODE_LEN];
	char	z_OperationMode[OPERATION_MODE_LEN];
	double	d_MinOutstanding;
	int		i_MaxActionCount;
	int		i_ExemptedDays;

	map<int, int >				map_ExemptedContractIDs;	//Key - Exempted ContractID, data - any
	map<char*, int, ltstr >		map_ApplicableCreditTypes;
	char	z_StatusReason[STATUS_REASON_CODE_LEN];
	char	z_ActionCode[ACTION_CODE_LEN];

	//Key - outstanding amounts, data - (key ~ contract id , data ~ DisconnectData pointer)
	map<double, map<int,DisconnectData* >* >		map_MaxOutstandingAmounts;
};

//////////////////////////////////////////////////////////////////////////

#endif
