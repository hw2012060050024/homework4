#include "TeacherManger.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
TeacherManger::TeacherManger(void)
{
	this->show=new ShowItems();
}


TeacherManger::~TeacherManger(void)
{
	delete this->show;
	for(int i=0;i<teachers.size();i++)
	{
		delete teachers[i];//»ØÊÕ¿Õ¼ä
	}
	this->teachers.clear();
}
void TeacherManger::doTecM()
{
	bool exit=false;
	  char action;
	  while(1)
	  {
		  this->show->oitems();
		  cin>>action;
		  switch (action)
		  {
		  case'1':
			  this->list();
			  break;
		  case '2':
			  this->add();
			  break;
		  case '3':
			  this->del();
			  break;
		  case'4':
			   exit=true;
			   break;
		  default:
			  break;
		  }
		  if(exit)
		  {break;}
	  }
}
void TeacherManger::add()
{
	CProfessor *cp=new CProfessor(5000.0);
	this->teachers.push_back(cp);
}
void TeacherManger::list()
{
	this->show->shownews();
	for(int i=0;i<teachers.size();i++)
	{   
		if(teachers[i]->basicwage==-1)
		{
			continue;
		}
		teachers[i]->showInfo();
	}
}
void TeacherManger::del()
{
	 int i=0;
	 cout<<"i.nput the name you want to remove"<<endl;
	 cin>>askname;
	 if(teachers.empty())
	 {
		 cout<<"Empty"<<endl;
		 return;
	 }
	 while(teachers[i]->getName()!=askname)
	 { 
		  i++;
		  if(i==teachers.size())
		  {
			  break;
		  }
	 }
	 if(i==teachers.size())
	 {
		 cout<<"can't find it"<<endl;
	 }else{
		 teachers[i]->basicwage=-1;
		 cout<<"already removed "<<endl;
	 }
}