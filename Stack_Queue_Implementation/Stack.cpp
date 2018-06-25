#include "stdafx.h"
#include "Stack.h"


Stack::Stack()
{
	top = -1;
}
bool Stack::isEmpty()const
{
	if (top < 0)
		return true;
	else
		return false;
}
int Stack::peek()const
{
	if (isEmpty()) {
		std::cout << "Stack is empty!" << '\n';
		return -1;
	}
	else
		return arr[top];
}
void Stack::push(int var)
{
	
	if (top == MAX_SIZE -1)
		std::cout << "Stack is full!!\nMaximum size is: " << MAX_SIZE << '\n';
	else {
		top++;
		arr[top] = var;
	}
		

}
void Stack::pop()
{
	if (isEmpty()) 
		std::cout << "Stack is empty!" << '\n';
	else
	  top--;
}

Stack::~Stack()
{
}
