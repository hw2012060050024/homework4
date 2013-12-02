#include "StdAfx.h"
#include "safe.h"
#include<iostream>
using namespace std;
safe::safe(int n)
{
	this->p=new int [n];
	this->length=n;
}


safe::~safe(void)
{
	delete p;
}

bool safe::isSafe(int index)
{
	return(this->length>index);
}
void safe::setValue(int value,int pos)
{
	if(this->isSafe(pos))
	{
		 this->p[pos]=value;
	}
	else{
		 cout<<"your pos is illegeal"<<endl;
	}
}
int safe::getValue(int pos)
{
	if(this->isSafe(pos))
    {
		return(this->p[pos]);
	}else{
		this->lastError=false;
		return(0);
	}
}