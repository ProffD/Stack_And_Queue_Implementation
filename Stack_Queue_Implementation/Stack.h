#pragma once
#include<iostream>
#include<memory>
//#define MAX_SIZE 10


class Stack
{
public:	
	Stack(int size);
	bool isEmpty()const;
	int peek()const;
	void push(int var);
	void pop();
	~Stack();
private:
	std::unique_ptr<int[]> arr;
	//int arr[MAX_SIZE];
	int max_size;
	int top;
	
	
};

