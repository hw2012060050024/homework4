#include "TempStaff.h"
#include<iostream>
using std::cout;
using std::endl;
CTempStaff::CTempStaff(double d)
{
	this->basicwage=d;
	this->intial();
}
CTempStaff::~CTempStaff(void)
{
	
}
double CTempStaff::getWage()
{
	return (this->basicwage);
}
void CTempStaff::showInfo()
{
	cout<<this->getName()<<"\t"<<this->getNum()<<endl;
	cout<<this->getWage()<<endl;
	cout<<this->getTest()<<endl;
}
