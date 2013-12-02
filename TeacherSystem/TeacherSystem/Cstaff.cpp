#include "Cstaff.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
Cstaff::Cstaff(void)
{
	this->next=NULL;
}
Cstaff::~Cstaff(void)
{
}
void Cstaff::setNum()
{
	cout<<"请输入职工号"<<endl;
	string Num;
	cin>>Num;
	this->number=Num;
	
}
void Cstaff::setName()
{
	  cout<<"请输入姓名"<<endl;
	  string Name;
	  cin>>Name;
	  this->name=Name;
}
void Cstaff::setTest()
{
	cout<<"请输入性别"<<endl;
	string str;
	cin>>str;
	this->test=str;
}
void Cstaff::setWorkYear()
{
	cout<<"请输入工龄"<<endl;
    int age;
	cin>>age;
	this->workYears=age;
}
string Cstaff::getNum()
{
	return(this->number);
}
string Cstaff::getName()
{
	return(this->name);
}
int Cstaff::getWorkYear()
{
	return(this->workYears);
}
string Cstaff::getTest()
{
	return (this->test);
}
double Cstaff::getWage()
{
	return (0.0);
}
void Cstaff::showInfo()
{
	cout<<"Own Information list"<<endl;
}
void Cstaff::intial()
{
	this->setName();
	this->setNum();
	this->setTest();
}