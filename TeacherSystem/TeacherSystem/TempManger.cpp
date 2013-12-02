#include "TempManger.h"
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
TempManger::TempManger(void)
{
	this->value="临时职工管理";
}
TempManger::~TempManger(void)
{
	
}
void TempManger::doItems(MenuItem *h)
{
	cout<<value<<endl;
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
			this->addNode(this->add());//类型兼容，一个基类的指针可以指向子类，(很重要)
			break;
		case '3':
			this->setAsk();
			this->delNode(this->getAsk());
			break;
		case '4':
			exit=true;
			break;
		default:
			cout<<"输入了错误的选项"<<endl;
			break;
		}
		if(exit){break;}
	}
}
CTempStaff * TempManger::add()
{
	CTempStaff *p=new CTempStaff(1000.0);
	return(p);
}
