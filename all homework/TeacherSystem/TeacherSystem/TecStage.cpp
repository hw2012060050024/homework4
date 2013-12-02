#include "TecStage.h"
#include"MenuItem.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
TecStage::TecStage(void)
{
	this->TpM=new TempManger();
	this->AdM=new  AdManger();
	this->TcM=new TeacManger();
}
TecStage::~TecStage(void)
{
	delete TcM;
	delete AdM;
	delete TpM;
}
void TecStage::run()
{
	    char action;
		bool exit=false;
	    while(true)
		{
             MenuItem *menu=new MenuItem();
			 cin>>action;
			 switch(action)
			 {
			 case '1':
				 TpM->doItems(menu);
				 break;
			 case '2':
				 AdM->doItems(menu);
				 break;
			 case '3':
				 TcM->doItems(menu);
				 break;
			 case '4':
				 exit=true;
				 break;
			 }
			 if(exit){
				 break;
				 delete menu;
			 }
			 delete menu;
		}
}