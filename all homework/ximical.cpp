// ximical.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int  cal(int x,int y);

int main(int argc, _TCHAR* argv[])
{  
	cout<<"������x��y��ֵ"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<x<<"��"<<y<<"���ݵ�ֵ��"<<cal(x,y)<<endl;
	system("pause");
	return 0;
}
int cal(int x,int y)
{
    if(x==0||x==1)
	{
		  return (x);
	}
	else  if(y!=0)
	{
	      x=x*cal(x,y-1);
	}
	else if(y==0)
	{
		  return 1;
	}
}
