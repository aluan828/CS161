/*******************************
 Name: Austin Luan
 Date: 6/27/2018
 Description: Asks the user for an integer number of cents and 
	      outputs how many of each type of coinc would represent that
	      amount with the fewest total number of coins.
*******************************/

#include <iostream>


using std::cout;
using std::cin;
using std::endl;

const int quarter_value = 25;
const int dime_value = 10;
const int nickel_value = 5;
const int penny_value = 1; 

int main ()
{
	int cents, quarters, dimes, nickels, pennies, remainder;
	
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> cents;
	
	quarters = cents / quarter_value;
	remainder = cents % quarter_value;
	
	dimes = remainder / dime_value;
	remainder = remainder % dime_value;

	nickels = remainder / nickel_value;
	remainder = remainder % nickel_value;
	
	pennies = remainder / penny_value;
	
	cout << "Your change will be:" << endl;	
	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickels << endl;
	cout << "P: " << pennies;
	cout << endl;

	return 0; 	
}	
