
//////////////////////////////////////////////////////////////////////
//
// DBObjects.h
// classes definitions for Bulk Disconnection Engine
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#ifndef DB_OBJECTS_H
#define DB_OBJECTS_H

#include "Globals.h"
#include <map>
#include <list>

using namespace std;

//////////////////////////////////////////////////////////////////////////
class DisconnectData;

class Prov_Switch_Image  
{
public:
	static Prov_Switch_Image* Find(char* zImsi);
	void Load(char* zBillRunCode);
	Prov_Switch_Image();
	~Prov_Switch_Image();

	char	z_Imsi[IMSI_LEN];
	int		i_ImageID;

	static map<char*, Prov_Switch_Image*, ltstr> map_ProvSwitchImage;	//Key - Imsi

	DisconnectData* pDisconnectData;
};


//////////////////////////////////////////////////////////////////////////

class Dyn_1_Connection  
{
public:
	static Dyn_1_Connection* FindByImsi(char* zImsi);
	static Dyn_1_Connection* Find(int iConnectionID);
	void Load(char* zBillRunCode);
	Dyn_1_Connection();
	~Dyn_1_Connection();

	int		i_ConnectionID;
	char	z_Imsi[IMSI_LEN];
	char	z_MobileNo[MOBILE_NO_LEN];

	static map<int, Dyn_1_Connection* >		map_Dyn1Connection;					//Key - ConnectionID
	static map<char* ,Dyn_1_Connection*, ltstr >	map_Dyn1ConnectionByImsi;	//Key - Imsi
};

//////////////////////////////////////////////////////////////////////////

class Cam_Connection  
{
public:
	static Cam_Connection* Find(int iConnectionID);
	void Load(char* zBillRunCode);
	Cam_Connection();
	~Cam_Connection();

	int		i_ConnectionID;
	int		i_PkgContarctID;
	int		i_ImageID;

	static map<int, Cam_Connection* >		map_CamConnection;		//Key - ConnectionID
};

//////////////////////////////////////////////////////////////////////////

class Cam_Contract_Package  
{
public:
	static Cam_Contract_Package* Find(int iContractPkgID);
	void Load(char* zBillRunCode);
	Cam_Contract_Package();
	~Cam_Contract_Package();

	int		i_ContractPkgID;
	int		i_ContractID;

	static map<int, Cam_Contract_Package* >	map_CamContractPkg;		//Key - ContractPkgID
};

//////////////////////////////////////////////////////////////////////////

class Cam_Contract  
{
public:
	static Cam_Contract* Find(int iContractID);
	void Load(char* zBillRunCode);
	Cam_Contract();
	~Cam_Contract();

	int		i_ContractID;
	char	z_CreditType[CREDIT_TYPE_LEN];

	static map<int, Cam_Contract* >			map_CamContract;		//Key - ContractID
};

//////////////////////////////////////////////////////////////////////////

class Cam_Primary_Supplementary  
{
public:
	static Cam_Primary_Supplementary* FindPrimary(int iPrimaryConPkgID);
	void Load();
	Cam_Primary_Supplementary();
	~Cam_Primary_Supplementary();

	int		i_PrimaryContractPkgID;

	static map<int, Cam_Primary_Supplementary*>		map_CamPrimarySupplimentary;	//Key - Primary Contract Pkg ID

	list<int>	lst_SupplimentaryContractPkgIDs;
};

//////////////////////////////////////////////////////////////////////////

class Bd_Fb_Contract_Trxns_V  
{
public:
	static Bd_Fb_Contract_Trxns_V* Find(int iContractID);
	void Load();
	Bd_Fb_Contract_Trxns_V();
	~Bd_Fb_Contract_Trxns_V();

	double	d_TranAmount;
	double	d_ExemptedBillAmount;

	int		i_ContractID;

	static	map<int, Bd_Fb_Contract_Trxns_V* >		map_ContractBalance;		//Key - Contarct ID
};

//////////////////////////////////////////////////////////////////////////

class Bd_Fb_Deposits_V
{
public:
	static Bd_Fb_Deposits_V* Find(int iContractID);
	void Load();
	Bd_Fb_Deposits_V();
	~Bd_Fb_Deposits_V();

	double	d_DepositAmount;
	double	d_CreditLimit;

	int		i_ContractID;
	int		i_ContractPkgID;

	static map<int, Bd_Fb_Deposits_V* >			map_Deposit;			//Key - Contract ID
};

#endif

//////////////////////////////////////////////////////////////////////////