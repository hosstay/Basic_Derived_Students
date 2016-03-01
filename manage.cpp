/*
 * manage.cpp
 *
 *  Created on: Feb 29, 2016
 *      Author: Taylor Hoss, X432Z869
 *  Assignment: 2
 *
 *  Description: A C++ program that implements a Student base class
 *  and two derived classes, GradStudent and UndergradStudent.
 *  GradStudent and UndergradStudent have their own variables and
 *  functions, but both make use of the name functionality originally
 *  created in the base class. The manage file runs through all the
 *  test cases of the various classes
 *
 */

#ifndef STUDENT_H_
#define STUDENT_H_
	#include "student.h"
#endif /* STUDENT_H_ */

#ifndef GRADSTUDENT_H_
#define GRADSTUDENT_H_
	#include "gradstudent.h"
#endif /* GRADSTUDENT_H_ */

#ifndef UNDERGRADSTUDENT_H_
#define UNDERGRADSTUDENT_H_
	#include "undergradstudent.h"
#endif /* UNDERGRADSTUDENT_H_ */

#ifndef IOSTREAM_
#define IOSTREAM_
	#include <iostream>
#endif /* IOSTREAM_ */

#ifndef STRING_
#define STRING_
	#include <string>
#endif /* STRING_ */

int main(void)
{

	//student test cases
	std::cout << "Student Test:\n";
	Student Regstudent("Jim");
	std::cout << "\nStudent name before change:\n";
   std::cout << Regstudent.name();
	Regstudent.set_name("Jeremy");
	std::cout << "\n\nStudent name after change:\n";
	std::cout << Regstudent.name();
	std::cout << "\n\n\n";

	//undergraduate student test cases
	std::cout << "Undergraduate student Test:\n";
	UndergradStudent Ugstudent("Taylor");
	std::cout << "\nList when created:\n";
	Ugstudent.print_class_list();
	Ugstudent.add_class("Data Structures");
	std::cout << "\nList after adding first class:\n";
	Ugstudent.print_class_list();
	Ugstudent.add_class("OOP");
	std::cout << "\nList after adding second class:\n";
	Ugstudent.print_class_list();
	std::cout << "\nStudent name before change:\n";
	std::cout << Ugstudent.name();
	Ugstudent.set_name("Thomas");
	std::cout << "\n\nStudent name after change:\n";
	std::cout << Ugstudent.name();
	std::cout << "\n\n\n";

	//graduate student test cases using pointer
	std::cout << "Graduate student Test:\n";

   //dynamically allocating GradStudent object
	GradStudent *Gstudent = new GradStudent ("Danny", "Artificial Intelligence");

	std::cout << "\nResearch area when created:\n";
	std::cout << Gstudent->research_area();
	Gstudent->set_research_area("Cyber Security");
	std::cout << "\n\nResearch area after change:\n";
	std::cout << Gstudent->research_area();
	std::cout << "\n\nStudent name before change:\n";
	std::cout << Gstudent->name();
	Gstudent->set_name("Derek");
	std::cout << "\n\nStudent name after change:\n";
	std::cout << Gstudent->name();

   //deleting the dynamically allocated object
	delete Gstudent;


}
