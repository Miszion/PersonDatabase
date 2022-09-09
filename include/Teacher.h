//Mission Marcus
//Teacher.h: This class designs how a teacher (that extends from an employee) operates. It uses the virtual void paySalary from employee.
#pragma once
#include "Employee.h"
#include <vector>
#include "Course.h"

class Teacher : public Employee
{
private:
	std::vector<Course> coursesTaught;
	std::vector<Course> currentlyTeaching;
public:
	void addCourse(Course c); // adds it to the list of currentlyTeaching
	void paySalary();
	void endSemester();
	Teacher(std::string fName, std::string lName, double s);
	~Teacher();
};