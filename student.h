/*
 * Student.h
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

class Student {
public:
	//sets m_name to input string parameter, if parameter isn't given name is an empty string
	Student(std::string name = "");

	//empty destructor, doesn't need to do anything
	virtual ~Student();

	//accessor and mutator for m_name
	void set_name(std::string name){m_name = name;}
	std::string name(void) const {return m_name;}

private:
	std::string m_name;
};
