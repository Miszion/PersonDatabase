//Mission Marcus
//Student.cpp: this file describes a student.
#include "Student.h"
#include "Course.h"
#include "Person.h"
#include <iostream>

void Student::addCourse(Course c) // add a course to the current courses.
{
	currentCourses.push_back(c);
}



void Student::endSemester()
{
	for (Course  &c : currentCourses)
	{
		Course cNew = Course(c.getName(), c.getHours());
		coursesTaken.push_back(cNew); // move all courses to the coursesTaken
	}
	currentCourses.clear(); // clear the current Courses.

}

Student::collegeLevel Student::grade()
{
	int totalHours = 0;

	for (Course &c : coursesTaken) // calculate total hours.
	{
		totalHours = totalHours + c.getHours();
	}

	if (totalHours <= 30) // if less than or equal to 30
	{
		return freshman;
	}
	else if (totalHours > 30 && totalHours <= 60) // more than 30 but less than or equal to 60..
	{
		return sophomore;
	}
	else if (totalHours > 60 && totalHours <= 90) // more than 60 but less than or equal to 90..
	{
		return junior;
	}
	else
		return senior;

}

std::string Student::enumToString() // convert the enum to string
{
	collegeLevel enu = grade();

		if (enu == freshman)
		{
			return "Freshman";
		}
		else if (enu == sophomore)
		{
			return "Sophomore";
		}
		else if (enu == junior)
		{
			return "Junior";
		}
		else
		{
			return "senior";
		}
	
}


void Student::payTuition(double pricePerHour) //deduct the tuition from the balance.
{
	double sum = 0;

	for (Course & c : currentCourses)
	{
		sum = sum + (c.getHours() * pricePerHour);
	}
	balance = balance - sum;

}

Student::Student(std::string fName, std::string lName) : Person(fName, lName) // just call the super constructor.
{
}

Student:: ~Student() // do nothing here because parent destructor is called.
{
	
}