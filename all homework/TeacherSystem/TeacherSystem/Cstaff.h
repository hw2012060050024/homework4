#pragma once
#include<string>
using std::string;
class Cstaff//封装好他和他的派生类,并同时定义其为链表的节点
{
public:
	Cstaff(void);
	~Cstaff(void);
	void setNum();
	void setName();
	void setWorkYear();
	void setTest();
	virtual void showInfo();
	void intial();
	string getNum();
	string getName();
	string getTest();
	int getWorkYear();
	Cstaff *next;
	virtual double getWage();//虚函数
	double basicwage;
private:
	 string name;
	 string number;
     string test;
	 int workYears;
	 double salary;
	 
};

