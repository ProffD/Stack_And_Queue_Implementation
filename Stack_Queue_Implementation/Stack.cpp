#include "stdafx.h"
#include "Stack.h"


Stack::Stack(int size)
{
	arr = std::make_unique<int []>(size);
	if (arr == nullptr)
	{
		std::cerr << "Could not allocate memory indicated!" << '\n';
		exit(1);
	}
	max_size = size;
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
		std::cerr << "Stack is empty!" << '\n';
		return -1;
	}
	else
		return arr[top];
}
void Stack::push(int var)
{
	
	if (top == max_size -1)
		std::cerr << "Stack is full!!\nMaximum size is: " << max_size << '\n';
	else {
		top++;
		arr[top] = var;
	}
		

}
void Stack::pop()
{
	if (isEmpty()) 
		std::cerr << "Stack is empty!" << '\n';
	else
	  top--;
}

Stack::~Stack()
{
}
