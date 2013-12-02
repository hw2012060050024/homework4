#include "Administrator.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
CAdministrator::CAdministrator(double d)
{
	this->basicwage=d;
	this->Ywage=350.0;
	this->Jwage=300.0;
	this->intial();
	this->setWorkYear();
	this->setRange();
}
CAdministrator::~CAdministrator(void)
{
}
double CAdministrator::getWage()
{   
	if(this->range==1)
	{
		return(basicwage);
	}
	else if(this->range==2){
		return(basicwage+this->getWorkYear()*Ywage);
	}else if(this->range==3){
		return (basicwage+this->getWorkYear()*Ywage+Jwage);
	}
}
void CAdministrator::setRange()
{
	cout<<"请设置等级"<<endl;
	cout<<"1.一般行政人员2.科级以上行政人员(大于2均可输入)"<<endl;
	cin>>this->range;
}
void CAdministrator::showInfo()
{
	cout<<this->getName()<<"\t"<<this->getNum()<<endl;
	cout<<this->getTest()<<"\t"<<this->getWorkYear()<<endl;
	cout<<this->getrange()<<"\t"<<this->getWage()<<endl;
}
string CAdministrator::getrange()
{
	string temp;
	if(this->range==1)
	{
		return("一般人员");
	}else {
	   temp="科级人员,等级"+range;
	   return (temp);
	}
}