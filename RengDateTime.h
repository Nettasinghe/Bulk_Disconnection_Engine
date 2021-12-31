
//////////////////////////////////////////////////////////////////////
//
// RengDateTime.h
// RengDate and RengTime class definitions 
// Bulk Disconnection Engine 
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////


#ifndef RENG_DATE_TIME_H
#define RENG_DATE_TIME_H

#pragma warning (disable:4786)
#include <string>
#include <map>

using namespace std;

class RengTime
{
public:
	int			i_Hour;
	int			i_Min;
	int			i_Second;
	bool operator < (RengTime _comKey1);
	bool setTime(int _h, int _m, int _s=0);
};



class RengDate
{
public:
	void setRengDate(char zDateStr[]);
	int			i_Year;
	int			i_Month;
	int			i_Day;

	bool operator == (RengDate _comKey1);
	bool operator < (RengDate _comKey1);

	bool setDate(int _y, int _m, int _d);
};


class RengDateTime
{
public:
	RengDate	o_Date;
	RengTime	o_Time;
	void setRengDateTime(char _enteredDate[]);
	void setRengDateTime(int _iYear,int _iMonth,int _iDay,int _iHour,int _Min,int _Second);
	bool operator < (RengDateTime _comKey1);
	bool operator == (RengDateTime _comKey1);

	void printRengDateTime();
};

#endif


