// wendu.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using  namespace std;
float  changed(float* c);
void  a();
int  main(int argc, _TCHAR* argv[])
{
	cout<<"�����������¶�"<<endl;
	float  a,b;
	cin>>a;
	b=changed(&a);
	cout<<"ת����Ļ����¶���"<<endl;
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