#pragma once
#include "cstaff.h"
class CTempStaff :public Cstaff
{
public:
	CTempStaff(double b);
	~CTempStaff(void);
	double getWage();
	void showInfo();
};

