#pragma once
#include <iostream>

#define MAX 1000

using namespace std;

class Stack
{
private:  // keeps data secure 
	int top;  // the top most element (gets removed first)
	
public:
	int a[MAX];  // set the max value of array

	Stack()
	{
		top = -1;
	}

	bool push(int x);  // add element
	int pop();  // remove element
	int peek();  // check array (displays last element entered) 
	bool isEmpty();  // checks if EMPTY
	void print(Stack s);  // prints array
	
};