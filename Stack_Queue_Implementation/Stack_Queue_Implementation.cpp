// Stack_Queue_Implementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"
#include "Queue.h"
int main()
{
	std::cout << "============Performing Stack operations=============" << '\n';
	Stack s1(10);
	
	s1.pop();
	s1.push(2);
	s1.push(5);
	s1.push(7);
	s1.push(20);
	s1.push(8);
	s1.push(4);
	s1.push(10);
	s1.push(12);
	s1.push(47);
	s1.push(30);
	s1.push(9);

	std::cout<<"top: "<< s1.peek()<<'\n';
	s1.pop();

	std::cout << "top: " << s1.peek() << '\n';
	
	std::cout << "\n===========Performing Queue operations==============" << '\n';
	Queue q1(6);
	q1.dequeue();
	q1.enqueue(4);
	q1.enqueue(7);
	q1.enqueue(16);
	q1.enqueue(1);
	q1.enqueue(3);
	q1.enqueue(10);
	q1.enqueue(5);
	q1.displayQueue();
	std::cout << "\nfront: " << q1.peek() << '\n'; 
	q1.dequeue();
	q1.displayQueue();
	std::cout << "\nfront: " << q1.peek() << '\n';
	std::cin.ignore();
	std::cin.get();
    return 0;
}

