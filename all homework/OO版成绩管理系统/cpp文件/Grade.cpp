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
	  cout<<"������ѧ���ĳɼ�"<<endl;
	  cin>>this->Caddgradate;
}
int Grade::getgrade()
{
	return(this->Caddgradate);
}
