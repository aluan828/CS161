/**********************************
 * 	Name: Austin Luan
 * 	Date: 07/02/2018
 * 	Description: The program will prompt the user to try 
 * 	             to a guess a number. If the player's guess is too high
 * 	             or too low, the program will tell them. It will display
 * 	             how many guesses it took for 
 * 	             the user to get the right number.
************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
	int user_number;
	int user_guess;
	int correct = 0 ;
	int guess_counter = 0;

	cout << "Enter the number for the player to guess." << endl;
	cin >> user_number;
	cout << "Enter your guess." << endl;
	cin >> user_guess; 

	do
	{
		if (user_guess < user_number)
		{
			cout << "Too low - try again." << endl;
			guess_counter++;
			cin >> user_guess;
		}
		else if (user_guess > user_number)
		{
			cout << "Too high - try again." << endl;	
			guess_counter++;
			cin >> user_guess;
		}
		else
		{
			correct = 1;
			guess_counter++;
		}
	
	} while (correct == 0);

	cout << "You guessed it in " << guess_counter << " tries." << endl;


	return 0;
}
