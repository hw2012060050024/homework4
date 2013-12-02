#include "ScList.h"
#include"Exhibit.h"
#include"ExhibitGrades.h"
#include"Deletestu.h"
#include"Addstu.h"
#include"InputStugrade.h"
#include"OutStu.h"
#include"StuStage.h"
#include<iostream>
#include<conio.h>
using namespace std;
ScList::ScList(void)
{
	this->item[0]=new Exhibit();
	this->item[1]=new Addstu();
	this->item[2]=new Deletestu();
	this->item[3]=new ExhibitGrades();
	this->item[4]=new InputStugrade();
	this->item[5]=new OutStu();
	this->stage=new StuStage;

}
ScList::~ScList(void)
{
	 for(int i=0;i<5;i++)
	 {
		 delete item[i];//析构函数释放空间
	 }
	 delete this->stage;
}
int ScList::run()
{
	cout<<"学生成绩管理系统"<<endl;
	while(true)
	{   
		char action;
	    for(int i=0;i<6;i++)
		{
			this->item[i]->show();
        }
		cin>>action;
		switch (action)
		{
		case'1':
			stage->outputstu();
			break;
		case '2':
			stage->add();
			break;
		case '3':
			cout<<"请输入删除学生的姓名"<<endl;
			char stuname[20];
			cin>>stuname;
			stage->remove(stuname);
			break;
		case '4':
			stage->outputgrade();
			break;
		case '5':
			cout<<"请输入学生的姓名"<<endl;
			char stuname1[20];
			cin>>stuname1;
			stage->setstugrade(stuname1);
			break;
		case '6':
			return 0;//基类的指针数组不能够访问子类的方法
			break;
		default:
			cout<<"输入错误，请重新输入"<<endl;
			break;
		}
		system("CLS");
	}
	return 0;
}