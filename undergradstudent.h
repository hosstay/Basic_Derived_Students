/*
 * UndergradStudent.h
 *
 *  Created on: Feb 29, 2016
 *      Author: Taylor Hoss, X432Z869
 *  Assignment: 2
 *
 */


#ifndef STRING_
#define STRING_
	#include <string>
#endif /* STRING_ */

#ifndef VECTOR_
#define VECTOR_
	#include <vector>
#endif /* VECTOR_ */

#ifndef STUDENT_H_
#define STUDENT_H_
	#include "student.h"
#endif /* STUDENT_H_ */

//class UndergradStudent derived from Student
class UndergradStudent : public Student
{
public:
	//constructor with string parameter to initialize base class
	UndergradStudent(std::string name);

	//empty destructor, doesn't need to do anything
	~UndergradStudent();

	//prints each string held in m_class vector up to its size
	void print_class_list(void);

	//adds input string to vector list of classes
	void add_class(std::string enrolled);

private:
	//used to hold user input classes enrolled in
	std::vector<std::string> m_class;
};

