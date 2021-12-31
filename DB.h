
//////////////////////////////////////////////////////////////////////
//
// DB.h
// database related class definitions for Bulk Disconnection Engine
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#ifndef DB_H
#define DB_H

#define FETCH_SIZE	1000
#define	QUERY_LEN	1000

void SqlError(char* zErr);
void Login(char* zLoginString);
void Logout();

#endif
