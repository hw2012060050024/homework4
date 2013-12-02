#include "Manger.h"
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
Manger::Manger(void)
{
	this->head=new Cstaff();
}
Manger::~Manger(void)//基类的析构函数，在子类析构中次于子类的析构函数执行
{
	Cstaff *p=this->head->next;
	while(p!=NULL)
	{
		Cstaff *pre=p;
		delete pre;
		p=p->next;
	}
	delete head;
	delete rear;
}
void Manger::addNode(Cstaff *temp)//该类被继承的方法体现共性
{
	if(this->head->next==NULL)
	{
		this->head->next=temp;
		this->rear=head->next;
	}
	else{
		rear->next=temp;
		rear=rear->next;
	}
}
void Manger::DispList()
{
	Cstaff *p=this->head->next;
	while(p!=NULL)
	{
		p->showInfo();
		p=p->next;
	}
}
void Manger::delNode(string name)//考虑到链表的首尾指针的情况设计删除节点的算法
{
	Cstaff *p=this->head->next;
	if(p==NULL)
	{
		cout<<"列表为空"<<endl;
	    return;
	}
	bool tag=false;
	while(p->getName()!=name)
	{
		if(p->next!=NULL)
		{
			if(p->next->getName()==name)//单链表，只有先找其前驱
			{
				  break;
			}else{
				p=p->next;
				tag=true;
			}
		}
		else{
			p=p->next;
			tag=true;
		}
		if(p==NULL)
		{
			break;
		}
	}
	if(p==NULL)
	{
		cout<<"不能找到你要的名字"<<endl;
	}else{
		 if(tag)
		 {
			 Cstaff *pre=p->next;
			 if(pre->next==NULL)//判定是否为尾节点被删除
			 {
				 p->next=pre->next;
				 this->rear=p;
				 delete pre;
			 }else{
				 p->next=pre->next;
				 delete pre;
			 }
		 }else{
			 if(p->next!=NULL)//判定是否为首节点被删除的情况
			 {
				 Cstaff *pre=p->next;
				 this->head->next=pre;
				 delete p;
			 }else{//判定是否为只有一个节点被删除且是首节点
				 this->head->next=NULL;
			 }
		 }
	     cout<<"删除成功"<<endl;
	}
		
	
}
void Manger::doItems(MenuItem *h)//虚函数,体现个性
{
	 
}
void Manger::setAsk()
{
	cout<<"请输入你想删除职工的名字"<<endl;
	cin>>this->askname;
}
string Manger::getAsk()
{
	return (this->askname);
}