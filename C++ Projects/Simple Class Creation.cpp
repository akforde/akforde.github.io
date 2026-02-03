/* 
 Title: Simple Class Creation
 Description: 
 Date: 2026-01-30
 Author: Amy Forde
 Version: 1.0
*/

/*
DOCUMENTATION

Program Purpose:
		Construct a parent class and several child classes.
		

Classes: 
	Animal(parent)
	Sheep (child) 
	Pig (child)
	Cow (child)
	Duck (child)
	AnimalTest (test)
Variables:
	animalType (string)
	p = Pig child class
	s = Sheep child class
	d = Duck child class
	c = Cow child class

*/

/*
TEST PLAN

Normal case: 
		>The program will accept input and output the appropriate text. If the input is
		"sheep" the output will be "sheep says Baa!"

Bad data case 1: 
		>
	 
Bad data case 2:
		>

Discussion:
		
*/

#include <iostream> 
#include <string>
#include <vector>
using namespace std; 

class Animal {

public: //ensures that the parent class Animal can be accessed to create child classes
	Animal() {
		cout << "I am an animal." << endl;
	}
	
	virtual void sound() { //virtual allows polymorphism, void means the function does not return a value
		cout << "An animal makes a sound based on the animal that it is." << endl;
	}
	
	    virtual ~Animal() {} //destructor
	
}; //semicolon required to end a class definition

	class Pig : public Animal { //creates a new class that inherits from Animal keeping public status
	public: //ensures child class can be accessed from outside the class
	Pig() { // constructor (called when an instantiation of a class is created)
		cout << "I am a pig." << endl;
	}
	
	void sound() override { //override the sound() method from parent class to print Oink instead
		cout << "Oink!" << endl; //replaces generic output from parent class Animal
	}

};

	class Sheep : public Animal {
	public:
	Sheep() {
		cout << "I am a sheep." << endl;
	}
	
	void sound() override {
		cout << "Baa!" << endl;
	}
	
};
	
	class Duck : public Animal {
	public:
	Duck() {
		cout << "I am a duck." << endl;
	}
	
	void sound() override {
		cout << "Quack!" << endl;
	}
	
};

	class Cow : public Animal {
	public:
	Cow() {
		cout << "I am a cow." << endl;
	}
	
	void sound() override {
		cout << "Moo!" << endl;
	}
	
};

class AnimalTest { //class to accept and translate input from CLI to create child class
public:
    void run() {
		
		while (true) { //loops to ask again so all animals can be tested
		
        string animalType; //variable declaration 
		
        cout << "Enter animal type - pig, sheep, duck, cow or exit to quit: "; //request input
        cin >> animalType; //assigns input to animalType variable 
		
		  if (animalType == "exit") {
                cout << "Goodbye" << endl;
                break;  //exit the loop if user types exit
            }
        
        if (animalType == "pig") { //translates input to requested child class
            Pig p;
			p.sound();
        } else if (animalType == "sheep") {
            Sheep s;
			s.sound();
        } else if (animalType == "duck") {
            Duck d;
			d.sound();
        } else if (animalType == "cow") {
            Cow c;
			c.sound();
        } else {
            cout << "Unknown input. Please type pig, sheep, duck, cow or exit!" << endl;
            return;
        }
	}
		}
	
};

int main() {
	
    Pig p;
    Sheep s;
    Duck d;
    Cow c;

    p.sound(); //variable pointer to connect the child class with the sound() method
    s.sound();
    d.sound();
    c.sound();
	
	AnimalTest animalTest;
	animalTest.run();

    return 0;
}


