// Refrences example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>



// Namespace
using namespace std;

// Function declaration
void safe(int yourCase, int theifsCase); // takes a value of the input values, so no changes remain after function ends (pass by value)
void swapped(int& yourCase, int& thiefsCase); // takes a reference of the input values, so it can make lasting changes (pass by reference)
void printContents(int yourCase, int theifsCase); // takes a value of the input values, so no changes remain after function ends (pass by value)

// main function
void main()
{
	

	int yourCaseContains = 5000; // Initialize & declare variable starting value of $100,000
	int thiefsCaseContains = 0; // Initialize & declare variable starting value of 0

	cout << "Making 5000 for a hard days work you go to deposite your money " << yourCaseContains << " you made today.\n"; // simple cout story
	cout << "To reward yourself for a hard days work you decide to grab a bite to eat at the local diner.\n"; // simple cout story
	cout << "Unbeknownst to you a small man runs by and swaps the cases.\n"; // simple cout story

	cout << "Origional Values\n"; // simple cout story
	printContents(yourCaseContains, thiefsCaseContains); // calls function printContents and sends in yourCaseContains and thiefsCaseContains

	cout << "You chase the man out of the store but since your case is locked he makes out with nothing.\n"; // simple cout story
	safe(yourCaseContains, thiefsCaseContains); // calls function safe and sends in yourCaseContains and thiefsCaseContains
	printContents(yourCaseContains, thiefsCaseContains); // calls function printContents and sends in yourCaseContains and thiefsCaseContains

	cout << "You return to the cafe the next day and the sly little thief makes off with your cash again!.\n";
	cout << "Since you're a dummy you didn't lock your case this time and he steals all of your money";
	swapped(yourCaseContains, thiefsCaseContains); // calls function swapped and sends in yourCaseContains and thiefsCaseContains
												   // inside this function your variables are passed as references, so any change made in this function is applied to the original values sent in.
	printContents(yourCaseContains, thiefsCaseContains); // calls function printContents and sends in yourCaseContains and thiefsCaseContains

	system("pause"); // pause so we can read what was printed to the console
}
// safe function
void safe(int yourCase, int thiefsCase) // This takes a copy of the values passed into it and swaps them. The pass by value ensures the original values are not changed.
{
	int temp = thiefsCase; // makes new variable called temp and stores the thiefsCase value in it
	thiefsCase = yourCase; // makes thiefsCase variable the same as yourCase value
	yourCase = temp; // makes yourCase variable the same as what you previously stored in temp (which is the original thiefs case value)

	// The function now exits, and returns nothing. Everything in here is deleted, and nothing is applied to the main function.
}
// swapped function
void swapped(int& yourCase, int& thiefsCase) // This takes a reference of the provided variables and swaps them. The pass by reference ensures the original values are changed.
{
	int temp = thiefsCase; // makes new variable called temp and stores the thiefsCase value in it
	thiefsCase = yourCase; // makes thiefsCase variable the same as yourCase value
	yourCase = temp; // makes yourCase variable the same as what you previously stored in temp (which is the original thiefs case value)

	 // The function now exits, and returns nothing. Everything in here is deleted, but because you used a reference as the passed variable the changes made in this function
	// are actually applied to the main functions variables. Kinda cool right? 
}
// printContents function
void printContents(int yourCase, int thiefsCase) // This simply prints out the values, so I didn't need to retype them over and over.
{
	cout << "Your Case: $" << yourCase << endl; // simple cout
	cout << "Thiefs Case: $" << thiefsCase << endl << endl; // simple cout
}

