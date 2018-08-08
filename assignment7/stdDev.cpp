// Author: Austin Luan
// Date: 07/23/2018
// Description: This is the stdDev.cpp file that has the function
// 		to return the standard deviation of an array of the
// 		Person class.

#include <iostream>
#include "Person.hpp"
#include <string>
#include <cmath>

double stdDev(Person person[],int size);

using std::cout;
using std::string;
using std::endl;

//const int SIZE = 2;

/*int main ()
{
	double deviation;
	
	Person per[SIZE] = {Person("Austin",92), Person("Marvin",77) };
			
	per[0].printInfo();
	per[1].printInfo();
	
	deviation = stdDev(per,SIZE);

	cout << deviation << endl;
		
	return 0;
}*/

// Function to determine the population standard deviation
double stdDev(Person person[], int size)
{
	double deviation;
	double total = 0;
	double personAge;
	double totalPersonSquared = 0;
	double personAgeSquared;
	double mean;	
	
	// for loop to determine the sum of the ages
	for(int i=0;i<size;i++)
	{
		personAge = person[i].getAge();
		total += personAge;
	}
	
	//gives the average of the age
	mean = total/size;

	for(int i=0;i<size;i++)
	{
		personAge = person[i].getAge();
		
		//take the square of the difference between the person's age and the mean
		personAgeSquared = pow(personAge-mean,2.0);
		
		//sum of the square of the difference between the person's age and the mean
		totalPersonSquared += personAgeSquared;   
	}	
	
	//take the square root of the sum of the squares divided by the number of persons
	deviation = sqrt(totalPersonSquared/size);
	
	return deviation;
}
