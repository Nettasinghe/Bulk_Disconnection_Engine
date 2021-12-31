
//////////////////////////////////////////////////////////////////////
//
// RengDateTime.cpp
// RengDate and RengTime class implementation 
// Bulk Disconnection Engine 
// developer - Chandika Nettasinghe
// code start - 2009-Sept
//
//////////////////////////////////////////////////////////////////////

#pragma warning (disable:4786)

//#include "StdAfx.h"
#include "RengDateTime.h"
#include <string>
#include <iostream>

//////////////////////////////////////////////////////////////////////////
bool RengDateTime::operator<(RengDateTime _compKey1)
{
	if( o_Date < _compKey1.o_Date )
	{
		return true;
	}
	else
	{
		if( (o_Date  == _compKey1.o_Date ) && (o_Time  <  _compKey1.o_Time) )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


bool RengDateTime::operator==(RengDateTime _comKey1)
{
	if((_comKey1.o_Date == o_Date) &&
		(_comKey1.o_Time.i_Hour == o_Time.i_Hour) &&
		(_comKey1.o_Time.i_Min == o_Time.i_Min) &&
		(_comKey1.o_Time.i_Second == o_Time.i_Second))
		return true;

	return false;
}

//////////////////////////////////////////////////////////////////////////

bool RengDate::operator==(RengDate _compKey1)
{
	if( (_compKey1.i_Year == i_Year) && (_compKey1.i_Month == i_Month) && (_compKey1.i_Day == i_Day) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool RengDate::operator<(RengDate comKey1)
{
	if(i_Year < comKey1.i_Year)
	{
		return true;
	}
	else
	{
		if( (i_Year == comKey1.i_Year) && (i_Month < comKey1.i_Month) )
		{
			return true;
		}
		else
		{
			if( (i_Year == comKey1.i_Year) && (i_Month == comKey1.i_Month) && (i_Day < comKey1.i_Day) )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

//////////////////////////////////////////////////////////////////////////

bool RengTime::operator<(RengTime _compKey1)
{
	if(i_Hour < _compKey1.i_Hour)
	{
		return true;
	}
	else
	{
		if( (i_Hour == _compKey1.i_Hour) && (i_Min < _compKey1.i_Min) )
		{
			return true;
		}
		else
		{
			if( (i_Hour == _compKey1.i_Hour) && (i_Min == _compKey1.i_Min) && (i_Second < _compKey1.i_Second) )
			{
				return true;
			}
			else
			{
				if( (i_Hour == _compKey1.i_Hour) && (i_Min == _compKey1.i_Min) && (i_Second == _compKey1.i_Second) )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}	
	}
}

//////////////////////////////////////////////////////////////////////////

bool RengDate::setDate(int _y,int _m,int _d)
{
	bool bValid=true;

	if (_y >= 2000 && _y < 9999)
	{
		i_Year = _y;
		
	}
	else
	{
		cout<<"Bad year specifier "<<_y<<endl;
		bValid = false;
	}
	
	
	if (_m >= 1 && _m <= 12)
	{
		i_Month = _m;
		
	}
	else
	{
		cout<<"bad month specifier "<<_m<<endl;
		bValid = false;
	}
	
	
	if( _d >= 1 && _d <= 31)
	{
		i_Day = _d;
		
	}
	else
	{
		cout<<"bad day value :"<<_d<<endl;
		bValid = false;
	}
	return bValid;

}




bool RengTime::setTime(int _h,int _m,int _s)
{
	bool bValid=true;

	if (_h >= 0 && _h < 24)
	{
		i_Hour = _h;
	}
	else
	{
		cout<<"bad hour specifier : "<<_h<<endl;
		bValid=false;
	}


	if (_m >= 0 && _m < 60)
	{
		i_Min = _m;
	}
	else
	{
		cout<<"bad minute specifier : "<<_m<<endl;
		_m = 0;
		bValid=false;
	}
	

	if( _s >= 0 && _s < 60)
	{
		i_Second = _s;
	}
	else
	{
		cout<<"bad second value : "<<_s<<endl;
		_s = 0;
		bValid = false;
	}
	return bValid;
}

//DD/MM/YYYY
void RengDate::setRengDate(char zDateStr[])
{
	char zDDchar[3],zMMchar[3],zYYYYchar[5];

	zDDchar[0] = zDateStr[0];
	zDDchar[1] = zDateStr[1];
	zDDchar[2] = '\0';
	
	zMMchar[0] = zDateStr[3];
	zMMchar[1] = zDateStr[4];
	zMMchar[2] = '\0';
	
	zYYYYchar[0] = zDateStr[6];
	zYYYYchar[1] = zDateStr[7];
	zYYYYchar[2] = zDateStr[8];
	zYYYYchar[3] = zDateStr[9];
	zYYYYchar[4] = '\0';
	
	setDate(atoi(zYYYYchar),atoi(zMMchar),atoi(zDDchar));
}

//////////////////////////////////////////////////////////////////////////

void RengDateTime::setRengDateTime(char _enteredDate[])
{
	char zDDchar[2],zMMchar[2],zYYYYchar[4],zHHchar[2],zVVchar[2],zSSchar[2];
	int iDD,iMM,iYYYY,iHH,iMI,iSS;

	zDDchar[0] = _enteredDate[0];
	zDDchar[1] = _enteredDate[1];
	zDDchar[2] = '\0';
	iDD = atoi(zDDchar);

	zMMchar[0] = _enteredDate[3];
	zMMchar[1] = _enteredDate[4];
	zMMchar[2] = '\0';
	iMM = atoi(zMMchar);

	zYYYYchar[0] = _enteredDate[6];
	zYYYYchar[1] = _enteredDate[7];
	zYYYYchar[2] = _enteredDate[8];
	zYYYYchar[3] = _enteredDate[9];
	zYYYYchar[4] = '\0';
	iYYYY = atoi(zYYYYchar);

	zHHchar[0] = _enteredDate[11];
	zHHchar[1] = _enteredDate[12];
	zHHchar[2] = '\0';
	iHH = atoi(zHHchar);

	zVVchar[0] = _enteredDate[14];
	zVVchar[1] = _enteredDate[15];
	zVVchar[2] = '\0';
	iMI = atoi(zVVchar);

	zSSchar[0] = _enteredDate[17];
	zSSchar[1] = _enteredDate[18];
	zSSchar[2] = '\0';
	iSS = atoi(zSSchar);

	this->o_Date.setDate(iYYYY,iMM,iDD);
	this->o_Time.setTime(iHH,iMI,iSS);
	
}

void RengDateTime::setRengDateTime(int _iYear,int _iMonth,int _iDay,int _iHour,int _Min,int _Second)
{
	this->o_Date.setDate(_iYear,_iMonth,_iDay);
	this->o_Time.setTime(_iHour,_Min,_Second);
}


void RengDateTime::printRengDateTime()
{
	cout<<o_Date.i_Year<<":"<<o_Date.i_Month<<":"<<o_Date.i_Day<<" "<<o_Time.i_Hour<<":"<<o_Time.i_Min<<":"<<o_Time.i_Second;
}

