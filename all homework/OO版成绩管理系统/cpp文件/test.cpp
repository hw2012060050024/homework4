#include<iostream>
#include"StuM.h"
using namespace std;
int main()
{  
	  StuM *stu=new StuM();
	  stu->start();
	  cout<<"��лʹ��"<<endl;
	  system("pause");
	  delete stu;
	  return 0;
}