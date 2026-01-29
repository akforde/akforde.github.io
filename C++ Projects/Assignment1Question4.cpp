/* 
 Title: Assignment1Question4.cpp
 Description: Problem 4 of Assignment 1
 Date: 2026-01-16
 Author: Amy Forde
 Version: 1.0
*/

/*
DOCUMENTATION

Program Purpose: Create an interactive help system for C++ programming. The system will incorporate 
a menu system that interacts with the user, and the appropriate help topic will be displayed, based 
on an input selection.
		
		
Compile: g++ Assignment1Question4.cpp -o prob4
Execution: ./prob4

Classes: none
Variables:
	  int select - user selection input
	
*/

/*
TEST PLAN

Normal case: 
		> Menu outputs as shown in assignment. Menu allows an input, displays the appropriate definition and
		then loops back to the menu. Program exits if an input other than 1 - 5 is entered.

Bad data case 1: 
		> Menu does not loop and exits instead after each selection.
	 
Bad data case 2:
		> Incorrect definitions are displayed.
		
Bad data case 3:
		> The program loops continuously with no exit.

Discussion: Use of a do-while loop combined with a switch solved the failed test cases.
		
*/

#include <iostream> //input output stream declaration
using namespace std; //simplifies code as we don't need to type std:: before each cout or cin

int main() {
	
	int select; //declaration of variable
	
	//a do-while loop ensures that the help menu loops until user exits
	do {
		cout << "C++ Help Menu\n" << "Select Help on:\n" << "1. If\n" << "2. Switch\n" << "3. For\n"
		<< "4. While\n" << "5. Do-While\n" << "x. Exit\n"; //menu output
		cin >> select; //user input
	
		switch (select) {
			case 1:
				cout << "If: The If statement decides if a block of code will be executed based on established conditions.";
				break;
			case 2:
				cout << "Switch: The Switch statement is a cleaner alternative to a lengthy if, if-else, else block. It runs a block of code based on a selection of several options.";
				break;
			case 3:
				cout << "For: The For statement can execute a block of code over and over again for a fixed number of iterations.";
				break;
			case 4:
				cout << "While: The While loop executes a block of code as long as a certain condition remains true.";
				break;
			case 5:
				cout << "Do-While: The Do-While loop executes a block of code once and repeats as long as a certain condition remains true. Similiar to the while loop, except this will always execute at least once."; 
				break;
			default: //x was not a case option, default works as expected
				cout << "Thank you. Good bye.";
		}
	
	//while condition reflects options 1 - 5
	} while (select >= 1 && select <= 5);
	
	return 0;

}