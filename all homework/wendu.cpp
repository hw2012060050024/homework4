// wendu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using  namespace std;
float  changed(float* c);
void  a();
int  main(int argc, _TCHAR* argv[])
{
	cout<<"请输入摄氏温度"<<endl;
	float  a,b;
	cin>>a;
	b=changed(&a);
	cout<<"转换后的华氏温度是"<<endl;
	cout<<b<<endl;
	system("pause");
	return 0;
}
float  changed(float* c)
{
	  return ((9.0/5.0)*(*c)+32.0);
}
void a()
{

}