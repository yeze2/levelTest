#pragma once
#include <iostream>

const int MAX_NUM = 100;
typedef int element;

class Stack
{
private:
	element data[MAX_NUM];
	int top;

public:
	Stack();
	bool IsEmpty();
	bool IsFull();
	void Push(element value);
	void PrintStack();
	void ShowStack();

	element pop();
	element peek();

};

//√‚√≥: https://ppomelo.tistory.com/45