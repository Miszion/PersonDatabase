//Mission Marcus
// Person.cpp : This file contains basic functionality for the person class.
//
#pragma
//Mission Marcus
//Person.cpp: This describes the person file.
#include "Person.h"
#include <iostream>
#include <vector>


int Person::population = 0; // static variables class name and population
std::string Person::className = "Person";


void Person:: sayName() // says the name of the character
{
	std::cout << firstName << " " << lastName;
}

int Person::getUIN() // grab the uin.
{
	return UIN;
}

std::string Person::getName() // get the fullName
{
	return firstName + " " + lastName;
}


void Person::incrementPop() // increment population as needed.
{
	population++;
}

double Person::getBalance() // return the balance
{
	return balance;
}

Person::Person(std::string fN, std::string lN) // standard person constructor
{
	
	firstName = fN;
	lastName = lN;
	population++;
	balance = 0.0;
	UIN = 0;
}

std::string Person::getLastName()
{
	return lastName;
}

Person::Person() // default constructor
{
	firstName = "Mission";
	lastName = "Marcus";
	population++;
	balance = 0.0;
	UIN = 0;
}

void Person::changeName(std::string changed) // change the name
{
	className = changed;
}

Person::~Person() //deconstructor.
{
	population--;
	
}

Person::Person(Person && other):firstName(std::move(other.firstName)), lastName(std::move(other.lastName)), balance(std::move(other.balance)) // move constructor
{
	population++;
	UIN = 0;
}

Person &Person::operator=(Person &&other) // operator method to set first name and last name.
{
	firstName = std::move(other.firstName);
	lastName = std::move(other.lastName);
	balance = std::move(other.balance);
	UIN = 0;
	return *this;
}




Person::Person(const Person &pers) // copy constructor
{
		population++;

		firstName = pers.firstName;
		lastName = pers.lastName;
		balance = pers.balance;
		UIN = 0;

}

int Person::totalPopulation() // return the population
{
	return population;
}



