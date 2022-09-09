//Mission Marcus
// Student.h: This class declares variables for the student class.

#pragma once
#include "Person.h"
#include <vector>
#include "Course.h"

class Student: public Person
{
private:
	std::vector<Course>coursesTaken;
	std::vector<Course>currentCourses;

public:
	void addCourse(Course c); // adds to current schedule
	void endSemester(); // moves ALL courses from current to taken.
	 collegeLevel grade();
	void payTuition(double pricePerHour); // subtract pricePerHour * creditHours from Accbalance
	std::string enumToString();
	Student(std::string fName, std::string lName);
	~Student();

};