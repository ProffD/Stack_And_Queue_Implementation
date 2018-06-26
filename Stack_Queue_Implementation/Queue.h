#pragma once
#include<iostream>
#include<memory>
//#define QMAX_SIZE 6


class Queue
{
public:
	Queue(int size);
	bool isEmpty()const;
	void enqueue(int var);
	void dequeue();
	int peek()const;
	void displayQueue();
	~Queue();
private:
	int front =-1;
	int rear = -1;
	int max_size;
	std::unique_ptr<int[]> arr;
	//int arr[QMAX_SIZE];

};

