#include "stdafx.h"
#include "Queue.h"



Queue::Queue(int size)
{
	arr = std::make_unique<int[]>(size);
	if (arr == nullptr)
	{
		std::cerr << "Could not allocate memory indicated!" << '\n';
		exit(1);
	}
	max_size = size;
}

bool Queue::isEmpty()const
{
		return front == -1 && rear == -1 ? true : false;	
}

void Queue::enqueue(int var)
{
	if (rear == max_size - 1)
		std::cerr << "Queue is full!\nMaximum size: " << max_size << '\n';
	else {
		if(front == -1)
		    front = 0;

		arr[++rear] = var;
	}
	 
}

void Queue::dequeue()
{
	if (isEmpty())
		std::cerr << "Queue is empty!" << '\n';
	else
	{
		if (front == rear)
			front = -1, rear = -1;
		else
			front++;
	}

}

int Queue::peek()const
{
	if (!isEmpty())
		return arr[front];
	else {
		std::cerr << "Queue is empty!" << '\n';
		//return -1;
	}
	
}

void Queue::displayQueue()
{
	if(isEmpty()) 
		std::cerr << "Queue is empty!" << '\n';
	else
		for(int i = front; i <= rear; i++)
		  std::cout << arr[i] << " ";
		
}

Queue::~Queue()
{
}
