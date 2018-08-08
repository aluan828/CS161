/************************
** Author: Austin Luan
** Date: 06/27/2018
** Description: Asks the user for five numbers and prints the average 
		of those numbers.
*************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const double FIVE = 5.0;

int main ()
{
	double num1, num2, num3, num4, num5;
	double average;
	
	std::cout << "Please enter five numbers." << endl;

	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	std::cin >> num4;
	std::cin >> num5;

	average = (num1+num2+num3+num4+num5)/FIVE;
	
	std::cout << "The average of those numbers is:" << endl;
	std::cout << average;
	std::cout << endl;

	return 0;
}

