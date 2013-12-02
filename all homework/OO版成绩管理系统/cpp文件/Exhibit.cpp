#include "Exhibit.h"
#include<string.h>
#include"StuStage.h"
#include<iostream>
using namespace std;
Exhibit::Exhibit(void)
{
	
}
Exhibit::~Exhibit(void)
{

}
void Exhibit::show()
{
	  cout<<"输入1 ：查看学生信息"<<endl;
}
void Exhibit::showstu(StuStage *s)
{
	s->outputstu();
}