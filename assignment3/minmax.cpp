/*****************************************************
	Name: Austin Luan
	Date: 07/02/2018
	Description: This program asks the user how many integers they are entering and determines
		     what is the minimum and maximum number.
****************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
	int max = 0;
	int min = 0;
	int user_num = 0;
	int input = 0;
	int i = 0; 
	
	cout << "How many integers would you like to enter?" << endl;
	cin >> user_num;

	cout << "Please enter " << user_num << " integers." << endl;
		
	for (i = 0; i < user_num; i++)
	{
		cin >> input;
	
		if (i == 0)
		{
			min = max = input;
		}
	 	else	
		{
			if (input < min)
			{
				min = input;
			}
			if (input > max)
			{
				max = input;
			}
		}
	}

	cout << "min: " << min << endl;
	cout << "max: " << max << endl;	

	return 0;

}
