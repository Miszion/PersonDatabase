#include "Person.h"
#include "Employee.h"
#include "Course.h"
#include "Student.h"
#include "Teacher.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

//Mission Marcus
//Main.cpp

bool sortingFunc( Course & c, Course &d) // this sorting function sorts the course names in order.
{
	return c.getName() < d.getName();
}

bool sortingFunc2(Person & p, Person & p2) // this sorting function sorts the People in order.
{
	return p.getLastName() < p2.getLastName();
}



int main()
{
	std::vector<Student> listOfStudents; // we have 5 vectors for the different people types and class, along with a master Array.
	std::vector<Teacher> listOfTeachers;
	std::vector<Course> listOfCourses;
	std::vector<Employee> listOfEmployees;
	std::vector<Person> masterArray;

	std::cout << Person::totalPopulation() << "\n"; // output total


	listOfStudents.push_back(Student("Allison", "Doe")); // push back courses and student
	listOfCourses.push_back(Course ("CS 100", 1));
	listOfCourses.push_back(Course ("CS 474", 3));

	listOfStudents[0].addCourse(listOfCourses[0]); // give allison cs1000

	listOfTeachers.push_back(Teacher("Jennifer", "Lawrence", 20000)); // push a teacher back
	
	listOfTeachers[0].addCourse(listOfCourses[1]); //let jennifer teach cs 474

	std::cout << Person::totalPopulation() << "\n"; //output people again.

	for (Student &stu : listOfStudents) //have students all pay tuition of 10000 and end semester
	{
		stu.payTuition(10000);
		stu.endSemester();
	}

	for (Teacher &teach : listOfTeachers) // pay teachers salary and end semester.
	{
		teach.paySalary();
		teach.endSemester();
	}

	

	
	std::string loop; // have a loop string


	std::cout << "What operation would you like to perform(0 for help)? ";
	
	getline(std::cin, loop);

	int loopValue = stoi(loop); // convert loop string to value

	while (loopValue != -1)
	{
	
		if (loopValue == 0)
		{
			std::cout << "\n1. Create a new Student.\n";
			std::cout << "2. Create a new Employee.\n";
			std::cout << "3. Create a new Teacher.\n";
			std::cout << "4. Create a new Course.\n";
			std::cout << "5. Enroll a student in a course.\n";
			std::cout << "6. Assign a teacher to a course.\n";
			std::cout << "7. Output the total number of people in the database.\n";
			std::cout << "8. Output the names of each of the courses.\n";
			std::cout << "9. Charge tuition for all students.\n";
			std::cout << "10. Pay Salary to all Employees.\n";
			std::cout << "11. End the semester for all students and teachers.\n";
			std::cout << "12. Output the balance for a specific person.\n";

				
		}
		else if (loopValue == 1) // creating new Student
		{
			std::string fName;
			std::string lName;
			std::cout << "What is the student's first name? ";
			getline(std::cin, fName);
			std::cout << "What is the student's last name? ";
			getline(std::cin, lName);
			listOfStudents.push_back(Student(fName, lName)); // push student back

	

		}
		else if (loopValue == 7) // listing population
		{
			std::cout << Person::totalPopulation() << "\n";

			for (Student & stu : listOfStudents) // push all types of people back into masterArray
			{
				masterArray.push_back(stu);
			}
			for (Employee & emp : listOfEmployees)
			{
				masterArray.push_back(emp);
			}
			for (Teacher & teach : listOfTeachers)
			{
				masterArray.push_back(teach);
			}

			std::sort(masterArray.begin(), masterArray.end(), sortingFunc2); // sort with the sortingfunction i described above.

			for (Person & pers : masterArray)
			{
				pers.sayName(); // say the name of each person
				std::cout << "\n"; 

			}

			masterArray.clear(); // clear the master array to be able to use it once again.


		}
		else if (loopValue == 2)
		{
			std::string fName;
			std::string lName;
			std::string salary;
			std::cout << "What is the Employee's first name? ";
			getline(std::cin, fName);
			std::cout << "What is the Employee's last name? ";
			getline(std::cin, lName);
			std::cout << "What is the Employee's Salary? ";
			getline(std::cin, salary);

			if (stoi(salary) < 0)
			{
				std::cout << "Salary cannot be negative\n";
			}
			else
			{
				listOfEmployees.push_back(Employee(fName, lName, stoi(salary))); // we push back the employee if its valid.
			}
		}
		else if (loopValue == 3)
		{
			std::string fName;
			std::string lName;
			std::string salary;
			std::cout << "What is the Teacher's first name? ";
			getline(std::cin, fName);
			std::cout << "What is the Teacher's last name? ";
			getline(std::cin, lName);
			std::cout << "What is the Teacher's Salary? ";
			getline(std::cin, salary); 

			if (stoi(salary) < 0)
			{
				std::cout << "Salary cannot be negative\n";
			}
			else
			{
				listOfTeachers.push_back(Teacher(fName, lName, stoi(salary))); // push back the teacher if salary is valid.
			}
		}
		else if (loopValue == 4)
		{
			std::string name;
			std::string hours;

			std::cout << "What is the course title? ";
			getline(std::cin, name);

			std::cout << "How many hours is it? ";
			getline(std::cin, hours);

			if (stoi(hours) < 0)
			{
				std::cout << "Courses cannot have negative academic hours.\n"; // if the hours are -.
			}
			else
			{
				listOfCourses.push_back(Course(name, stoi(hours))); // we push back the courses.
			}

		}
		else if (loopValue == 5)
		{
			std::string nameOfStudent;
			std::string nameOfCourse;

			std::cout << "Which student is enrolling? ";
			getline(std::cin, nameOfStudent);
			std::cout << "What course are they enrolling in? ";
			getline(std::cin, nameOfCourse);

			bool studentFound = false;
			bool courseFound = false;

			for (Student & stu : listOfStudents) // for all the students
			{
				if (stu.getName().compare(nameOfStudent) == 0) // if the student is found.
				{
					studentFound = true;

					for (Course &c : listOfCourses)
					{
						if (c.getName().compare(nameOfCourse) == 0) // if the name is found
						{
							courseFound = true;
							stu.addCourse(c); // add the student to the course.
						}
					}
				}
			}

			if (studentFound && !courseFound) // if the course isnt found..
			{
				std::cout << "Course could not be found.\n";
			}
			else if (!studentFound) //if the student isnt found..
			{
				std::cout << "Student could not be found.\n";
			}


		}
		else if (loopValue == 6)
		{
			std::string nameOfTeacher;
			std::string nameOfCourse;

			std::cout << "Which Teacher will be assigned? ";
			getline(std::cin, nameOfTeacher);
			std::cout << "What course are they assigned to? ";
			getline(std::cin, nameOfCourse);

			bool teacherFound = false;
			bool courseFound = false;

			for (Teacher & teach : listOfTeachers)
			{
				if (teach.getName().compare(nameOfTeacher) == 0) //if the teacher is found
				{
					teacherFound = true;

					for (Course &c : listOfCourses)
					{
						if (c.getName().compare(nameOfCourse) == 0)
						{
							courseFound = true; // if the course is found, add it to the course.
							teach.addCourse(c);
						}
					}
				}
			}

			if (teacherFound && !courseFound) // if teacher is found but course isnt.
			{
				std::cout << "Course could not be found.\n";
			}
			else if (!teacherFound) // if not, 
			{
				std::cout << "Teacher could not be found.\n";
			}


		}

		else if (loopValue == 8)
		{
			std::sort(listOfCourses.begin(), listOfCourses.end(), sortingFunc); // sort all the courses.

			for (Course & c : listOfCourses) // sort the courses by name.
			{
				std::cout << c.getName() << "\n";

			}
		}
		else if (loopValue == 9)
		{
			std::string tuition;
			std::cout << "How much is tuition? ";
			getline(std::cin, tuition);
			int charged = stoi(tuition);

			bool correctInput = false;

			if (charged < 0) // if the number entered is less than 0.
			{
				std::cout << "Tuiton cannot be negative.\n";
			}
			
			else
			{
				for (Student & stu : listOfStudents) // charge all students the tuition.
				{
					stu.payTuition(charged);
				}
			}
		}
		else if (loopValue == 10) // charge all the employees salary
		{
			for (Employee &emp : listOfEmployees)
			{
				emp.paySalary();

			}
			for (Teacher &teacher : listOfTeachers) // charge all the teachers salary
			{
				teacher.paySalary();
			}
		}
		else if (loopValue == 11)
		{
			for (Teacher &teacher : listOfTeachers) // end semester for teachers
			{
				teacher.endSemester();
			}
			for (Student &students : listOfStudents) // end semester for students.
			{
				students.endSemester();
			}
		}
		else if (loopValue == 12)
		{
			std::string name;
			std::cout << "Whose balance would you like to check? ";
			getline(std::cin, name);
			
			bool personFound = false;

			for (Student & stu : listOfStudents)
			{
				if (stu.getName().compare(name) == 0) // if student is found..
				{
					std::cout << stu.getName() << "'s balance is " << stu.getBalance() <<"\n";
					personFound = true;
					break;
				}
			}

			if (!personFound) // if a student hasnt been found yet.. 
			{
				for (Employee & emp : listOfEmployees)
				{
					if (emp.getName().compare(name) == 0) // if the employee is found..
					{
						std::cout << emp.getName() << "'s balance is " << emp.getBalance() << "\n";
						personFound = true;
						break;
					}
				}
			}
			if (!personFound) // if a person wasnt found yet..
			{
				for (Teacher & teach : listOfTeachers) // try checking the teachers
				{
					if (teach.getName().compare(name) == 0) // if a teacher is found..
					{
						std::cout << teach.getName() << "'s balance is " << teach.getBalance() << "\n";
						personFound = true;
						break;
					}
				}
			}

			if (!personFound) // if never found..
			{
				std::cout << "Person does not exist in this database.\n";
			}


		}
		
		
		
		std::cout << "What operation would you like to perform(0 for help)? "; // re print prompt.
		
		getline(std::cin, loop);

		 loopValue = stoi(loop); // reset the loopvalue.

	}
	std::cout << "Goodbye"; // print goodbye after.

}