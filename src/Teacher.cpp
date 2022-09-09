//Mission Marcus
//Teacher.cpp
#include "Teacher.h"
#include <iostream>

void Teacher::paySalary() 
{
	int sum = 0;

	for (Course &c : currentlyTeaching) // get the total sum of the hours.
	{
		
		sum = sum + c.getHours();
	}
	

	balance = balance + (sum * salary); // deduct the sum * salary.
}

void Teacher::endSemester()
{
	for (Course &c : currentlyTeaching)
	{
		Course cNew = Course(c.getName(), c.getHours());
		coursesTaught.push_back(cNew); // move all courses to coursesTaught
	}
	currentlyTeaching.clear(); // clear the current teaching

}


Teacher::Teacher(std::string fName, std::string lName, double s) : Employee(fName, lName, s) // call employee constructor.
{
}

Teacher::~Teacher() // do nothing here because person destructor is called.
{

}

void Teacher::addCourse(Course c) // push back the course onto currently teaching.
{
	currentlyTeaching.push_back(c);
}