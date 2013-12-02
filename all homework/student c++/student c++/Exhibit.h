#pragma once
#include"MenuItem.h"
#include"StuStage.h"
class Exhibit:public MenuItem 
{
public:
	Exhibit(void);
	~Exhibit(void);
	void show();
	void showstu(StuStage * s);
private:
	char whatlist[20];
};

