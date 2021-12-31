
///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Bulk Disconnection Engine -
// The purpose of this module is to facilitate the service disconnection Defaulted Subscribers.
// If a certain Telco subscriber / customer does not pay the due bill amounts within a certain time
// period (credit / grace period), the Telco takes action to temporary bar the services of HLR by
// sending a command through the Provisioning System. If not settled the dues within certain further
// time period, the services will be disconnected on permanent basis and the subscriber profile is
// deactivated in HLR. Bulk Disconnection Engine implements the disconnection logic by fetching the
// relevant customer and network data from CRM and Provisioning Databases, processing them and writing 
// the required results to relevant databases to facilitate the Provisioning System to send the relevant 
// commands to the HLR.
// 
////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
//
// Main.cpp
// Bulk Disconnection Engine
// main method contains here
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#pragma warning (disable:4786)

#include <iostream>
#include <time.h>
#include <fstream>

#include "DB.h"
#include "DisconnectionEngine.h"

using namespace std;

ofstream f_log;
DisconnectionEngine o_DCEngine;

int main(int argc, char** argv)
{
	//////////////////////////////////////////////////////////////////////////
	//Please increase version number when ever a release goes
	char zVersion[100];
	sprintf(zVersion,"1.0.0.1");
	//////////////////////////////////////////////////////////////////////////

	if((argc == 2) && (strcmp(argv[1],"-v") == 0))
	{
		cout<<"\n\n"<<argv[0]<<" VERSION: "<<zVersion<<"\n"<<endl;
	}
	else
	{
		if(argc != 2)
		{
			cout<<"Usage : "<<argv[0]<<" db_user/db_passwd@db "<<endl;
			exit(0);
		}
		//////////////////////////////////////////////////////////////////////////
		//Create log file with time stamp
		
		time_t  tp;
		time(&tp);
		char    zTimeLocal[100];
		zTimeLocal[0] = '\0';
		strftime(zTimeLocal, 100, "%d%m%Y%H%M%S", gmtime(&tp));
		
		char	zFileName[200]; zFileName[0] = '\0';
		sprintf(zFileName,"./Log/LogFile_%s_%s.log","OB",zTimeLocal);	//OB - Oneway Bar

		f_log.open(zFileName, ios::out);
		f_log<<"\n\n"<<argv[0]<<" VERSION: "<<zVersion<<"\n"<<endl;

		//Login("ccbs2/ccbs2@camrep2.world");
		Login(argv[1]);

		//////////////////////////////////////////////////////////////////////////
		o_DCEngine.ReadConfigParameters();
		o_DCEngine.LoadNetworkData();
		o_DCEngine.LoadFinanceData();

		o_DCEngine.PopulateDisconnectDataMap();

		o_DCEngine.InsertToPendingCommandsTable();
		o_DCEngine.InsertToBulkDisconnectionDetails();
		o_DCEngine.InsertToBulkDisconnectionSummary();
		//////////////////////////////////////////////////////////////////////////
		
		Logout();
		f_log.close();

		//////////////////////////////////////////////////////////////////////////
	}

	return 0;
}