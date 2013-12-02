#include<iostream>
#include"StuM.h"
#include"Addstu.h"
using namespace std;
int main(int argc,int * __argv[])
{  
	  StuM *stu=new StuM();
	  stu->start();
	  cout<<"感谢使用"<<endl;
	  system("pause");
	  delete stu;
	  return 0;
}