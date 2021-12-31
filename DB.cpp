
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[40];
};
static const struct sqlcxp sqlfpn =
{
    39,
    "d:\\projects\\bulkdisconnection\\src\\db.pc"
};


static unsigned int sqlctx = 391469099;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[11];
   unsigned int   sqhstl[11];
            int   sqhsts[11];
            void  *sqindv[11];
            int   sqinds[11];
   unsigned int   sqharm[11];
   unsigned int   *sqharc[11];
   unsigned short  sqadto[11];
   unsigned short  sqtdso[11];
} sqlstm = {12,11};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(char *, int *); }

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4146,178,0,0,
5,0,0,1,0,0,32,29,0,0,0,0,0,1,0,
20,0,0,2,0,0,27,54,0,0,4,4,0,1,0,1,5,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,59,0,1,55,0,0,0,0,0,1,0,
66,0,0,4,0,0,30,67,0,0,0,0,0,1,0,
81,0,0,5,0,0,17,105,0,0,1,1,0,1,0,1,5,0,0,
100,0,0,5,0,0,45,108,0,0,0,0,0,1,0,
115,0,0,5,0,0,13,113,0,0,1,0,0,1,0,2,3,0,0,
134,0,0,5,0,0,15,132,0,0,0,0,0,1,0,
149,0,0,5,0,0,17,171,0,0,1,1,0,1,0,1,5,0,0,
168,0,0,5,0,0,45,174,0,0,0,0,0,1,0,
183,0,0,5,0,0,13,179,0,0,1,0,0,1,0,2,3,0,0,
202,0,0,5,0,0,15,198,0,0,0,0,0,1,0,
217,0,0,5,0,0,17,238,0,0,1,1,0,1,0,1,5,0,0,
236,0,0,5,0,0,45,241,0,0,0,0,0,1,0,
251,0,0,5,0,0,13,246,0,0,2,0,0,1,0,2,3,0,0,2,5,0,0,
274,0,0,5,0,0,15,270,0,0,0,0,0,1,0,
289,0,0,5,0,0,17,312,0,0,1,1,0,1,0,1,5,0,0,
308,0,0,5,0,0,45,315,0,0,0,0,0,1,0,
323,0,0,5,0,0,13,320,0,0,3,0,0,1,0,2,3,0,0,2,5,0,0,2,5,0,0,
350,0,0,5,0,0,15,347,0,0,0,0,0,1,0,
365,0,0,5,0,0,17,388,0,0,1,1,0,1,0,1,5,0,0,
384,0,0,5,0,0,45,391,0,0,0,0,0,1,0,
399,0,0,5,0,0,13,396,0,0,3,0,0,1,0,2,3,0,0,2,1,0,0,2,1,0,0,
426,0,0,5,0,0,15,421,0,0,0,0,0,1,0,
441,0,0,5,0,0,17,459,0,0,1,1,0,1,0,1,5,0,0,
460,0,0,5,0,0,45,462,0,0,0,0,0,1,0,
475,0,0,5,0,0,13,467,0,0,2,0,0,1,0,2,3,0,0,2,3,0,0,
498,0,0,5,0,0,15,491,0,0,0,0,0,1,0,
513,0,0,5,0,0,17,529,0,0,1,1,0,1,0,1,5,0,0,
532,0,0,5,0,0,45,532,0,0,0,0,0,1,0,
547,0,0,5,0,0,13,537,0,0,2,0,0,1,0,2,3,0,0,2,5,0,0,
570,0,0,5,0,0,15,561,0,0,0,0,0,1,0,
585,0,0,5,0,0,17,599,0,0,1,1,0,1,0,1,5,0,0,
604,0,0,5,0,0,45,602,0,0,0,0,0,1,0,
619,0,0,5,0,0,13,607,0,0,2,0,0,1,0,2,3,0,0,2,3,0,0,
642,0,0,5,0,0,15,639,0,0,0,0,0,1,0,
657,0,0,6,41,0,4,656,0,0,2,1,0,1,0,1,3,0,0,2,5,0,0,
680,0,0,7,90,0,4,686,0,0,1,0,0,1,0,2,5,0,0,
699,0,0,8,233,0,4,691,0,0,8,1,0,1,0,2,5,0,0,2,5,0,0,2,5,0,0,2,4,0,0,2,5,0,0,2,
3,0,0,2,3,0,0,1,5,0,0,
746,0,0,5,0,0,17,778,0,0,1,1,0,1,0,1,5,0,0,
765,0,0,5,0,0,45,781,0,0,0,0,0,1,0,
780,0,0,5,0,0,13,786,0,0,4,0,0,1,0,2,3,0,0,2,5,0,0,2,5,0,0,2,4,0,0,
811,0,0,5,0,0,15,833,0,0,0,0,0,1,0,
826,0,0,5,0,0,17,875,0,0,1,1,0,1,0,1,5,0,0,
845,0,0,5,0,0,45,878,0,0,0,0,0,1,0,
860,0,0,5,0,0,13,883,0,0,4,0,0,1,0,2,3,0,0,2,4,0,0,2,4,0,0,2,3,0,0,
891,0,0,5,0,0,15,917,0,0,0,0,0,1,0,
906,0,0,9,35,0,4,946,0,0,1,0,0,1,0,2,5,0,0,
925,0,0,10,167,0,3,960,0,0,7,7,0,1,0,1,3,0,0,1,5,0,0,1,4,0,0,1,5,0,0,1,5,0,0,1,
5,0,0,1,5,0,0,
968,0,0,11,167,0,3,1007,0,0,7,7,0,1,0,1,3,0,0,1,5,0,0,1,4,0,0,1,5,0,0,1,5,0,0,
1,5,0,0,1,5,0,0,
1011,0,0,12,0,0,29,1013,0,0,0,0,0,1,0,
1026,0,0,13,148,0,3,1034,0,0,4,4,0,1,0,1,5,0,0,1,3,0,0,1,3,0,0,1,4,0,0,
1057,0,0,14,0,0,29,1038,0,0,0,0,0,1,0,
1072,0,0,15,75,0,6,1051,0,0,1,1,0,1,0,2,3,0,0,
1091,0,0,16,35,0,4,1091,0,0,1,0,0,1,0,2,5,0,0,
1110,0,0,17,225,0,6,1129,0,0,11,11,0,1,0,1,3,0,0,1,3,0,0,1,5,0,0,1,5,0,0,1,5,0,
0,1,5,0,0,1,5,0,0,1,5,0,0,1,5,0,0,1,3,0,0,1,5,0,0,
1169,0,0,18,0,0,29,1163,0,0,0,0,0,1,0,
};


#line 1 "d:\\projects\\bulkdisconnection\\src\\db.pc"
#pragma warning (disable:4786)

#include "DB.h"
#include "Globals.h"
#include "DBObjects.h"
#include "DisconnectionEngine.h"

#include <oraca.h>
#include <sqlda.h>
#include <sqlca.h>
#include <iostream>
#include <fstream>

using namespace std;

extern ofstream f_log;
extern DisconnectionEngine o_DCEngine;

void SqlError(char* zErr)
{
	cout << endl << zErr << endl;
    sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = '\0';
    oraca.orastxt.orastxtc[oraca.orastxt.orastxtl] = '\0';
    oraca.orasfnm.orasfnmc[oraca.orasfnm.orasfnml] = '\0';
    cout << sqlca.sqlerrm.sqlerrmc << endl;
    cout << "in " << oraca.orastxt.orastxtc << endl;
    cout << "on line " << oraca.oraslnr << " of " << oraca.orasfnm.orasfnmc
         << endl << endl;
    /* EXEC SQL ROLLBACK RELEASE; */ 
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    struct sqlexd sqlstm;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqlvsn = 12;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.arrsiz = 0;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.iters = (unsigned int  )1;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.offset = (unsigned int  )5;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.cud = sqlcud0;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 29 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	//////////////////////////////////////////////////////////////////////////
	f_log << endl << zErr << endl;
    f_log << sqlca.sqlerrm.sqlerrmc << endl;
    f_log.close();
	//////////////////////////////////////////////////////////////////////////

    exit(1);
}

////////////////////////////////////////////////////////////////////////////////////

void Login(char* zLoginString)
{
	f_log << "\nConnecting to ORACLE" << endl;

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 46 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		char *zLogin; 
	/* EXEC SQL END DECLARE SECTION; */ 
#line 48 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error--"); */ 
#line 50 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	zLogin = zLoginString;
 
	/* EXEC SQL CONNECT :zLogin; */ 
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )10;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )20;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zLogin;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlcmax = (unsigned int )100;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlcmin = (unsigned int )2;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlcincr = (unsigned int )1;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlctimeout = (unsigned int )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlcnowait = (unsigned int )0;
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error--");
#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 54 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL ALTER SESSION SET NLS_DATE_FORMAT="DD/MM/YYYY HH24:MI:SS"; */ 
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = \"DD/MM/YYYY HH24:MI:SS\"";
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )51;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error--");
#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 55 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	cout<<"\nConnected  to Database"<<endl<<endl; 
	f_log<<"\nConnected  to Database"<<endl<<endl; 
}

////////////////////////////////////////////////////////////////////////////////////

void Logout()
{
	cout<<"\nDisconnect from oracle"<<endl;
	f_log<<"\nDisconnect from oracle"<<endl; 
    /* EXEC SQL COMMIT WORK RELEASE; */ 
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    struct sqlexd sqlstm;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqlvsn = 12;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.arrsiz = 4;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqladtp = &sqladt;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqltdsp = &sqltds;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.iters = (unsigned int  )1;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.offset = (unsigned int  )66;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.cud = sqlcud0;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.sqlety = (unsigned short)256;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
    if (sqlca.sqlcode < 0) SqlError("ORACLE error--");
#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 67 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 
}

////////////////////////////////////////////////////////////////////////////////////
//Loading the contract ids which should not-consider for the disconnection
void DisconnectionEngine::LoadExemptedContractIDsCREDIT()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsCREDIT "); */ 
#line 74 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 75 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stExempted_Mbc
	{ 
  		int		iContractID;
	}a[FETCH_SIZE];

	struct stExempted_MbcInd
	{ 
		short	iContractID;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 93 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT CONTRACT_ID \
			FROM BD_CONTRACTS_EXEMPTED_CREDIT \
			WHERE EXEMPT_TILL_DATE IS NOT NULL \
			AND EXEMPT_TILL_DATE > SYSDATE");

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )81;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsCREDIT ");
#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 105 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curExempCredit CURSOR FOR built_query; */ 
#line 106 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curExempCredit; */ 
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )100;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsCREDIT ");
#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 108 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 109 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curExempCredit INTO :a INDICATOR :a_ind; */ 
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )115;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stExempted_Mbc);
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iContractID;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stExempted_MbcInd);
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsCREDIT ");
#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 113 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if(a_ind[i].iContractID < 0)
			{
				f_log<<"\nError indicator CONTRACT_ID in BD_CONTRACTS_EXEMPTED_CREDIT"<<endl;
			}
			else
			{
				map_ExemptedContractIDs.insert(make_pair(a[i].iContractID,2));
			}
		}
	}

	f_log<<"Loaded BD_CONTRACTS_EXEMPTED_CREDIT and BD_CONTRACTS_EXEMPTED_MBC "<<map_ExemptedContractIDs.size()<<endl;

	/* EXEC SQL CLOSE curExempCredit; */ 
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )134;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsCREDIT ");
#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 132 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////
//Loading the contract ids which should not-consider for the disconnection

void DisconnectionEngine::LoadExemptedContractIDsMBC()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsMBC "); */ 
#line 140 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 141 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stExempted_Mbc
	{ 
  		int		iContractID;
	}a[FETCH_SIZE];

	struct stExempted_MbcInd
	{ 
		short	iContractID;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 159 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT CONTRACT_ID \
			FROM BD_CONTRACTS_EXEMPTED_MBC \
			WHERE EXEMPT_TILL_DATE IS NOT NULL \
			AND EXEMPT_TILL_DATE > SYSDATE");

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )149;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsMBC ");
#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 171 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curExempMbc CURSOR FOR built_query; */ 
#line 172 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curExempMbc; */ 
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )168;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsMBC ");
#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 174 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 175 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curExempMbc INTO :a INDICATOR :a_ind; */ 
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )183;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stExempted_Mbc);
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iContractID;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stExempted_MbcInd);
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsMBC ");
#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 179 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if(a_ind[i].iContractID < 0)
			{
				f_log<<"\nError indicator CONTRACT_ID in BD_CONTRACTS_EXEMPTED_MBC"<<endl;
			}
			else
			{
				map_ExemptedContractIDs.insert(make_pair(a[i].iContractID,1));
			}
		}
	}

	f_log<<"Loaded BD_CONTRACTS_EXEMPTED_MBC "<<map_ExemptedContractIDs.size()<<endl;

	/* EXEC SQL CLOSE curExempMbc; */ 
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )202;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedContractIDsMBC ");
#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 198 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void Prov_Switch_Image::Load(char* zBillRunCode)
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Prov_Switch_Image::Load "); */ 
#line 205 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 206 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stProv_Switch_Image
	{ 
  		int		iImageID;
		char	zIMSI[IMSI_LEN];
	}a[FETCH_SIZE];

	struct stProv_Switch_ImageInd
	{ 
		short	iImageID;
		short	iIMSI;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 226 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT IMAGE_ID, IMSI_NO \
			FROM PROV_SWITCH_IMAGE PARTITION (%s) \
			WHERE SWITCH_STATUS in ('C','B') \
			AND CONN_TYPE <> 'VOICEPRE'",zBillRunCode);

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )217;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Prov_Switch_Image::Load ");
#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 238 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curPSI CURSOR FOR built_query; */ 
#line 239 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curPSI; */ 
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )236;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Prov_Switch_Image::Load ");
#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 241 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 242 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curPSI INTO :a INDICATOR :a_ind; */ 
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )251;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iImageID;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stProv_Switch_Image);
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iImageID;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stProv_Switch_ImageInd);
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->zIMSI;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )15;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stProv_Switch_Image);
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iIMSI;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stProv_Switch_ImageInd);
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Prov_Switch_Image::Load ");
#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 246 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iImageID < 0) || (a_ind[i].iIMSI < 0))
			{
				f_log<<"\nError indicator IMAGE_ID/IMSI in PROV_SWITCH_IMAGE"<<endl;
			}
			else
			{
				Prov_Switch_Image* pPSI = new Prov_Switch_Image();

				pPSI->i_ImageID = a[i].iImageID;
				strcpy(pPSI->z_Imsi,a[i].zIMSI);

				map_ProvSwitchImage.insert(make_pair((char*)pPSI->z_Imsi,pPSI));
			}
		}
	}

	f_log<<"Loaded PROV_SWITCH_IMAGE "<<map_ProvSwitchImage.size()<<endl;

	/* EXEC SQL CLOSE curPSI; */ 
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )274;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Prov_Switch_Image::Load ");
#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 270 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void Dyn_1_Connection::Load(char *zBillRunCode)
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Dyn_1_Connection::Load "); */ 
#line 277 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 278 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stDyn_1_Connection
	{ 
  		int		iConnectionID;
		char	zIMSI[IMSI_LEN];
		char	zMobileNo[MOBILE_NO_LEN];
	}a[FETCH_SIZE];

	struct stDyn_1_ConnectionInd
	{ 
		short	iConnectionID;
		short	iIMSI;
		short	iMobileNo;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 300 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT MIN(CONNECTION_ID),IMSI,MOBILE_NO \
					FROM DYN_1_CONNECTION PARTITION (%s) \
					WHERE SERVICE_ID IN (1,2,3) \
					GROUP BY IMSI, MOBILE_NO",zBillRunCode);

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )289;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Dyn_1_Connection::Load ");
#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 312 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curD1C CURSOR FOR built_query; */ 
#line 313 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curD1C; */ 
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )308;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Dyn_1_Connection::Load ");
#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 315 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 316 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curD1C INTO :a INDICATOR :a_ind; */ 
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )323;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iConnectionID;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stDyn_1_Connection);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iConnectionID;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stDyn_1_ConnectionInd);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->zIMSI;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )15;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stDyn_1_Connection);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iIMSI;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stDyn_1_ConnectionInd);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->zMobileNo;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )20;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct stDyn_1_Connection);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->iMobileNo;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct stDyn_1_ConnectionInd);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[2] = (unsigned int   *)0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Dyn_1_Connection::Load ");
#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 320 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iConnectionID < 0) || (a_ind[i].iIMSI < 0) || (a_ind[i].iMobileNo < 0))
			{
				f_log<<"\nError indicator CONNECTION_ID/IMSI/MOBILE_NO in DYN_1_CONNECTION"<<endl;
			}
			else
			{
				Dyn_1_Connection* pD1C = new Dyn_1_Connection();

				pD1C->i_ConnectionID = a[i].iConnectionID;
				strcpy(pD1C->z_Imsi,a[i].zIMSI);
				strcpy(pD1C->z_MobileNo,a[i].zMobileNo);

				map_Dyn1Connection.insert(make_pair(pD1C->i_ConnectionID,pD1C));
				map_Dyn1ConnectionByImsi.insert(make_pair((char*)pD1C->z_Imsi,pD1C));
			}
		}
	}

	f_log<<"Loaded DYN_1_CONNECTION by ConnectionID "<<map_Dyn1Connection.size()<<endl;
	f_log<<"Loaded DYN_1_CONNECTION by Imsi "<<map_Dyn1Connection.size()<<endl;

	/* EXEC SQL CLOSE curD1C; */ 
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )350;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Dyn_1_Connection::Load ");
#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 347 "d:\\projects\\bulkdisconnection\\src\\db.pc"


}

////////////////////////////////////////////////////////////////////////////////////

void Cam_Connection::Load(char *zBillRunCode)
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Cam_Connection::Load "); */ 
#line 355 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 356 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stCam_Connection
	{ 
  		int		iConnectionID;
		char	iPkgContractID;
		char	iImageID;
	}a[FETCH_SIZE];

	struct stCam_ConnectionInd
	{ 
		short	iConnectionID;
		short	iPkgContractID;
		short	iImageID;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 378 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT CONNECTION_ID,PACKAGE_CONTRACT_ID,IMAGE_ID \
					FROM CAM_CONNECTION PARTITION (%s)",zBillRunCode);

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )365;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Connection::Load ");
#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 388 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curCC CURSOR FOR built_query; */ 
#line 389 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curCC; */ 
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )384;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Connection::Load ");
#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 391 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 392 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curCC INTO :a INDICATOR :a_ind; */ 
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )399;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iConnectionID;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stCam_Connection);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iConnectionID;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stCam_ConnectionInd);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->iPkgContractID;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )1;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stCam_Connection);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iPkgContractID;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stCam_ConnectionInd);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->iImageID;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )1;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct stCam_Connection);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->iImageID;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct stCam_ConnectionInd);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[2] = (unsigned int   *)0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Connection::Load ");
#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 396 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iConnectionID < 0) || (a_ind[i].iPkgContractID < 0) || (a_ind[i].iImageID < 0))
			{
				f_log<<"\nError indicator CONNECTION_ID/PACKAGE_CONTRACT_ID/IMAGE_ID in CAM_CONNECTION"<<endl;
			}
			else
			{
				Cam_Connection* pCC = new Cam_Connection();

				pCC->i_ConnectionID = a[i].iConnectionID;
				pCC->i_PkgContarctID = a[i].iPkgContractID;
				pCC->i_ImageID = a[i].iImageID;

				map_CamConnection.insert(make_pair(pCC->i_ConnectionID,pCC));
			}
		}
	}

	f_log<<"Loaded CAM_CONNECTION "<<map_CamConnection.size()<<endl;

	/* EXEC SQL CLOSE curCC; */ 
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )426;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Connection::Load ");
#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 421 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void Cam_Contract_Package::Load(char *zBillRunCode)
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Cam_Contract_Package::Load "); */ 
#line 428 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 429 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stCam_Contract_Package
	{ 
		int		iContractPkgID;
  		int		iContractID;
	}a[FETCH_SIZE];

	struct stCam_Contract_PackageInd
	{ 
		short	iContractPkgID;
		short	iContractID;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 449 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT CONTRACT_PACKAGE_ID,CONTRACT_ID \
					FROM CAM_CONTRACT_PACKAGE PARTITION (%s)",zBillRunCode);

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )441;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract_Package::Load ");
#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 459 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curCCP CURSOR FOR built_query; */ 
#line 460 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curCCP; */ 
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )460;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract_Package::Load ");
#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 462 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 463 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curCCP INTO :a INDICATOR :a_ind; */ 
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )475;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iContractPkgID;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stCam_Contract_Package);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iContractPkgID;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stCam_Contract_PackageInd);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->iContractID;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stCam_Contract_Package);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iContractID;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stCam_Contract_PackageInd);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract_Package::Load ");
#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 467 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iContractPkgID < 0) || (a_ind[i].iContractID < 0))
			{
				f_log<<"\nError indicator CONTRACT_PACKAGE_ID/CONTRACT_ID in CAM_CONTRACT_PACKAGE"<<endl;
			}
			else
			{
				Cam_Contract_Package* pCCP = new Cam_Contract_Package();

				pCCP->i_ContractPkgID = a[i].iContractPkgID;
				pCCP->i_ContractID = a[i].iContractID;

				map_CamContractPkg.insert(make_pair(pCCP->i_ContractPkgID,pCCP));
			}
		}
	}

	f_log<<"Loaded CAM_CONTRACT_PACKAGE "<<map_CamContractPkg.size()<<endl;

	/* EXEC SQL CLOSE curCCP; */ 
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )498;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract_Package::Load ");
#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 491 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void Cam_Contract::Load(char *zBillRunCode)
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Cam_Contract::Load "); */ 
#line 498 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 499 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stCam_Contract_Package
	{ 
  		int		iContractID;
		char	zCreditType[CREDIT_TYPE_LEN];
	}a[FETCH_SIZE];

	struct stCam_Contract_PackageInd
	{ 
		short	iContractID;
		short	iCreditType;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 519 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT CONTRACT_ID,CREDIT_TYPE \
					FROM CAM_CONTRACT PARTITION (%s)",zBillRunCode);

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )513;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract::Load ");
#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 529 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curCCon CURSOR FOR built_query; */ 
#line 530 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curCCon; */ 
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )532;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract::Load ");
#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 532 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 533 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curCCon INTO :a INDICATOR :a_ind; */ 
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )547;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stCam_Contract_Package);
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iContractID;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stCam_Contract_PackageInd);
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->zCreditType;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )5;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stCam_Contract_Package);
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iCreditType;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stCam_Contract_PackageInd);
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract::Load ");
#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 537 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iContractID < 0) || (a_ind[i].iCreditType < 0))
			{
				f_log<<"\nError indicator CONTRACT_ID/CREDIT_TYPE in CAM_CONTRACT"<<endl;
			}
			else
			{
				Cam_Contract* pCCon = new Cam_Contract();

				pCCon->i_ContractID = a[i].iContractID;
				strcpy(pCCon->z_CreditType,a[i].zCreditType);

				map_CamContract.insert(make_pair(pCCon->i_ContractID,pCCon));
			}
		}
	}

	f_log<<"Loaded CAM_CONTRACT "<<map_CamContract.size()<<endl;

	/* EXEC SQL CLOSE curCCon; */ 
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )570;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Contract::Load ");
#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 561 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void Cam_Primary_Supplementary::Load()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Cam_Primary_Supplementary::Load "); */ 
#line 568 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 569 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stCam_Primary_Supplementary
	{ 
  		int		iPrimaryConPkgID;
		int		iSecondConPkgID;
	}a[FETCH_SIZE];

	struct stCam_Primary_SupplementaryInd
	{ 
		short	iPrimaryConPkgID;
		short	iSecondConPkgID;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 589 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT PRIMARY_CONTRACT_PACKAGE_ID,SUPP_CONTRACT_PACKAGE_ID \
						FROM CAM_PRIMARY_SUPPLEMENTARY WHERE IS_ACTIVE = 'T'");

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )585;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Primary_Supplementary::Load ");
#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 599 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curPS CURSOR FOR built_query; */ 
#line 600 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curPS; */ 
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )604;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Primary_Supplementary::Load ");
#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 602 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 603 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curPS INTO :a INDICATOR :a_ind; */ 
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 4;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )619;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iPrimaryConPkgID;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stCam_Primary_Supplementary);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iPrimaryConPkgID;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stCam_Primary_SupplementaryInd);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->iSecondConPkgID;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stCam_Primary_Supplementary);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iSecondConPkgID;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stCam_Primary_SupplementaryInd);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Primary_Supplementary::Load ");
#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 607 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iPrimaryConPkgID < 0) || (a_ind[i].iSecondConPkgID < 0))
			{
				f_log<<"\nError indicator PRIMARY_CONTRACT_PACKAGE_ID/SUPP_CONTRACT_PACKAGE_ID in CAM_PRIMARY_SUPPLEMENTARY"<<endl;
			}
			else
			{
				Cam_Primary_Supplementary* pPS = Cam_Primary_Supplementary::FindPrimary(a[i].iPrimaryConPkgID);

				if(pPS == NULL)
				{
					pPS = new Cam_Primary_Supplementary();
					pPS->i_PrimaryContractPkgID = a[i].iPrimaryConPkgID;
					pPS->lst_SupplimentaryContractPkgIDs.push_back(a[i].iSecondConPkgID);

					map_CamPrimarySupplimentary.insert(make_pair(pPS->i_PrimaryContractPkgID,pPS));
				}
				else
				{
					pPS->lst_SupplimentaryContractPkgIDs.push_back(a[i].iSecondConPkgID);
				}
			}
		}
	}

	f_log<<"Loaded CAM_CONTRACT "<<map_CamPrimarySupplimentary.size()<<endl;

	/* EXEC SQL CLOSE curPS; */ 
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )642;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Cam_Primary_Supplementary::Load ");
#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 639 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void DisconnectionEngine::LoadExemptedDate(int iDateOffsetFromToday)
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::LoadExemptedDate "); */ 
#line 646 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 648 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		char	zExcemptedDate[DATE_LEN];
		int		iDateOffSet;
	/* EXEC SQL END DECLARE SECTION; */ 
#line 651 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	zExcemptedDate[0] = '\0';
	iDateOffSet = iDateOffsetFromToday;
	
	/* EXEC SQL SELECT SYSDATE - :iDateOffSet INTO :zExcemptedDate FROM DUAL; */ 
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "select (SYSDATE-:b0) into :b1  from DUAL ";
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )657;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)&iDateOffSet;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[1] = (         void  *)zExcemptedDate;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[1] = (unsigned int  )20;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[1] = (         int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[1] = (         void  *)0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[1] = (unsigned int  )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::LoadExemptedDate ");
#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 656 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	o_ExemptedDate.setRengDateTime(zExcemptedDate);

	f_log<<"Exempted Date "<<o_ExemptedDate.o_Date.i_Year<<":"<<o_ExemptedDate.o_Date.i_Month<<":"
		 <<o_ExemptedDate.o_Date.i_Day<<" "<<o_ExemptedDate.o_Time.i_Hour<<":"
		 <<o_ExemptedDate.o_Time.i_Min<<":"<<o_ExemptedDate.o_Time.i_Second<<endl;
}

////////////////////////////////////////////////////////////////////////////////////

void DisconnectionEngine::ReadConfigParameters()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::ReadConfigParameters 1 "); */ 
#line 669 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 671 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		char	zMaxEnteredDate[DATE_LEN];

		char	zRowID[ROW_ID_LEN];
		char	zBillRunCode[BILL_RUN_CODE_LEN];
		char	zOperationMode[OPERATION_MODE_LEN];
		double	dMinOutstanding;
		char	zApplicableCreditTypes[APPLICABLE_CREDIT_TYPE_LEN];
		int		iMaxActionCount;
		int		iExemptedDays;

	/* EXEC SQL END DECLARE SECTION; */ 
#line 682 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	zMaxEnteredDate[0] = '\0';
	
	/* EXEC SQL SELECT MAX(ENTERED_TIME) INTO :zMaxEnteredDate FROM BD_CONFIG_PARAMETERS  \
	WHERE COMPLETED_TIME IS NULL; */ 
#line 687 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 4;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "select max(ENTERED_TIME) into :b0  from BD_CONFIG_PARAMETERS\
 where COMPLETED_TIME is null ";
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )680;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zMaxEnteredDate;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::ReadConfigParameters 1 ");
#line 686 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 687 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::ReadConfigParameters 2 "); */ 
#line 689 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL SELECT ROWID, BILL_RUN_CODE, OPERATION_MODE, MIN_OUTSTANDING, APPLICABLE_CREDIT_TYPE, MAX_ACTION_COUNT, EXEMPTED_DAYS
			INTO :zRowID, :zBillRunCode, :zOperationMode, :dMinOutstanding , :zApplicableCreditTypes, :iMaxActionCount, :iExemptedDays\
			FROM BD_CONFIG_PARAMETERS \
			WHERE ENTERED_TIME = TO_DATE(:zMaxEnteredDate,'DD/MM/YYYY HH24:MI:SS'); */ 
#line 694 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "select ROWID ,BILL_RUN_CODE ,OPERATION_MODE ,MIN_OUTSTANDING\
 ,APPLICABLE_CREDIT_TYPE ,MAX_ACTION_COUNT ,EXEMPTED_DAYS into :b0,:b1,:b2,:b3\
,:b4,:b5,:b6  from BD_CONFIG_PARAMETERS where ENTERED_TIME=TO_DATE(:b7,'DD/MM/\
YYYY HH24:MI:SS')";
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )699;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zRowID;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )50;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[1] = (         void  *)zBillRunCode;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[1] = (unsigned int  )10;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[1] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[1] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[1] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[2] = (         void  *)zOperationMode;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[2] = (unsigned int  )10;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[2] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[2] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[2] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[2] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[2] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[2] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[3] = (         void  *)&dMinOutstanding;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[3] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[3] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[3] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[3] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[3] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[3] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[4] = (         void  *)zApplicableCreditTypes;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[4] = (unsigned int  )30;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[4] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[4] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[4] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[4] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[4] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[4] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[5] = (         void  *)&iMaxActionCount;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[5] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[5] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[5] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[5] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[5] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[5] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[6] = (         void  *)&iExemptedDays;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[6] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[6] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[6] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[6] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[6] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[6] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[7] = (         void  *)zMaxEnteredDate;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[7] = (unsigned int  )20;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[7] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[7] = (         void  *)0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[7] = (         int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[7] = (unsigned int  )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[7] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[7] = (unsigned short )0;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::ReadConfigParameters 2 ");
#line 691 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 694 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	//////////////////////////////////////////////////////////
	const char* zDelimiter = ",";
    char* zToken = " ";

	zToken = strtok(zApplicableCreditTypes,zDelimiter);

	while(zToken != NULL )
	{
		char* zTmp = new char[CREDIT_TYPE_LEN];
		strcpy(zTmp,zToken);

		map_ApplicableCreditTypes.insert(make_pair(zTmp,1));
		zToken = strtok( NULL, zDelimiter);
	}

	strcpy(z_RowID,zRowID);
	strcpy(z_BillRunCode,zBillRunCode);
	strcpy(z_OperationMode,zOperationMode);

	//Parameters used for provisioning commands
	if(strcmp(zOperationMode,"OW") == 0)
	{
		strcpy(z_StatusReason,"BB");
		strcpy(z_ActionCode,"OAOB");
	}
	else if(strcmp(zOperationMode,"BW") == 0)
	{
		strcpy(z_StatusReason,"BT");
		strcpy(z_ActionCode,"OABD");
	}
	//

	d_MinOutstanding = dMinOutstanding;
	i_MaxActionCount = iMaxActionCount;
	i_ExemptedDays = iExemptedDays;

	//////////////////////////////////////////////////////////

	f_log<<"BD_CONFIG_PARAMETERS "<<z_BillRunCode<<"|"<<z_OperationMode<<"|"
			<<d_MinOutstanding<<"|"<<i_MaxActionCount<<"|"<<i_ExemptedDays<<"|"<<zApplicableCreditTypes<<endl;
}

////////////////////////////////////////////////////////////////////////////////////

void Bd_Fb_Contract_Trxns_V::Load()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Bd_Fb_Contract_Trxns_V::Load "); */ 
#line 742 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 743 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stBd_Fb_Contract_Trxns_V
	{ 
  		int		iContractID;
		char	zTranType[TRAN_TYPE_LEN];
		char	zTranDate[DATE_LEN];
		double	dTranAmount;
	}a[FETCH_SIZE];

	struct stBd_Fb_Contract_Trxns_VInd
	{ 
		short	iContractID;
		short	iTranType;
		short	iTranDate;
		short	iTranAmount;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 767 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	RengDateTime	oTranTime;

	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT CONTRACT_ID,TRAN_TYPE,TRAN_DATE, TRAN_AMOUNT FROM BD_FB_CONTRACT_TRXNS_V");

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )746;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Contract_Trxns_V::Load ");
#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 778 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curBal CURSOR FOR built_query; */ 
#line 779 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curBal; */ 
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )765;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Contract_Trxns_V::Load ");
#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 781 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 782 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curBal INTO :a INDICATOR :a_ind; */ 
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 8;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )780;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_V);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iContractID;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_VInd);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)a->zTranType;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )10;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_V);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iTranType;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_VInd);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)a->zTranDate;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )20;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_V);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->iTranDate;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_VInd);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[2] = (unsigned int   *)0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->dTranAmount;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_V);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->iTranAmount;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct stBd_Fb_Contract_Trxns_VInd);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[3] = (unsigned int   *)0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Contract_Trxns_V::Load ");
#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 786 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iContractID < 0) || (a_ind[i].iTranType < 0) 
				|| (a_ind[i].iTranDate < 0) || (a_ind[i].iTranAmount < 0))
			{
				f_log<<"\nError indicator CONTRACT_ID/TRAN_TYPE/TRAN_DATE/TRAN_AMOUNT in BD_FB_CONTRACT_TRXNS_V"<<endl;
			}
			else
			{
				Bd_Fb_Contract_Trxns_V* pConBal = Bd_Fb_Contract_Trxns_V::Find(a[i].iContractID);
				oTranTime.setRengDateTime(a[i].zTranDate);

				if(pConBal == NULL)
				{
					pConBal = new Bd_Fb_Contract_Trxns_V();
					
					pConBal->i_ContractID = a[i].iContractID;
					map_ContractBalance.insert(make_pair(pConBal->i_ContractID,pConBal));
				}
				
				//
				if(strcmp(a[i].zTranType,"BILL") == 0)
				{
					if(o_DCEngine.o_ExemptedDate < oTranTime)	//Exempted Bill
					{
						pConBal->d_ExemptedBillAmount += a[i].dTranAmount;
					}
					else
					{
						pConBal->d_TranAmount += a[i].dTranAmount;
					}
				}
				else
				{
					pConBal->d_TranAmount += a[i].dTranAmount;
				}
				//
			}
		}
	}

	f_log<<"Loaded BD_FB_CONTRACT_TRXNS_V "<<map_ContractBalance.size()<<endl;

	/* EXEC SQL CLOSE curBal; */ 
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )811;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Contract_Trxns_V::Load ");
#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 833 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void Bd_Fb_Deposits_V::Load()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : Bd_Fb_Deposits_V::Load "); */ 
#line 840 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 841 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int rows_to_fetch;
	int rows_before;
	int rows_this_time;

    struct stBd_Fb_Deposits_V
	{ 
  		int		iContractID;
		double	dDepositAmount;
		double	dCreditLimit;
		int		iContractPkgID;

	}a[FETCH_SIZE];

	struct stBd_Fb_Deposits_VInd
	{ 
		short	iContractID;
		short	iDepositAmount;
		short	iCreditLimit;
		short	iContractPkgID;
	}a_ind[FETCH_SIZE];

	char    zQuerry[QUERY_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 866 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	rows_to_fetch = FETCH_SIZE;
	rows_before = 0;
	rows_this_time = FETCH_SIZE;

	zQuerry[0] = '\0';
	sprintf(zQuerry,"SELECT NODE_ID,DEPOSIT_AMOUNT,CREDIT_LIMIT,CONTRACT_PACKAGE_ID FROM BD_FB_DEPOSITS_V");

	/* EXEC SQL PREPARE built_query FROM :zQuerry; */ 
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )826;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zQuerry;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )1000;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Deposits_V::Load ");
#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 875 "d:\\projects\\bulkdisconnection\\src\\db.pc"

    /* EXEC SQL  DECLARE curDeposit CURSOR FOR built_query; */ 
#line 876 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL OPEN curDeposit; */ 
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "";
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )845;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqcmod = (unsigned int )0;
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Deposits_V::Load ");
#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 878 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL WHENEVER NOT FOUND CONTINUE; */ 
#line 879 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		
	while (rows_this_time == rows_to_fetch) 
	{ 
		/* EXEC SQL FETCH curDeposit INTO :a INDICATOR :a_ind; */ 
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  struct sqlexd sqlstm;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlvsn = 12;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.arrsiz = 8;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqladtp = &sqladt;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqltdsp = &sqltds;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.iters = (unsigned int  )1000;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.offset = (unsigned int  )860;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.selerr = (unsigned short)1;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.cud = sqlcud0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqlety = (unsigned short)256;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfoff = (           int )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqfmod = (unsigned int )2;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[0] = (         int  )sizeof(struct stBd_Fb_Deposits_V);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[0] = (         void  *)&a_ind->iContractID;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[0] = (         int  )sizeof(struct stBd_Fb_Deposits_VInd);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[0] = (unsigned int  )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[0] = (unsigned int   *)0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[1] = (         void  *)&a->dDepositAmount;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[1] = (unsigned int  )sizeof(double);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[1] = (         int  )sizeof(struct stBd_Fb_Deposits_V);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[1] = (         void  *)&a_ind->iDepositAmount;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[1] = (         int  )sizeof(struct stBd_Fb_Deposits_VInd);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[1] = (unsigned int  )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[1] = (unsigned int   *)0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[2] = (         void  *)&a->dCreditLimit;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[2] = (unsigned int  )sizeof(double);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[2] = (         int  )sizeof(struct stBd_Fb_Deposits_V);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[2] = (         void  *)&a_ind->iCreditLimit;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[2] = (         int  )sizeof(struct stBd_Fb_Deposits_VInd);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[2] = (unsigned int  )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[2] = (unsigned int   *)0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstv[3] = (         void  *)&a->iContractPkgID;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqhsts[3] = (         int  )sizeof(struct stBd_Fb_Deposits_V);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqindv[3] = (         void  *)&a_ind->iContractPkgID;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqinds[3] = (         int  )sizeof(struct stBd_Fb_Deposits_VInd);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharm[3] = (unsigned int  )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqharc[3] = (unsigned int   *)0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqadto[3] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqtdso[3] = (unsigned short )0;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
  if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Deposits_V::Load ");
#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 883 "d:\\projects\\bulkdisconnection\\src\\db.pc"

		rows_this_time = sqlca.sqlerrd[2] - rows_before; 
		rows_before = sqlca.sqlerrd[2]; 

		for (int i=0; i<rows_this_time; i++) 
		{ 
			if((a_ind[i].iContractID < 0) || (a_ind[i].iDepositAmount < 0) 
				|| (a_ind[i].iCreditLimit < 0) || (a_ind[i].iContractPkgID < 0))
			{
				f_log<<"\nError indicator NODE_ID/DEPOSIT_AMOUNT/CREDIT_LIMIT/CONTRACT_PACKAGE_ID in BD_FB_DEPOSITS_V"<<endl;
			}
			else
			{
				Bd_Fb_Deposits_V* pDeposit = Bd_Fb_Deposits_V::Find(a[i].iContractID);

				if(pDeposit == NULL)
				{
					pDeposit = new Bd_Fb_Deposits_V();
					
					pDeposit->i_ContractID = a[i].iContractID;
					map_Deposit.insert(make_pair(pDeposit->i_ContractID,pDeposit));
				}
				
				//
				pDeposit->i_ContractPkgID = a[i].iContractPkgID;
				pDeposit->d_DepositAmount += a[i].dDepositAmount;
				pDeposit->d_CreditLimit += a[i].dCreditLimit;
				//
			}
		}
	}

	f_log<<"Loaded BD_FB_DEPOSITS_V "<<map_Deposit.size()<<endl;

	/* EXEC SQL CLOSE curDeposit; */ 
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )891;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : Bd_Fb_Deposits_V::Load ");
#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 917 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void DisconnectionEngine::InsertToBulkDisconnectionDetails()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 924 "d:\\projects\\bulkdisconnection\\src\\db.pc"
	
	struct stData
	{ 
		int		iContractID;
		char	zMobileNo[MOBILE_NO_LEN];
		double	dOutstandingAmount;
		char	zAction[ACTION_LEN];
		char	zStatus[STATUS_LEN];
		char	zEnteredDate[DATE_LEN];
		char	zCreditType[CREDIT_TYPE_LEN];
 	}a[FETCH_SIZE]; 

	int i = 0;
	int iRemainder = 0;

	char	zToday[DATE_LEN];

	/* EXEC SQL END DECLARE SECTION; */ 
#line 941 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	bool bHaveMore = false;

	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionDetails 1"); */ 
#line 945 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL SELECT SYSDATE INTO :zToday FROM DUAL; */ 
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "select SYSDATE into :b0  from DUAL ";
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )906;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zToday;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionDetails 1");
#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 946 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionDetails 2"); */ 
#line 948 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	map<char*, Prov_Switch_Image*, ltstr>::iterator ite_prov_switch_img;
	ite_prov_switch_img = Prov_Switch_Image::map_ProvSwitchImage.begin();
	
	for( ; ite_prov_switch_img != Prov_Switch_Image::map_ProvSwitchImage.end(); i++,ite_prov_switch_img++)
	{
		Prov_Switch_Image* pProv_Switch_Image = ite_prov_switch_img->second;

		//////////////////////////////////////////////////////////
		if(i == FETCH_SIZE)
		{
			/* EXEC SQL FOR :FETCH_SIZE INSERT INTO BD_BULK_DISCONNECTION_DETAILS
					(CONTRACT_ID,MOBILE_NO,OUTSTANDING_AMOUNT,ACTION,STATUS,ENTERED_DATE,CREDIT_TYPE)	
					VALUES (:a); */ 
#line 962 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   struct sqlexd sqlstm;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqlvsn = 12;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.arrsiz = 8;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqladtp = &sqladt;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqltdsp = &sqltds;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.stmt = "insert into BD_BULK_DISCONNECTION_DETAILS (CONTRACT_ID,MOB\
ILE_NO,OUTSTANDING_AMOUNT,ACTION,STATUS,ENTERED_DATE,CREDIT_TYPE) values (:s1 \
,:s2 ,:s3 ,:s4 ,:s5 ,:s6 ,:s7 )";
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.iters = (unsigned int  )1000;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.offset = (unsigned int  )925;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.cud = sqlcud0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqlety = (unsigned short)256;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.occurs = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[0] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[0] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[0] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[0] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[0] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[0] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[0] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[1] = (         void  *)a->zMobileNo;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[1] = (unsigned int  )20;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[1] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[1] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[1] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[1] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[1] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[1] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[1] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[2] = (         void  *)&a->dOutstandingAmount;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(double);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[2] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[2] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[2] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[2] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[2] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[2] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[2] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[3] = (         void  *)a->zAction;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[3] = (unsigned int  )10;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[3] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[3] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[3] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[3] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[3] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[3] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[3] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[4] = (         void  *)a->zStatus;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[4] = (unsigned int  )10;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[4] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[4] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[4] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[4] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[4] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[4] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[4] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[5] = (         void  *)a->zEnteredDate;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[5] = (unsigned int  )20;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[5] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[5] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[5] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[5] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[5] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[5] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[5] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[6] = (         void  *)a->zCreditType;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[6] = (unsigned int  )5;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[6] = (         int  )sizeof(struct stData);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[6] = (         void  *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[6] = (         int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[6] = (unsigned int  )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[6] = (unsigned int   *)0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[6] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[6] = (unsigned short )0;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqphsv = sqlstm.sqhstv;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqphsl = sqlstm.sqhstl;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqphss = sqlstm.sqhsts;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqpind = sqlstm.sqindv;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqpins = sqlstm.sqinds;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqparm = sqlstm.sqharm;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqparc = sqlstm.sqharc;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqpadto = sqlstm.sqadto;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqptdso = sqlstm.sqtdso;
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionDetails 2");
#line 960 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 962 "d:\\projects\\bulkdisconnection\\src\\db.pc"


			bHaveMore = false;
			iRemainder = 1;
			i = 0;
		}
		else
		{
			bHaveMore = true;
			iRemainder++;
		}

		if(pProv_Switch_Image->pDisconnectData != NULL)
		{
			a[i].iContractID = pProv_Switch_Image->pDisconnectData->i_ContractID;
			strcpy(a[i].zMobileNo,pProv_Switch_Image->pDisconnectData->z_MobileNo); 
			a[i].dOutstandingAmount = pProv_Switch_Image->pDisconnectData->d_OutstandingAmount;
			strcpy(a[i].zAction,z_OperationMode);	//??? is this correct
			strcpy(a[i].zStatus,pProv_Switch_Image->pDisconnectData->z_Status);
			strcpy(a[i].zEnteredDate,zToday);
			strcpy(a[i].zCreditType,pProv_Switch_Image->pDisconnectData->z_CreditType);
		}
		else
		{
			//For data error scenarios, I put Image id instead of contract id
			a[i].iContractID = pProv_Switch_Image->i_ImageID;
			strcpy(a[i].zMobileNo,"NO_DATA");
			a[i].dOutstandingAmount = 0.00;
			strcpy(a[i].zAction,z_OperationMode);
			strcpy(a[i].zStatus,"NO_DATA");
			strcpy(a[i].zEnteredDate,zToday);
			strcpy(a[i].zCreditType,"DATA");

			f_log<<"Data Error : check image id "<<pProv_Switch_Image->i_ImageID<<endl;
		}
		//////////////////////////////////////////////////////////

		//f_log<<a[i].iContractID<<"|"<<a[i].zMobileNo<<"|"<<a[i].zCreditType<<"|"<<endl;
		//<<
		//		a[i].dOutstandingAmount<<"|"<<a[i].zAction<<"|"<<a[i].zStatus<<"|"<<a[i].zEnteredDate<<endl;
	}

	//////////////////////////////////////////////////////////
	if(bHaveMore)
	{
			/* EXEC SQL FOR :iRemainder INSERT INTO BD_BULK_DISCONNECTION_DETAILS
				(CONTRACT_ID,MOBILE_NO,OUTSTANDING_AMOUNT,ACTION,STATUS,ENTERED_DATE,CREDIT_TYPE)
				VALUES (:a); */ 
#line 1009 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   struct sqlexd sqlstm;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqlvsn = 12;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.arrsiz = 8;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqladtp = &sqladt;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqltdsp = &sqltds;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.stmt = "insert into BD_BULK_DISCONNECTION_DETAILS (CONTRACT_ID,MOB\
ILE_NO,OUTSTANDING_AMOUNT,ACTION,STATUS,ENTERED_DATE,CREDIT_TYPE) values (:s1 \
,:s2 ,:s3 ,:s4 ,:s5 ,:s6 ,:s7 )";
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.iters = (unsigned int  )iRemainder;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.offset = (unsigned int  )968;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.cud = sqlcud0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqlety = (unsigned short)256;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.occurs = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[0] = (         void  *)&a->iContractID;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[0] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[0] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[0] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[0] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[0] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[0] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[0] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[1] = (         void  *)a->zMobileNo;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[1] = (unsigned int  )20;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[1] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[1] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[1] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[1] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[1] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[1] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[1] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[2] = (         void  *)&a->dOutstandingAmount;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(double);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[2] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[2] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[2] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[2] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[2] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[2] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[2] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[3] = (         void  *)a->zAction;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[3] = (unsigned int  )10;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[3] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[3] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[3] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[3] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[3] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[3] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[3] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[4] = (         void  *)a->zStatus;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[4] = (unsigned int  )10;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[4] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[4] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[4] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[4] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[4] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[4] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[4] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[5] = (         void  *)a->zEnteredDate;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[5] = (unsigned int  )20;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[5] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[5] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[5] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[5] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[5] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[5] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[5] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstv[6] = (         void  *)a->zCreditType;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhstl[6] = (unsigned int  )5;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqhsts[6] = (         int  )sizeof(struct stData);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqindv[6] = (         void  *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqinds[6] = (         int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharm[6] = (unsigned int  )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqharc[6] = (unsigned int   *)0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqadto[6] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqtdso[6] = (unsigned short )0;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqphsv = sqlstm.sqhstv;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqphsl = sqlstm.sqhstl;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqphss = sqlstm.sqhsts;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqpind = sqlstm.sqindv;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqpins = sqlstm.sqinds;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqparm = sqlstm.sqharm;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqparc = sqlstm.sqharc;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqpadto = sqlstm.sqadto;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlstm.sqptdso = sqlstm.sqtdso;
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
   if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionDetails 2");
#line 1007 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1009 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	}
	//////////////////////////////////////////////////////////

	/* EXEC SQL COMMIT; */ 
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )1011;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionDetails 2");
#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1013 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

void DisconnectionEngine::InsertToBulkDisconnectionSummary()
{
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionSummary "); */ 
#line 1020 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1022 "d:\\projects\\bulkdisconnection\\src\\db.pc"
	
		char	zBillRunCode[BILL_RUN_CODE_LEN];
		int		iTotActionTaken;
		int		iTotActionRejected;
		double	dLastOutstanding;
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1027 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	strcpy(zBillRunCode,z_BillRunCode);
	iTotActionTaken = i_TotalActionTaken;
	iTotActionRejected = i_TotalActionRejected;
	dLastOutstanding = d_LastExecutedOutstanding;
	
	/* EXEC SQL INSERT INTO BD_BULK_DISCONNECTION_SUMMARY \
			 (BILL_RUN_CODE, TOTAL_ACTION_TAKEN, TOTAL_REJECT_ACTIONS, LAST_EXECUTED_OUTSTANDING) \
	VALUES (:zBillRunCode,:iTotActionTaken,:iTotActionRejected,:dLastOutstanding); */ 
#line 1036 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "insert into BD_BULK_DISCONNECTION_SUMMARY (BILL_RUN_CODE,TOT\
AL_ACTION_TAKEN,TOTAL_REJECT_ACTIONS,LAST_EXECUTED_OUTSTANDING) values (:b0,:b\
1,:b2,:b3)";
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )1026;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zBillRunCode;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )10;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[1] = (         void  *)&iTotActionTaken;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[1] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[1] = (         void  *)0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[1] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[1] = (unsigned int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[1] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[1] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[2] = (         void  *)&iTotActionRejected;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[2] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[2] = (         void  *)0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[2] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[2] = (unsigned int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[2] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[2] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[3] = (         void  *)&dLastOutstanding;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[3] = (unsigned int  )sizeof(double);
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[3] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[3] = (         void  *)0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[3] = (         int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[3] = (unsigned int  )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[3] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[3] = (unsigned short )0;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionSummary ");
#line 1034 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1036 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 

	/* EXEC SQL COMMIT; */ 
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )1057;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToBulkDisconnectionSummary ");
#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1038 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////

int DisconnectionEngine::GetNextGroupID()
{
	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1045 "d:\\projects\\bulkdisconnection\\src\\db.pc"
	
		int		iSeqNo;
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1047 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	//get group id
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::GetNextGroupID "); */ 
#line 1050 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL EXECUTE 
		BEGIN
			:iSeqNo := CAM_NODE_CREATION.GET_CAM_AUTONUMBER('CGRNO');
		END; 
	END-EXEC; */ 
#line 1055 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "begin :iSeqNo := CAM_NODE_CREATION . GET_CAM_AUTONUMBER ( 'C\
GRNO' ) ; END ;";
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )1072;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)&iSeqNo;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::GetNextGroupID ");
#line 1051 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1055 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	//

	return iSeqNo;
}

////////////////////////////////////////////////////////////////////////////////////

void DisconnectionEngine::InsertToPendingCommandsTable()
{
	//sms and performa no need to send prov commands
	if(((z_OperationMode,"SMS") == 0) || ((z_OperationMode,"PFM") == 0))
	{
		f_log<<"Operation mode is SMS/PFM and no need to send provisioning commands"<<endl;
		return;
	}
	//

	/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 1073 "d:\\projects\\bulkdisconnection\\src\\db.pc"
	
		int		iGroupID;
		int		iConnectionID;
		char	zActionCode[ACTION_CODE_LEN];
		char	zService[SERVICE_LEN];
		char	zActivationDate[DATE_LEN];
		char	zIndividualBatch[INDIVIDUAL_BATCH_LEN];
		char	zProvLocation[PROVISION_LOCATION_LEN];
		char	zStatusReasonCode[STATUS_REASON_CODE_LEN];
		char	zImsi[IMSI_LEN];
		int		iCmdSeqNumber;
		char	zOperator[OPERATOR_LEN];


		char	zToday[DATE_LEN];
	/* EXEC SQL END DECLARE SECTION; */ 
#line 1088 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::InsertToPendingCommandsTable 1"); */ 
#line 1090 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	/* EXEC SQL SELECT SYSDATE INTO :zToday FROM DUAL; */ 
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 8;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.stmt = "select SYSDATE into :b0  from DUAL ";
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )1091;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.selerr = (unsigned short)1;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstv[0] = (         void  *)zToday;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhstl[0] = (unsigned int  )20;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqhsts[0] = (         int  )0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqindv[0] = (         void  *)0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqinds[0] = (         int  )0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqharm[0] = (unsigned int  )0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqadto[0] = (unsigned short )0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqtdso[0] = (unsigned short )0;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsv = sqlstm.sqhstv;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphsl = sqlstm.sqhstl;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqphss = sqlstm.sqhsts;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpind = sqlstm.sqindv;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpins = sqlstm.sqinds;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparm = sqlstm.sqharm;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqparc = sqlstm.sqharc;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqpadto = sqlstm.sqadto;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqptdso = sqlstm.sqtdso;
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToPendingCommandsTable 1");
#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1091 "d:\\projects\\bulkdisconnection\\src\\db.pc"


	
	/* EXEC SQL WHENEVER SQLERROR DO SqlError("ORACLE error : DisconnectionEngine::InsertToPendingCommandsTable 2"); */ 
#line 1094 "d:\\projects\\bulkdisconnection\\src\\db.pc"

	
	int	iCount = 0;
	map<double, map<int,DisconnectData* >* >::iterator ite_max_os;
	ite_max_os = map_MaxOutstandingAmounts.begin();
	map<int,DisconnectData* >::iterator	ite_contracts;
	
	for( ;ite_max_os != map_MaxOutstandingAmounts.end(); ite_max_os++)
	{
		ite_contracts = ite_max_os->second->begin();

		for( ; ite_contracts != ite_max_os->second->end(); ite_contracts++)
		{
			DisconnectData* pDisconnectData = ite_contracts->second;
			if(pDisconnectData != NULL)
			{
				if(iCount < i_MaxActionCount )
				{
					d_LastExecutedOutstanding = 0.0;

					//Assign Data
					iGroupID = GetNextGroupID();						//ok - get this from sequence
					iConnectionID = pDisconnectData->i_ConnectionID;	//ok
					strcpy(zActionCode,z_ActionCode);					//ok - both_way->OABD, one_way->OAOB
					strcpy(zService,"PROFILE");							//ok
					strcpy(zActivationDate,zToday);						//ok
					strcpy(zIndividualBatch,"B");						//ok
					strcpy(zProvLocation,"ALC-ERIC");					//ok
					strcpy(zStatusReasonCode,z_StatusReason);			//ok - OW->BB, BW->BT
					strcpy(zImsi,pDisconnectData->z_Imsi);				//ok
					iCmdSeqNumber = 0;									//ok
					sprintf(zOperator,"BD_%s_%s",z_BillRunCode,z_OperationMode);	//ok
					//

					//call stored proc
					/* EXEC SQL EXECUTE 
					BEGIN 
						NEW_PROV_HANDLING_ENTRIES.provision(:iGroupID, 
															:iConnectionID,
															:zActionCode,
															:zService,
															:zActivationDate,
															:zIndividualBatch,
															:zProvLocation,
															:zStatusReasonCode,
															:zImsi,
															:iCmdSeqNumber,
															:zOperator); 
					END; 
					END-EXEC; */ 
#line 1143 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     struct sqlexd sqlstm;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqlvsn = 12;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.arrsiz = 11;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqladtp = &sqladt;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqltdsp = &sqltds;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.stmt = "begin NEW_PROV_HANDLING_ENTRIES . provision ( :iGroupID \
, :iConnectionID , :zActionCode , :zService , :zActivationDate , :zIndividualB\
atch , :zProvLocation , :zStatusReasonCode , :zImsi , :iCmdSeqNumber , :zOpera\
tor ) ; END ;";
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.iters = (unsigned int  )1;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.offset = (unsigned int  )1110;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.cud = sqlcud0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqlety = (unsigned short)256;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.occurs = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[0] = (         void  *)&iGroupID;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[0] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[0] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[0] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[0] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[0] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[0] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[1] = (         void  *)&iConnectionID;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[1] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[1] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[1] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[1] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[1] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[1] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[2] = (         void  *)zActionCode;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[2] = (unsigned int  )5;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[2] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[2] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[2] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[2] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[2] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[2] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[3] = (         void  *)zService;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[3] = (unsigned int  )10;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[3] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[3] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[3] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[3] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[3] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[3] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[4] = (         void  *)zActivationDate;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[4] = (unsigned int  )20;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[4] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[4] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[4] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[4] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[4] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[4] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[5] = (         void  *)zIndividualBatch;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[5] = (unsigned int  )1;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[5] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[5] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[5] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[5] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[5] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[5] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[6] = (         void  *)zProvLocation;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[6] = (unsigned int  )10;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[6] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[6] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[6] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[6] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[6] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[6] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[7] = (         void  *)zStatusReasonCode;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[7] = (unsigned int  )5;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[7] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[7] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[7] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[7] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[7] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[7] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[8] = (         void  *)zImsi;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[8] = (unsigned int  )15;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[8] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[8] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[8] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[8] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[8] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[8] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[9] = (         void  *)&iCmdSeqNumber;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[9] = (unsigned int  )sizeof(int);
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[9] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[9] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[9] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[9] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[9] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[9] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstv[10] = (         void  *)zOperator;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhstl[10] = (unsigned int  )30;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqhsts[10] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqindv[10] = (         void  *)0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqinds[10] = (         int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqharm[10] = (unsigned int  )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqadto[10] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqtdso[10] = (unsigned short )0;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqphsv = sqlstm.sqhstv;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqphsl = sqlstm.sqhstl;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqphss = sqlstm.sqhsts;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqpind = sqlstm.sqindv;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqpins = sqlstm.sqinds;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqparm = sqlstm.sqharm;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqparc = sqlstm.sqharc;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqpadto = sqlstm.sqadto;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlstm.sqptdso = sqlstm.sqtdso;
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
     if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToPendingCommandsTable 2");
#line 1129 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1143 "d:\\projects\\bulkdisconnection\\src\\db.pc"

					//
					
					strcpy(ite_contracts->second->z_Status,"TAKEN");	//update the action status for details
					i_TotalActionTaken++;	//Keep track of Action taken Contracts
					d_LastExecutedOutstanding = pDisconnectData->d_OutstandingAmount;
				}
				else
				{
					f_log<<"Max action count exceeded "<<iCount<<endl;
					strcpy(ite_contracts->second->z_Status,"MAX_ACTION");	//update the action status for details
				}

				iCount++;
			}
		}
	}

	i_TotalActionRejected = iCount - i_TotalActionTaken;

	/* EXEC SQL COMMIT; */ 
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"

{
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 struct sqlexd sqlstm;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlvsn = 12;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.arrsiz = 11;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqladtp = &sqladt;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqltdsp = &sqltds;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.iters = (unsigned int  )1;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.offset = (unsigned int  )1169;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.cud = sqlcud0;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.sqlety = (unsigned short)256;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlstm.occurs = (unsigned int  )0;
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
 if (sqlca.sqlcode < 0) SqlError("ORACLE error : DisconnectionEngine::InsertToPendingCommandsTable 2");
#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"
}

#line 1163 "d:\\projects\\bulkdisconnection\\src\\db.pc"

}

////////////////////////////////////////////////////////////////////////////////////


