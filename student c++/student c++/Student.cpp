#include "Student.h"
#include<string.h>
#include<iostream>
using namespace std;
Student::Student()
{
	this->g=new Grade();
	this->next=NULL;//���������ָ��
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
	  cout<<"����"<<"\t"<<"ѧ��"<<endl;
	  cout<<this->name<<"\t"<<this->num<<endl;
}
void Student::getGrade()
{
	cout<<"����"<<"\t"<<"ѧ��"<<"\t"<<"�ɼ�"<<endl;
	cout<<this->name<<"\t"<<this->num<<"\t"<<g->getgrade()<<endl;
}
void Student::inputInfor()
{
	cout<<"������ѧ��������"<<endl;
	cin>>this->name;
	cout<<"������ѧ����ѧ��"<<endl;
	cin>>this->num;
	cout<<"���óɹ�"<<endl;
	system("pause");
}