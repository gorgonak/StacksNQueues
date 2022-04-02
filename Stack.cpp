#include "Stack.h"

bool Stack::push(int x)  // oush is used to add an element into the array.
{
	if (top >= MAX -1)
	{
		cout << "\n\tSTACK OVERFLOW IMMINENT!" << endl;
		return false;
	}
	else
	{
		a[++top] = x;
		cout << "\n\t" << x << " was pushed into the STACK" << endl;
		return true;
	}
}

int Stack::pop()  // pop is used to delete the last element entered into the array (LIFO)
{
	if (top < 0)
	{
		cout << "\n\tSTACK UNDERFLOW WARNING. THERE IS NOTHING TO REMOVE." << endl;
		return 0;
	}
	else
	{
		int x = a[top--];	
		return x;
	}
}

int Stack::peek()  // allows the user to "peek" at what the top number of the stack is. also allows the user to check if the stack is EMPTY.
{
	if (top < 0)
	{
		cout << "\n\tSTACK IS EMPTY" << endl;
		return 0;
	}
	else 
	{
		int x = a[top];

		return x;
	}
	
}

bool Stack::isEmpty()
{
	return (top < 0);
}

void Stack::print(Stack s) // displays the elements contained in the array. 
{
	cout << "\n\tELEMENTS IN THE STACK: ";
	while (!s.isEmpty())
	{
		std::cout << s.pop() << " ";
		
	}
}