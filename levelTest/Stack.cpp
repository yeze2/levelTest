#include "Stack.h"

Stack::Stack()
{
	top = -1;
}

bool Stack::IsEmpty()
{
	return (top == -1);
}

bool Stack::IsFull()
{
	return (top == MAX_NUM-1);
}

void Stack::Push(element value)
{
	if (IsFull())
	{
		std::cout << "STACK OVERFLOW" << std::endl;
		exit(-1); //exit을 처음 본다
	}
	else
	{
		data[++top] = value;
	}
}

void Stack::PrintStack()
{
	std::cout << "### STACK ###" << std::endl;
	for (int i = top; i >= 0; i--)
	{
		std::cout << data[i] << std::endl;
	}
}

void Stack::ShowStack()
{
	Push(100);
	PrintStack();

	pop();
	PrintStack();

	Push(200);
	PrintStack();
	Push(300);
	PrintStack();
	Push(400);
	PrintStack();

	element key = pop();
	PrintStack();

	Push(500);
	PrintStack();
}

element Stack::pop()
{
	if (IsEmpty())
	{
		std::cout << "STACK OVERFLOW" << std::endl;
		exit(-1);
	}
	else
	{
		return(data[top--]);
	}
}

element Stack::peek()
{
	if (IsEmpty())
	{
		std::cout << "STACK OVERFLOW" << std::endl;
		exit(-1);
	}
	else
	{
		return(data[top]);
	}
}

//출처: https://ppomelo.tistory.com/45