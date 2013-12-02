#include "Professor.h"
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
CProfessor::CProfessor(double d)
{
	this->basicwage=d;
	this->cousehour=80;
	this->courefee=100;
	this->Ywage=500.0;
	this->intial();
	this->setWorkYear();
	cout<<"请输入等级"<<endl;
	cout<<"1.讲师，2.副教授或者教授 3.教授"<<endl;
	cin>>this->range;
	if(range==1)
	{
	}else if(range==2){
		cout<<"请输入研究生数目"<<endl;
		cin>>this->graCount;
		this->graHelp=200.0;
	}else if(range==3){
		cout<<"请输入研究生数目"<<endl;
		cin>>this->graCount;
		this->graHelp=200.0;
		cout<<"请输入博士生数目"<<endl;
		cin>>this->phdCount;
		this->phdHelp=400.0;
	}
}
CProfessor::~CProfessor(void)
{
}
double CProfessor::getWage()
{
	if(this->range==1)
	{
		return(basicwage+this->getWorkYear()*Ywage+courefee*cousehour);
	}else if(this->range==2)
	{
		return(basicwage+this->getWorkYear()*Ywage+courefee*cousehour+graCount*graHelp);
	}else if(this->range==3)
	{
		return (basicwage+this->getWorkYear()*Ywage+courefee*cousehour+graCount*graHelp+phdCount*phdHelp);
	}
}
void CProfessor::showInfo()
{
	//showInfo();
	cout<<this->getName()<<"\t"<<this->getNum()<<endl;
	cout<<this->getTest()<<"\t"<<this->getWorkYear()<<endl;
	cout<<this->getRange()<<"\t"<<this->getWage()<<endl;
}
string CProfessor::getRange()
{
	if(this->range==1)
	{
		return("讲师");
	}else if(this->range==2)
	{
		return("副教授");
	}else {
		return ("博导");
	}
}