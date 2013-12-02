#pragma once
#include"Grade.h"
class Student
{
public:
	Student();
	~Student(void);
	void getInformation();
	void getGrade();
	void inputgrade();
	void inputInfor();
	Student *next;
	char name[20];
private:
	 
	 char num[20];
	 Grade *g;
	 
};

