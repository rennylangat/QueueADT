/*
Qipeng Liao and Xiaohang Yin
Assignemnet#3
02/03/2019
main.cpp : This file contains the 'main' function. Program execution begins and ends there.
Qipeng Liao did the main.cpp, Currency.cpp and Currency.h.
Xiaohang Yin did the List, Node and Queue header files.
*/


/* This program displays the Link-based Queue of Abstract Data Type
and its capabilities*/


#include<iostream>
#include<string>
#include"Queue.h"
#include"Currency.h"
using namespace std;


int mainmenu();

//functions related to queue which when called do common queue operation enqueue, dequeue, front, rear, empty.
void integerQueue(); 
void doubleQueue(); 
void stringQueue(); 
void currencyQueue(); //currency queue



int main()
{
	int choice;
	do
	{
		choice = mainmenu();

		switch (choice)// making a selection
		{


		case 1://Integer
			integerQueue();
			break;

		case 2://Double
			doubleQueue();
			break;

		case 3://String
			stringQueue();
			break;

		case 4://Currency
			currencyQueue();
			break;
		}

	} while (choice != 5); 
	cout << endl << endl;
	system("pause");
	return 0;
}

int mainmenu()
{
	int choice;

	//Request the user for input


	cout << " Link-based Queue ADT" << endl << endl;


	cout << endl << "\t1) Integer Queue" << endl;
	cout << "\t2) Double Queue" << endl;
	cout << "\t3) String Queue" << endl;
	cout << "\t4) Currency Queue" << endl;
	cout << "\t5) Exit the program" << endl << endl;


	cout << " Please enter intended queue number to try: ";
	cin >> choice;

	while (choice < 1 || choice > 5)
	{
		cout << "\n Incorrect Value! Try Again." << endl << endl;
		cout << endl << endl;
		cout << " Please insert the number of the Queue that you would like to try: ";
		cin >> choice;
	}
	return choice;
}
/**
The syntax for each and every of the following functions is almost similar and each data type we want to work on
For our case we are dealing with Integers, Doubles and Strings. We also have our Currency class from our previous lab
which generates random currencies.
**/

void integerQueue()//integer Queue
{
	cout << endl;
	system("pause");
	system("CLS");
	cout << "\nLink-based Queue ADT"
		<< endl << "Integer Queue\n\n\n\n";

	Queue< int > intQueue; // create Queue of ints
	cout << " Integer queue processing>>>>\n\n";
	cout << " The size of the Queue is " << intQueue.size() << endl << endl;

	// push integers onto intQueue
	for (int i = 0; i < 7; i++)
	{
		intQueue.enqueue(i);
		cout << "front Queue:" << intQueue.front() << endl;
		cout << "rear Queue:" << intQueue.rear() << endl;
		intQueue.printQueue();
	} // end for

	cout << "\nThe new size of the Queue is " << intQueue.size() << endl << endl;
	cout << string(60, '-') << endl << endl;

	int deqInteger; //

					//
	while (!intQueue.isQueueEmpty())
	{
		intQueue.dequeue(deqInteger);
		cout << " " << deqInteger << " dequeued from queue" << endl;
		intQueue.printQueue();
	} // end while

	cout << " \n\n Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");
}

void doubleQueue()
{
	cout << endl;
	system("pause");
	system("CLS");
	cout << string(60, '=') << endl << endl;
	cout << "\t\t   Link-based Queue ADT" << endl << "\t\t\tDouble Queue\n\n";
	cout << string(60, '=') << endl << endl;
	Queue< double > doubleQueue; // create queue of doubles
	double value = 1.1;

	cout << " Processing a double Queue" << endl << endl;
	cout << " The size of the Queue is " << doubleQueue.size() << endl << endl;


	// push floating-point values onto doubleQueue
	for (int j = 0; j < 5; j++)
	{

		doubleQueue.enqueue(value);

		cout << "front Queue:" << doubleQueue.front() << endl;
		cout << "rear Queue:" << doubleQueue.rear() << endl;
		doubleQueue.printQueue();
		value += 1.1;

	}

	cout << "\n The new size of the Queue is " << doubleQueue.size() << endl << endl;
	cout << string(60, '-') << endl << endl;

	double deqDouble; // store double dequeued from queue

					  // dequeue floating-point values from doubleQueue
	while (!doubleQueue.isQueueEmpty())
	{
		doubleQueue.dequeue(deqDouble);
		cout << " " << deqDouble << " dequeue from queue" << endl;
		doubleQueue.printQueue();
	} // end while

	cout << string(60, '=') << endl << endl;
	cout << " Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");
}

void stringQueue()
{
	cout << endl;
	system("pause");
	system("CLS");
	cout << string(60, '=') << endl << endl;
	cout << "\t\t    Link-based Queue ADT" << endl << "\t\t\tString Queue\n\n";
	cout << string(60, '=') << endl << endl;

	Queue< string > strngQueue; // create queue of strings
	cout << " Processing a string Queue" << endl << endl;
	cout << " The size of the Queue is " << strngQueue.size() << endl << endl;

	// push strings onto strngQueue
	strngQueue.enqueue("String zero");

	cout << "front Queue:" << strngQueue.front() << endl;
	cout << "rear Queue:" << strngQueue.rear() << endl;

	strngQueue.printQueue();

	strngQueue.enqueue("String one");

	cout << "front Queue:" << strngQueue.front() << endl;
	cout << "rear Queue:" << strngQueue.rear() << endl;

	strngQueue.printQueue();

	strngQueue.enqueue("String two");

	cout << "front Queue:" <<strngQueue.front() << endl;
	cout << "rear Queue:" << strngQueue.rear() << endl;
	strngQueue.printQueue();

	strngQueue.enqueue("String three");

	cout << "front Queue:" << strngQueue.front() << endl;
	cout << "rear Queue:" << strngQueue.rear() << endl;
	strngQueue.printQueue();

	strngQueue.enqueue("String four");

	cout << "front Queue:" << strngQueue.front() << endl;
	cout << "rear Queue:" << strngQueue.rear() << endl;
	strngQueue.printQueue();

	cout << "\n The new size of the Queue is " << strngQueue.size() << endl << endl;

	cout << string(60, '-') << endl << endl;

	string deqstrng; // store string dequeud from queue

					 // dequeue strings from strngQueue and print
	while (!strngQueue.isQueueEmpty())
	{
		strngQueue.dequeue(deqstrng);
		cout << " " << deqstrng << " dequeue from queue" << endl;
		strngQueue.printQueue();
	} // end while
	cout << string(60, '=') << endl << endl;

	cout << " Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");

}

void currencyQueue()


{
	cout << endl;
	system("pause");
	system("CLS");
	cout << "\n\nLink-based Queue ADT" << endl << "\t\t\t\t\t Currency Queue\n\n";

	Queue< Currency > crrQueue; // create Queue of Currencies
	cout << " Processing a string Queue" << endl << endl;
	cout << " The size of the Queue is " << crrQueue.size() << endl << endl;


	// enqueue currencies onto crrQueue
	Currency obj(34, 45);
	crrQueue.enqueue(obj);
	crrQueue.printQueue();

	Currency obj1(23, 78);
	crrQueue.enqueue(obj1);
	crrQueue.printQueue();

	Currency obj2(12, 67);
	crrQueue.enqueue(obj2);
	crrQueue.printQueue();

	Currency obj3(23, 54);
	crrQueue.enqueue(obj3);
	crrQueue.printQueue();

	cout << "\n The new size of the Queue is " << crrQueue.size() << endl << endl << endl;


	Currency deqcurrency; // store currency dequeud from queue


	while (!crrQueue.isQueueEmpty())
	{

		crrQueue.dequeue(deqcurrency);
		cout << deqcurrency << " dequeued from queue" << endl;
		crrQueue.printQueue();

	}
	cout << string(100, '=') << endl << endl;
	cout << " Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");


}
