#pragma once
#include "manger.h"
#include"Administrator.h"//不用引入menuitem类的头文件
class AdManger :
	public Manger
{
public:
	AdManger(void);
	~AdManger(void);
	void doItems(MenuItem *h);
	CAdministrator * add();
private :
	
};

