// Stack_Queue_Implementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"

int main()
{
	Stack s1;
	
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


	std::cin.ignore();
	std::cin.get();
    return 0;
}

