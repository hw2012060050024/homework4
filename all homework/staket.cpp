#include "stdafx.h"
#include "staket.h"
#include"staket.h"
#include<iostream>
using namespace std;



staket::~staket(void)
{
}
staket ::staket( ){
h=(node *)malloc(sizeof(node));
if(!h){cout<<"ÄÚ´æ·ÖÅäÊ§°Ü"<<endl;exit(-1);};
h->next =NULL;
	h1=h;
};

void staket :: pop(){
	node *p=h->next ;
h->next =h->next ->next ;
free(p);
};

void staket::push( int n){
	node*p=(node*)malloc(sizeof(node));
	if(!p){cout<<"ÄÚ´æ·ÖÅäÊ§°Ü"<<endl;exit(-1);};
	p->next =h->next ;p->data =n;
	h->next =p;
};
int staket::reade (){
	int m;
	return m=h->next->data ;
};
bool staket::isempty(){
	bool a=false;
	if(h==h1)return a;
	else return true;
};