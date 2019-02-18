//Mission Marcus

#include "Course.h"

int Course::getHours()
{
	return creditHours; // simple getter function
}

std::string Course::getName()
{
	return name;
}

Course::Course(std::string Cname, int hours) // instantiates course with a name and credit hours.
{
	name = Cname;
	creditHours = hours;
}

Course:: ~Course()
{
	//doesn't do anything because courses aren't being counted.
}