#include<iostream>
#include"TecStage.h"
#include"Cstaff.h"
#include"Manger.h"
using std::cout;
using std::endl;
int main()
{
	TecStage *T=new TecStage();
	T->run();
	delete T;
	cout<<"感谢使用"<<endl;
	system("pause");
}