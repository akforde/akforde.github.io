/* 
 Title: Assignment1Question3.cpp
 Description: Problem 3 of Assignment 1
 Date: 2026-01-15
 Author: Amy Forde
 Version: 1.0
*/

/*
DOCUMENTATION

Program Purpose: Generate a table that shows the conversions of C to F and F to C for 100 lines
that increment by 5. No input is required.
		
		
Compile: g++ Assignment1Question3.cpp -o prob3
Execution: ./prob3

Classes: none
Variables:
	double f - temp in Fahrenheit
	double c - temp in Celsius
	int i - incremental  
	
*/

/*
TEST PLAN

Normal case: 
		> Table outputs to match the assignment table exactly.

Bad data case 1: 
		> Table formatting is incorrect. All numbers appear in a single column.
	 
Bad data case 2:
		> Table formatting is incorrect. Spacing and alignment do not match assignment table.
		
Bad data case 3:
		> The table values are incorrect due to incorrect formula syntax.

Bad data case 4:
		> The table values do not show the decimal to three place.

Discussion: Incorrect table formatting was the major reason that my test cases failed. It took a lot of
trial and error to get this right. I used an external source to solve the formatting issue so some of 
this code is based on code from: https://www.geeksforgeeks.org/cpp/setw-function-in-cpp-with-examples/ 
Additionally, I introduced <iomanip> to solve the problem of the numbers not displaying to three
decimal places. That code is based on code from: 
https://www.geeksforgeeks.org/cpp/iomanip-setprecision-function-in-c-with-examples/
		
*/

#include <iostream> //input output stream declaration
#include <iomanip> //needed to format numbers with decimal places
using namespace std; //simplifies code as we don't need to type std:: before each cout or cin

int main() {
    double f, c; //declaration of variables
	
	//formatting the table header to match the assignment output
    cout << setw(20) << "Temperature   " << " |" << setw(20) << "Temperature  \n";
    cout << setw(20) << "(degrees)    " << " |" << setw(20) << "(degrees)  \n";
	cout << setw(10) << "F  " << setw(10) << "C  " << " |" << setw(10) << "C  " << setw(10) << "F  \n";

	//setting doubles to fixed-point - show to 3 decimal places - using iomanip
    cout << fixed << setprecision(3);
	
	//set both F and C to -40
    f = -40.00;
    c = -40.00;

	//using setw for formatting, variables and formulas to fill in table values for 100 lines
    for (int i = 0; i < 100; i++) {
        cout << setw(10) << f << setw(10) << (f - 32) * 5 / 9 << " |" << setw(10) << c << setw(10) 
		<< (c * 9 / 5 + 32) << endl;

		//increment variables by 5
        f += 5;
        c += 5;
    }

    return 0;
}