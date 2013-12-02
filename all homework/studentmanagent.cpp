// studentmanagent.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
const int  MAXNUM=200;
using namespace std;
struct  student{
	   char name[20];
	   char num[20];
	   int grade;
	   struct  subject;
};
student s[MAXNUM];
static int countall;
void  observe(student s[])
{  
	     int i=0;
		 int pos=0;
		 cout<<"student name"<<"\t"<<"student nmuber"<<"\t"<<"grade"<<endl;
		 while((strcmp(s[pos].name,""))!=0)
		 {  
			 if(s[pos].grade==-1)
			 {     
				   pos++;
				   continue;
			 }
			 else{
			      if(s[pos].grade==0){
					  cout<<s[pos].name<<"\t"<<s[pos].num<<"\t"<<"grade is not input "<<endl;
				  }else{
					  cout<<s[pos].name<<"\t"<<s[pos].num<<"\t"<<s[pos].grade<<endl;
				  }
			 }
			 pos++;
		 }
}
int    addstudent(student s[],int i)
{        
	     int j=0;
		 int pos=0;
		 if(i<0){
			 cout<<"you input is illegal"<<endl;
			 return (1);
		 }
		 while((strcmp(s[pos].name,""))!=0)
		 {
			  pos++;
		 }
		 for(j=0;j<i;j++)
		 {
			  cout<<"please input the name of students"<<endl;
			  cin>>s[pos].name;
			  cout<<"please input the num of students"<<endl;
			  cin>>s[pos].num;
			  pos++;
		 }
		 return (pos-1);
}
void  move(student s[],char name[])//字符参数传递直接传递字符数组
{
	     int pos=0;
		 while((strcmp(s[pos].name,name))!=0&&pos<MAXNUM)
		 {
			 pos++;
		 }
		 if(pos==MAXNUM)
		 {
			 cout<<"the student you want to delete is no exit"<<endl;
			 return ;}
		 else{
			 s[pos].grade=-1;
			 cout<<"the student are removed"<<endl;
		}
		
}
void inputgrade(student s[])
{
	     char jugde;
	     int pos=0;
		 while(s[pos].grade!=0){
			 if(s[pos].grade==-1){
				 pos++;
				 continue;}
		     pos++;
		 }
		 while(pos<MAXNUM)
		 {
			  if(s[pos].grade==-1)
			  {    
				   pos++;
				   cout<<"this student already moved "<<endl;
				   continue;
			  }
			  else if((strcmp(s[pos].name,""))==0)
			  {
				    cout<<"you are finish the all the input"<<endl;
					break;
			  }
			  cout<<"please input the grade of "<< s[pos].name<<"'s grade"<<endl;
			  
			  cin>>s[pos].grade;
			  pos++;
			  cout<<"do you want to input the next"<<"the y sign yes  the n sign no"<<endl;
			  cin>>jugde;
			  if(jugde=='n'){
				       break;
			  }
		 }

}
int main(int argc, _TCHAR* argv[])
{
    bool loop=true;
	int  choose;
	while(loop)
	{
		  cout<<"input the 1 to observe the students in basic"<<endl;
		  cout<<"input the 2 to  add the students you want to "<<endl;
		  cout<<"input the 3 to  delete the students number"<<endl;
		  cout<<"input the 4 to  input the students' grade"<<endl;
		  cout<<"input the 5 to  exit the system"<<endl;
		  cin>>choose;
		  switch(choose){
		  case 1:
			   observe(s);
			   break;
		  case 2:
			   cout<<"please input the numbers you want to add"<<endl;
			   int number;
			   cin>>number;
			   countall=addstudent(s,number)+1;
			   cout<<"now you have "<<countall<<"students"<<endl;
			   break;
		  case 3:
			    cout<<"please input the name of the student"<<endl;
				char str[20];
				cin>>str;
			    move(s,str);
				break;
		  case 4:
			    inputgrade(s);
				break;
		  case 5:
			     return 0;
		  default:  cout<<"the number you input is  illegal"<<endl;
			     break;
		  }
   }
	system("pause");
	return 0;
}