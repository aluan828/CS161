/**********************************************
 * Name: Austin Luan
 * Date: 07/09/2018
 * Description: A program that uses the function hailttone to return the number of steps
 * 		it takes to get to the number 1, based on a specific starting integer.
**********************************************/

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int hailstone (int startNum);

/*int main ()
{
	int steps;
	int userInput;
	
	cout << "Enter starting number: " << endl;
	cin >> userInput;
	steps = hailstone(userInput);
	cout << steps << endl; 

	return 0;	
}*/


int hailstone (int startNum)
{
	int testNum;
	int count = 0;
	
	testNum = startNum; 

	if (testNum == 1)
	{
		count = 0;
	}
	else
	{
		do
		{	
			if ((testNum % 2) == 0)
			{
				testNum = testNum/2;
				count++;
		
			}	
			else
			{
				testNum = (3 * testNum) + 1;
				count++;

			}
		} while ( !(testNum == 1));
	}
	
	return count;

}

