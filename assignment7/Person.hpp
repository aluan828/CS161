// Author: Austin Luan
// Date: 07/23/2018
// Description: This is the Person class specification file

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

// Person Class declaration

class Person
{
	private:
		std::string name;
		double age;
	public:
		Person(std::string, double);
		std::string getName();
		double getAge();
		void printInfo();
};

#endif
