#include "MenuItem.h"
#include<iostream>
using namespace std;
MenuItem::MenuItem(void)
{
	
}


MenuItem::~MenuItem(void)
{
}
void MenuItem::show()
{
	cout<<""<<endl;//注意尽管是虚函数，注定要被子类的同名方法覆盖，但是必须在CPP文件中申明函数体
}