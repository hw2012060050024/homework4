// c++��ջ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"staket.h"
#include<iostream>
using namespace std;


int main(){
	int n;
staket a=staket();
a.push(3);
cout<<a.reade()<<endl;

a.push(5);
a.push(6);
a.pop ();
cout<<a.reade();
cin>>n;
system("pause");
return n;}