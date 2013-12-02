#pragma once
#include"LinkNode.h"
class linkstack
{
public:
	linkstack(void);
	~linkstack(void);
	void push(int item);
	int  pop();
	bool isEmpty();
private:
	 LinkNode * head;

};

