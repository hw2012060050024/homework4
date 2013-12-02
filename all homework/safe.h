#pragma once
class safe
{
public:
	safe(int n);
	~safe(void);
	bool isSafe(int index);
	void setValue(int value,int pos);
	int  getValue(int pos);
	bool lastError;
private :
	   int *p;
	   int length;
};

