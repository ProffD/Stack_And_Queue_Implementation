#include "stdafx.h"
#include "Queue.h"


Queue::Queue()
{
}
bool Queue::isEmpty()const
{
		return front == -1 && rear == -1 ? true : false;	
}
void Queue::enqueue(int var)
{
	if (rear == MAX_SIZE - 1)
		std::cerr << "Queue is full!\nMaximum size: " << MAX_SIZE << '\n';
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
		return -1;
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
