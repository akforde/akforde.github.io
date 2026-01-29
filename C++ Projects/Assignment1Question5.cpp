/* 
 Title: Assignment1Question5.cpp
 Description: Problem 5 of Assignment 1
 Date: 2026-01-16
 Author: Amy Forde
 Version: 1.0
*/

/*
DOCUMENTATION

Program Purpose: Calculate and display all the prime numbers from 1 to 10 000.
		
		
Compile: g++ Assignment1Question5.cpp -o prob5
Execution: ./prob5

Classes: none
Variables:
	bool prime - if value is true, it is prime
	int value - values being tested
	int i - incremental variable 
	
*/

/*
TEST PLAN

Normal case: 
		> All prime numbers from 1 to 10 000 are displayed.

Bad data case 1: 
		> Numbers displayed are not prime numbers.

Discussion: Testing each indiviudal outputted number would be inefficient. Instead, I selected smaller
ranges and tested them against a known prime number list. When these came back as matches, I assume
that the rest of the numbers are also correct. On an early trial, the number 1 was displaying even though
it is technically not a prime number. I treated this as an anomaly and excluded it from the range on
subsequent trials. 
		
*/

#include <iostream> //input output stream declaration
using namespace std; //simplifies code as we don't need to type std:: before each cout or cin

int main() {
	
	bool prime; //declaration of variables
	int value, i;
	
	//sets prime to true, increments the values and sets range 2 - 10 000
	for (value = 2; value <= 10000; value++) {
		prime = true;
		
		//this statement eliminates values that are divisible by numbers smaller than the value/2
		for (i = 2; i <= value / 2; i++) {
			//adds a condition using % which sets prime to false if remainder is 0
			if (value % i == 0) {
				prime = false;
				break;
			}
		}
		
		//if the value is a prime number, print to screen
		if (prime) {
			cout << value << endl;
			
		}
	}
	
	return 0;
	
}