// c++的栈.cpp : 定义控制台应用程序的入口点。
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