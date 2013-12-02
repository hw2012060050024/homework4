#include "Grade.h"
#include<iostream>
using namespace std;
Grade::Grade(void)
{
	this->Caddgradate=0;
}
Grade::~Grade(void)
{
}
void Grade::setgrade()
{
	  cout<<"请输入学生的成绩"<<endl;
	  cin>>this->Caddgradate;
}
int Grade::getgrade()
{
	return(this->Caddgradate);
}
