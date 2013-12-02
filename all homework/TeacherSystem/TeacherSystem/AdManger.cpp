#include "AdManger.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
AdManger::AdManger(void)
{
	this->value="行政人员管理";
}
AdManger::~AdManger(void)
{
}
void AdManger::doItems(MenuItem *h)
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
			this->addNode(this->add());
			break;
		case '3':
			this->setAsk();
			this->delNode(this->getAsk());
			break;
		case '4':
			exit=true;
			break;
		default:
			cout<<"输入了错误的菜单选项"<<endl;
		    break;
		}
		if(exit)
		{break;}

	}

}
CAdministrator * AdManger::add()
{
	CAdministrator * p=new CAdministrator(2500.0);
	return (p);
}
