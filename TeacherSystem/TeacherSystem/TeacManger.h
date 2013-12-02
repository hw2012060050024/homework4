#pragma once
#include "manger.h"
#include"Professor.h"
class TeacManger :
	public Manger
{
public:
	TeacManger(void);
	~TeacManger(void);
	void doItems(MenuItem *h);
	CProfessor * add();
private:
	
};

