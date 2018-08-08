/************************************
 * Name: Austin Luan
 * Date: 07/09/2018
 * Description: This program will have a function that uses the distance formula
 * 		to determine how far a distance of an object
 * 		 falls due to gravity.
************************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double fallDistance(double time);

/*int main ()
{
	double userInput;
	double output;
	
	cout << "Enter time: " << endl;
	cin >> userInput;

	output = fallDistance(userInput);

	cout << output << endl;
	
	return 0;
}*/

double fallDistance (double time)
{
	double distance;
	
	distance = 0.5*9.8*time*time;

	return distance;
}


