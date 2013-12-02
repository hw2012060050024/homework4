// ximical.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int  cal(int x,int y);

int main(int argc, _TCHAR* argv[])
{  
	cout<<"请输入x和y的值"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<x<<"的"<<y<<"次幂的值是"<<cal(x,y)<<endl;
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
