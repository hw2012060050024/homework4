#include "Student.h"
#include<string.h>
#include<iostream>
using namespace std;
Student::Student()
{
	this->g=new Grade();
	this->next=NULL;//保护链表的指针
}
Student::~Student(void)
{
	delete g;
}
void Student::inputgrade()
{
	  g->setgrade();
}
void Student::getInformation()
{
	  cout<<"姓名"<<"\t"<<"学号"<<endl;
	  cout<<this->name<<"\t"<<this->num<<endl;
}
void Student::getGrade()
{
	cout<<"姓名"<<"\t"<<"学号"<<"\t"<<"成绩"<<endl;
	cout<<this->name<<"\t"<<this->num<<"\t"<<g->getgrade()<<endl;
}
void Student::inputInfor()
{
	cout<<"请输入学生的姓名"<<endl;
	cin>>this->name;
	cout<<"请输入学生的学号"<<endl;
	cin>>this->num;
	cout<<"设置成功"<<endl;
	system("pause");
}