// zuhe.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int  fac(int n);
int  combination(int m,int n);

int main(int argc, _TCHAR* argv[])
{   
	cout<<"������ֵm��n"<<endl;
	int m,n;
	cin>>m;
	cin>>n;
	if(m>=n)
	{
		cout<<"��ϵ�ֵ��"<<combination(m,n)<<endl;
	}
	else
	{
		 cout<<"�������ݷǷ�"<<endl;
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