// zuhe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int  fac(int n);
int  combination(int m,int n);

int main(int argc, _TCHAR* argv[])
{   
	cout<<"请输入值m和n"<<endl;
	int m,n;
	cin>>m;
	cin>>n;
	if(m>=n)
	{
		cout<<"组合的值是"<<combination(m,n)<<endl;
	}
	else
	{
		 cout<<"输入数据非法"<<endl;
	}
	system("pause");
	return 0;
}
int fac(int n)
{
	  if(n==1||n==0){
		  return n;
	  }
	  else{
		  n=n*fac(n-1);
	  }
}
int  combination(int m,int n)
{
	     long a=1;
		 int i;
		 for(i=0;i<n;i++)
		 {
			 a=a*(m-i);
		 }
		 return(a/fac(n));
}