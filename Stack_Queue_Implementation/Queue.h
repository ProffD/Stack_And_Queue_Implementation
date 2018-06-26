#pragma once
#include<iostream>
#define MAX_SIZE 6

class Queue
{
public:
	Queue();
	bool isEmpty()const;
	void enqueue(int var);
	void dequeue();
	int peek()const;
	void displayQueue();
	~Queue();
private:
	int front =-1;
	int rear = -1;
	int arr[MAX_SIZE];
};

