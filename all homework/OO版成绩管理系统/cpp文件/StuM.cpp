#include "StuM.h"
#include"ScList.h"
#include<iostream>
using namespace std;
StuM::StuM(void)
{
	this->list=new ScList();	
}
StuM::~StuM(void)
{
	delete list;
}
void StuM::start()
{
	list->run();
}