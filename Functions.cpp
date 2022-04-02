#include "Functions.h"
#include <cstddef>
#include <iostream>

using namespace std;

node* front = NULL;
node* rear = NULL;
node* temp;


// enqueue
void Insert() // with a linked list you don't need to worry about overflow unless you run out of physical memory
{
	int val;
	cout << "\n\tPlease enter an integer to insert in Queue: ";
	cin >> val;

	if (rear == NULL)
	{
		rear = new node;
		rear->next = NULL;
		rear->data = val;

		front = rear;
	}
	else
	{
		temp = new node;
		rear->next = temp;
		temp->data = val;
		temp->next = NULL;

		rear = temp;
	}
}


// dequeue
void Delete()  // function to delete the first element in the QUEUE (FIFO)
{
	temp = front;
	
	if(front == NULL)  // checks if the QUEUE is empty to prevent underflow
	{
		cout << "\n\tQUEUE UNDERFLOW WARNING. THERE IS NOTHING TO REMOVE." << endl;
		return;
	}
	else if(temp->next != NULL)
	{
		temp = temp->next;
		cout << "\n\tRemoved Element " << front->data << " from the QUEUE." << endl;
		delete front;
		
		front = temp;
	}
	else
	{
		cout << "\n\tRemoved Element " << front->data << " from the QUEUE." << endl;
		delete front;
		
		front = NULL;
		rear = NULL;
	}
}


// Displays or "prints" the contents of the QUEUE
void Display() 
{
	temp = front;
	if((front == NULL) && (rear == NULL)) // the mystery function to check if the QUEUE is empty before continuing
	{
		cout << "\n\t* The QUEUE is EMPTY *" << endl;
		return;
	}
	
	cout << "\n\tThe element(s) in the QUEUE are: ";
	
	while (temp != NULL) // cycles through the list until we run out of elements to display
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	cout << endl;

}


// Checks if the QUEUE is EMPTY or not
void Empty()
{
	if ((front == NULL) && (rear == NULL))
	{
		cout << "\n\t* The QUEUE is empty. *" << endl;
	}
	else
	{
		cout << "\n\t* The QUEUE is NOT empty. Run option (3) to see what is contained inside. *" << endl;
	}
}