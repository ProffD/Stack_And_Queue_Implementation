#pragma once
#include<iostream>
#include<memory>
//#define MAX_SIZE 10

template<typename T>
class Stack
{
public:	
	Stack(int size);
	bool isEmpty()const;
	T peek()const;
	void push(T var);
	void pop();
	void displayStack();
	~Stack();
private:
	std::unique_ptr<T[]> arr;
	//int arr[MAX_SIZE];
	int max_size;
	int top;
	
	
};


template<typename T>
Stack<T>::Stack(int size)
{
	arr = std::make_unique<T[]>(size);
	if (arr == nullptr)
	{
		std::cerr << "Could not allocate memory indicated!" << '\n';
		exit(1);
	}
	max_size = size;
	top = -1;
}
template<typename T>
bool Stack<T>::isEmpty()const
{
	if (top < 0)
		return true;
	else
		return false;
}
template<typename T>
T Stack<T>::peek()const
{
	if (isEmpty()) {
		std::cerr << "Stack is empty!" << '\n';
		return -1;
	}
	else
		return arr[top];
}
template<typename T>
void Stack<T>::push(T var)
{

	if (top == max_size - 1)
		std::cerr << "Stack is full!!\nMaximum size is: " << max_size << '\n';
	else {
		top++;
		arr[top] = var;
	}


}
template<typename T>
void Stack<T>::pop()
{
	if (isEmpty())
		std::cerr << "Stack is empty!" << '\n';
	else
		top--;
}
template<typename T>
void Stack<T>::displayStack()
{
	while (!isEmpty()) {
		std::cout << peek() << " ";
		pop();
	}
}
template<typename T>
Stack<T>::~Stack()
{
}
