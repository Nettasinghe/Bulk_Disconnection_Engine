
//////////////////////////////////////////////////////////////////////
//
// Globals.h
// global definitions for Bulk Disconnection Engine
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#ifndef GLOBALS_H
#define GLOBALS_H

#include <string>

//////////////////////////////////////////////////////////////////////////

struct ltstr
{
    bool operator()(const char* s1, const char* s2) const
    {
		return strcmp(s1, s2) < 0;
    }
};


//////////////////////////////////////////////////////////////////////////

#define		MOBILE_NO_LEN			20
#define		IMSI_LEN				15
#define		BILL_RUN_CODE_LEN		10
#define		CREDIT_TYPE_LEN			5
#define		DATE_LEN				20
#define		OPERATION_MODE_LEN		10
#define		APPLICABLE_CREDIT_TYPE_LEN	30
#define		ROW_ID_LEN				50
#define		TRAN_TYPE_LEN			10
#define		STATUS_LEN				10
#define		ACTION_LEN				10
#define		ACTION_CODE_LEN			5
#define		SERVICE_LEN				10
#define		INDIVIDUAL_BATCH_LEN	1
#define		PROVISION_LOCATION_LEN	10
#define		STATUS_REASON_CODE_LEN	5
#define		OPERATOR_LEN			30

#endif
