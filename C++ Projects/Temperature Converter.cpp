/* 
 Title: Temperature Converter
 Date: 2026-01-15
 Author: Amy Forde
 Version: 1.0
*/

/*
DOCUMENTATION

Program Purpose: The program will accept as input a temperature and whether that temperature is
Fahrenheit or Celsius. It will then convert F to C or C to F and print the answer to the screen.
The program will ask if another conversion is desired, loop if it is and end if it is not.
		

Classes: none
Variables:
	temp - Temperature double
	f - Fahrenheit double
	c - Celsius double
	unit - F/C string
	repeat - Y/N string
	
*/

/*
TEST PLAN

Normal case: 
		> Correct values are inputted (doubles, strings) and the program completes the conversion
		accurately. Alternatively, if an incorrect input is submitted, the program prints an error
		message and loops back to the input request.

Bad data case 1: 
		> Incorrect input types are entered and program ends abruptly instead of looping.
	 
Bad data case 2:
		> Calculations are incorrect and values are wrong.
		
Bad data case 3:
		> Some parts loop while others cause the program to end abruptly.

Discussion: The first major issue when testing was that the program abruptly ended if an invalid input
was entered. This was solved by creating a loop that loops back to the question after an invalid input
allowing the user to continue. This posed a challenge because one input expects a number and the other,
a string. Using an outside source (https://www.geeksforgeeks.org/cpp/how-to-handle-wrong-data-type-input-in-cpp/)
I utilized cin.fail, cin.clear and cin.ignore to handle incorrect data type input for string input.
		
*/

#include <iostream> //input output stream declaration
#include <string> //string declaration 
using namespace std; //simplifies code as we don't need to type std:: before each cout or cin

	int main() {
		double temp, f, c; //variable declaration 
		string unit, repeat;
		
		cout << "This program converts Temperatures from Fahrenheit to Celsius and vice versa.\n";
		
		do {
			while (true) { //while loops allow the program to repeat a question after invalid input
				cout << "Please enter your temperature: ";
				cin >> temp;
			
				//handles invalid input for temp, if string is inputted instead of number	
				if (cin.fail()) {
					cin.clear();            
					cin.ignore(1000, '\n'); 
					//I wanted the limit to be any double, but that is currently beyond my scope
					cout << "Invalid input. Try again.\n";               
				} else {
					cin.ignore(1000, '\n');
					break; //ends loop
			}
		}
			
			while (true) {
				cout << "Please enter the units (F/C): ";
				cin >> unit;
		
				if (unit == "F" || unit == "f") {
					c = (temp - 32) * 5 / 9;
					cout << "A temperature of " << temp << " degrees Fahrenheit is equivalent to " << c << " degrees Celsius.\n";
					break;
				}
				else if (unit == "C" || unit == "c") {
					f = (temp * 9 / 5) + 32;
					cout << "A temperature of " << temp << " degrees Celsius is equivalent to " << f << " degrees Fahrenheit.\n";
					break;
				}
			//handles invalid input for unit
			else {
				cout << "Invalid input. Try again.\n"; 
			}
		}
		
			while (true) {
				cout << "Do you want another conversion? (Y/N): ";
				cin >> repeat;
		
			//handles an invalid input for Y/N
				if (repeat == "Y" || repeat == "y" || repeat == "N" || repeat == "n") {
					break;
				}
			else {	
				cout << "Invalid input.\n";
			}
		}
		
	} while (repeat == "Y" || repeat == "y"); //loops the program if another conversion is required
			
	cout << "Thank you. Goodbye.\n"; //ends the program with message if another conversion is not required
		
	return 0;
		
	}


