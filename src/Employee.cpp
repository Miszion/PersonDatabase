//Mission Marcus

#include "Employee.h"

void Employee::paySalary()
{
	balance = balance + salary; // simple adding salary to the balance for a base employee.
}


Employee::Employee(std::string fName, std::string lName, double s) : Person(fName, lName)
{
	salary = s; // instantiates salary. calls super constructor for the person class.
}