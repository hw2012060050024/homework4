#pragma once
#include"Student.h"
class StuStage
{
public:
	StuStage(void);
	~StuStage(void);
	void add();
	void input();
	void remove(char name[]);
	//void destroy();
	void outputstu();
	void outputgrade();
	void setstugrade(char name[]);
private:
	Student *head;
	Student *rear;
};

