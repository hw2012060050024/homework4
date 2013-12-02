#pragma once
#include "manger.h"
#include"TempStaff.h"
class TempManger :
	public Manger
{
public:
	TempManger(void);
	~TempManger(void);
	void doItems(MenuItem *h);
	CTempStaff * add();
private:
    
};

