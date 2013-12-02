#pragma once
#include "cstaff.h"
#include"Administrator.h"
class CAdministrator :
	public Cstaff
{
public:
	CAdministrator(double d);
	~CAdministrator(void);
	double getWage();
	void setRange();
	void showInfo();
	string getrange();
private:
	 int range;
	 double Ywage;
	 double Jwage;
};

