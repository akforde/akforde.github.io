/* 
 Title: Assignment1Question1.cpp
 Description: Problem 1 of Assignment 1
 Date: 2026-01-14
 Author: Amy Forde
 Version: 1.0
*/

/*
DOCUMENTATION

Program Purpose:
		Generate a 12x table.
		
Compile: g++ Assignment1Question1.cpp -o prob1
Execution: ./prob1

Classes: none
Variables:
	i - incrementing integer
	j - incrementing integer
	k - value of i * j
*/

/*
TEST PLAN

Normal case: 
		>Output will match assignment output with the same values and correct table formatting.

Bad data case 1: 
		>Output values do not match the assignment output.
	 
Bad data case 2:
		>Output table formatting does not match the assignment output.

Discussion:
		The nested for loops should establish a column header and a row header, followed by a table
		of values based on multiplying the column value by the row value. Additionally, the formatting
		of the output must match the example exactly. While calculating the values is simple, the formatting 
		is the trickiest part of this problem.
*/

#include <iostream> //input output stream declaration
using namespace std; //simplifies code as we don't need to type std:: before each cout or cin

	int main() {
		int i, j, k; //variable declaration, 3 variables required for top line, side line and values
		
		cout << "    | ";
		for (i = 1; i <= 12; i++) {
			if (i < 10)
				cout << "  " << i << "| ";
			else
				cout << " " << i << "| ";
		}
		cout << endl;		
		//establishes the header (row) format and values 1 - 12
		
		for (i = 1; i <= 12; i++) {
			if (i < 10)
				cout << "   " << i << "| ";
			else
				cout << "  " << i << "| ";
				//establishes the column header row format and values 1 - 12
				//no end line needed here since it is a column not a row
			
			for (j = 1; j<= 12; j++) {
				k = i * j;
				//calculates the values that will fill the table
				if (k < 10)
					cout << "  " << k << "| ";
				else if (k >= 10 and k < 100)
					cout << " " << k << "| ";
				else
					cout << k << "| ";
				//ensures the table format and spacing is correct with conditionals
			}
			cout << endl;
		}
		
		return 0; //exit code
	}
	

	
