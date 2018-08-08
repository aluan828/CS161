// Author: Austin Luan
// Date: 07/23/2018
// Description: Person.cpp is the person class implementation file

#include "Person.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// Person class that takes name and age

Person::Person(string n, double a)
{
	name = n;
	age = a;
}

double Person::getAge()
{
	return age;
}

string Person::getName()
{
	return name;
}

void Person::printInfo()
{
	cout << name << " " << age << endl;
} 
