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
	  cout<<"����1 ���鿴ѧ����Ϣ"<<endl;
}
void Exhibit::showstu(StuStage *s)
{
	s->outputstu();
}