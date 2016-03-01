/*
 * GradStudent.h
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

//class GradStudent derived from Student
class GradStudent : public Student
{
public:
	//string parameter to initialize base class
	GradStudent(std::string name, std::string r_area = "");

	//empty destructor, doesn't need to do anything
	~GradStudent();

	//accessor and mutator for m_research_area
	void set_research_area(std::string r_area){m_research_area = r_area;}
	std::string research_area(void){return m_research_area;}

private:
	//contains user input research area
	std::string m_research_area;

};

