// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"LinkNode.h"
#include"linkstack.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, _TCHAR* argv[])
{
       linkstack *stack=new linkstack();
	   int i=0;
       for(i=0;i<5;i++)
	   {
		   int temp;
		   cin>>temp;
		   stack->push(temp);
	   }
	   while(!stack->isEmpty())
	   {
		   cout<<stack->pop()<<endl;
	   }
	   system("pause");
	   return 0;
}

