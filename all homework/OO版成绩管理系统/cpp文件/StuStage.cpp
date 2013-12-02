#include "StuStage.h"
#include"Student.h"
#include<string.h>
#include<iostream>
using namespace std;
StuStage::StuStage(void)
{
	this->head=new Student();
	this->rear=new Student();
}
StuStage::~StuStage(void)//链表空间释放算法
{
	Student *p=this->head->next;
	Student *q;
	while(p!=NULL)
	{
        q=p;
		p=p->next;
		delete q;
	}
	delete this->head;
}
void StuStage::add()//头部创建链表
{
	  Student *p=new Student();
	  p->inputInfor();
	  if(this->head->next==NULL)
	  {
		  this->head->next=p;
		  this->rear=p;
	  }else{
		  this->rear->next=p;
		  this->rear=p;
	  }
}
void StuStage::remove(char name[])
{
	Student *p=this->head;
	while(p!=NULL)
	{
		if(p->next!=NULL)
		{
			if((strcmp(p->next->name,name))==0){
			   break;
			}else{
				p=p->next;
			}
		}else{
			p=p->next;
		}
	}
	if(p!=NULL)
	{
		Student *pre=p->next;
		p->next=pre->next;
		delete pre;//释放空间
		cout<<"删除成功"<<endl;
	}else{
		 cout<<"未能找到该学生"<<endl;
	}
}
void StuStage::outputstu()
{
	Student *p=this->head->next;
	while(p!=NULL)
	{
		p->getInformation();
		p=p->next;
	}
}
void StuStage::outputgrade()
{
	Student *p=this->head->next;
	while(p!=NULL)
	{
		p->getGrade();
		p=p->next;
	}
}
void StuStage::setstugrade(char name[])
{
	Student *p=this->head->next;
	while(p!=NULL)
	{
		if((strcmp(p->name,name))==0)
		{
			break;
		}
		p=p->next;
	}
	if(p!=NULL)
	{
		p->inputgrade();
	}else{
		cout<<"未能找到该学生"<<endl;
	}
}
