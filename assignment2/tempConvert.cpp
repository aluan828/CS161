/****************************
** Name: Austin Luan
** Date: 6/27/2018
** Description: A program that converts Celsius temperatures
		to Fahrenheit temperatures
****************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
	double celsius_temp;
	double fah_temp;

	std::cout << "Please enter a Celsius temperature." << endl;
	std::cin >> celsius_temp;
	
	fah_temp = 1.8 * celsius_temp + 32.0; 
	
	std::cout << "The equivalent Fahrenheit temperature is:" << endl;
	std::cout << fah_temp << endl;

	return 0;
}

