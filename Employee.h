//Mission Marcus
//Employee.h: This class is the subclass of a person, which paysSalary. 

#pragma once
#include "Person.h"

class Employee : public Person
{

public:
	virtual void paySalary();
	Employee(std::string fName, std::string lName, double  s);

protected:
	double salary;
};