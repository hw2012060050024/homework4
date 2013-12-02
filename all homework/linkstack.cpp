#include "StdAfx.h"
#include "linkstack.h"
#include"LinkNode.h"

linkstack::linkstack(void)
{
	this->head=new LinkNode(-1);
}
linkstack::~linkstack(void)
{
	delete this->head;
}
void linkstack::push(int item)
{
	   LinkNode *p=new LinkNode(item);
	   p->next=this->head->next;
	   this->head->next=p;
}
int linkstack::pop()
{
	LinkNode *p=this->head->next;
	int temp=p->data;
	this->head->next=p->next;
	delete p;//·ÀÖ¹ÄÚ´æÐ¹Â©
	return(temp);
}
bool linkstack::isEmpty()
{
	return(this->head->next==NULL);
}