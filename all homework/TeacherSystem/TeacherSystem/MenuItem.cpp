#include "MenuItem.h"
#include<iostream>
using std::cout;
using std::endl;
MenuItem::MenuItem(void)
{
	cout<<"1.代表临时职工管理"<<endl;
	cout<<"2.代表行政人员管理"<<endl;
	cout<<"3.代表教师职工管理"<<endl;
	cout<<"4.代表退出本次管理"<<endl;
}
MenuItem::~MenuItem(void)
{
}
void MenuItem::show()
{
	 cout<<"1.查看职工信息"<<endl;
	 cout<<"2.增加职工"<<endl;
	 cout<<"3.删除职工"<<endl;
	 cout<<"4.返回主菜单"<<endl;
}
void MenuItem::note()
{
	  cout<<"姓名"<<"\t"<<"职工号"<<endl;
      cout<<"性别"<<"\t"<<"工龄"<<endl;
	  cout<<"等级"<<"\t"<<"工资"<<endl;
	  cout<<"注：没有默认为不显示"<<endl;
}