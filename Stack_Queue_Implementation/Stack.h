#pragma once
#include<iostream>
#define MAX_SIZE 10


class Stack
{
public:	
	Stack();
	bool isEmpty()const;
	int peek()const;
	void push(int var);
	void pop();
	~Stack();
private:
	int top;
	int arr[MAX_SIZE];
	
};

