#pragma once
#include"Cstaff.h"
#include"MenuItem.h"
#include<string>
using std::string;
class Manger//派生类的函数大多相同，故然使用继承的方法
{
public:
	Manger(void);
	~Manger(void);
	void addNode(Cstaff *temp);
	void DispList();
	void delNode(string str);
	virtual void doItems(MenuItem *h);
	string value;
	void setAsk();
	string getAsk();
private:
	Cstaff *head;
	Cstaff *rear;
	string askname;
};

