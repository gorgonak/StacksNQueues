#include "Driver.h"

#include <iostream>
#include "Functions.h"
#include "Stack.h"


int user_menu()
{
	int choice;

	std::cout << "\tEnter Your Selection: ";
	std::cin >> choice;

	switch (choice)
	{
	case 0:
		break;
	case 1:
		runStack();
		break;
	case 2:
		runQueue();
		break;

	default:
		break;
	}

	return choice;
}

void runStack()
{
	Stack s;

	int choice;
	int pop;

	std::cout << "\n\n\tYou chose to make a STACK" << std::endl;

	do
	{

		std::cout << "\n\n\tPress ENTER to continue";
		std::cin.ignore();
		std::cin.ignore();

		system("CLS");

		std::cout << "\n\n\tSTACK" << endl;

		std::cout << "\n\t1. Insert element into STACK (push)" << endl;
		std::cout << "\t2. Delete element from STACK (pop)" << endl;
		std::cout << "\t3. Print the STACK (display)" << endl;
		std::cout << "\t4. Show last element / Check if EMPTY (peek)" << endl;
		std::cout << "\n\t0. Exit Program" << endl;

		cout << "\n\tEnter your selection: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			s.push(pushText());
			break;
		case 2:
			pop = s.pop();
			
			if (pop != 0)
			{
				std::cout << "\n\t" << pop << " was removed from the STACK" << std::endl;
				break;
			}
			else
				break;
			
			break;
		case 3:
			s.print(s);
			break;
		case 4:
			if (s.peek() == 0)
				break;
			std::cout << "\n\tLast ELEMENT entered into STACK: " << s.peek() << std::endl;
			break;
		case 0:
			std::cout << "\n\n\tEXITING PROGRAM" << endl;
			break;

		default:
			break;

		}
	} while (choice != 0);
}

void runQueue()
{

	int choice;

	std::cout << "\n\n\tYou chose to make a QUEUE\n" << std::endl;

	do
	{
		std::cout << "\n\n\tPress ENTER to continue";
		std::cin.ignore();
		std::cin.ignore();

		system("CLS");

		std::cout << "\n\n\tQUEUE\n\n" << std::endl;

		std::cout << "\t1. Insert element into QUEUE (enqueue)" << endl;
		std::cout << "\t2. Delete element from QUEUE (dequeue)" << endl;
		std::cout << "\t3. Print the QUEUE (display)" << endl;
		std::cout << "\t4. Check if QUEUE is EMPTY (cheque)" << endl;
		std::cout << "\n\t0. Exit Program" << endl;

		cout << "\n\tEnter your selection: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Insert();
			break;
		case 2:
			Delete();
			break;
		case 3:
			Display();
			break;
		case 4:
			Empty();
			break;

		case 0:
			cout << "\n\n\tEXITING PROGRAM" << endl;
			break;

		default:
			cout << "\n\tInvalid choice." << endl;
			break;
		}
	} while (choice != 0);
}

int pushText()
{
	int value;

	std::cout << "\n\tEnter the value to push into your STACK: ";
	std::cin >> value;

	return value;
}