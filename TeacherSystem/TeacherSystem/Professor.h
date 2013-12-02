#pragma once
#include "cstaff.h"
class CProfessor :
	public Cstaff
{
public:
	CProfessor(double d);
	~CProfessor(void);
	double getWage();
	void showInfo();
	string getRange();
private://封装性的体现
	int range;
	double courefee;
	int graCount;
	int phdCount;
	int cousehour;
	double graHelp;
	double phdHelp;
	double Ywage;
};

