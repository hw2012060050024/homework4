#include "TeacManger.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
TeacManger::TeacManger(void)
{
}


TeacManger::~TeacManger(void)
{
}
void TeacManger::doItems(MenuItem *h)
{
	  char action;
	  bool exit=false;
	  while(true)
	  {
		  h->show();
		  cin>>action;
		  switch(action)
		  {
		  case '1':
			  h->note();
			  this->DispList();
			  break;
		  case '2':
			  this->addNode(add());
			  break;
		  case '3':
			  this->setAsk();
			  this->delNode(getAsk());
			  break;
		  case '4':
			  exit=true;
			  break;
		  default:
			  cout<<"输入了错误的菜单选项"<<endl;
			  break;
		  }
		  if(exit)
		  {
			  break;
		  }
	  }
}
CProfessor * TeacManger::add()
{
	CProfessor *p=new CProfessor(6000.0);
	return (p);
}
