#include "stdafx.h"
#include "savearry.h"
#include<iostream>
#include"savearry.h"
using namespace std;
savearry::savearry(int m)
{p=(int*)malloc(n*sizeof(int));
n=m;

}


savearry::~savearry(void)
{
}
void savearry::	add( int i,int item){

	if(0<=i&&i<n){p[i]=item;cout<<p[i]<<endl;}

	else cout<<"数组越界"<<endl;
}
void  savearry:: change(int i,int item){

	if(0<=i&&i<n){p[i]=item;cout<<p[i]<<endl;}

	else cout<<"数组越界"<<endl;
}