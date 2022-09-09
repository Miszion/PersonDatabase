//Mission Marcus
//Course.h: This file declares all the variables for the course class.

#pragma once
#include <string>

class Course
{
private:
	std::string name;
	int creditHours;

public:
	std::string getName();
	int getHours();
	Course(std::string Cname, int hours);
	~Course();
};