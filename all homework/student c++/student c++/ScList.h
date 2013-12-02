#pragma once
#include<vector>
#include"MenuItem.h"
#include"StuStage.h"
class ScList
{
public:
	ScList(void);
	~ScList(void);
	int  run();
private:
	MenuItem *item[6];
	StuStage *stage;
};

