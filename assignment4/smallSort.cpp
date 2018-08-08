/****************************
 * Name: Austin Luan
 * Date: 07/09/2018
 * Ddescription: This program contains a function that sorts three integers
 * 		 based on ascending order.
****************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
	
void smallSort(int &firstNum, int &secondNum, int &thirdNum );

int main ()
{
	int first = 5; 
	int second = 5;
	int third = 3;
	smallSort(first, second, third);
	cout << first << ", " << second << ", " << third << endl;
 
	return 0;
}

void smallSort(int &firstNum, int &secondNum, int &thirdNum)
{
	int temp = 0;

	do
	{	
		if (firstNum > secondNum)
		{
			temp = firstNum;
			firstNum = secondNum;
			secondNum = temp;
		}	
		if(secondNum > thirdNum)
		{
			temp = secondNum;
			secondNum = thirdNum;
			thirdNum = temp;
		}
	 	if (firstNum > thirdNum)
		{
			temp = firstNum;
			firstNum = thirdNum;
			thirdNum = temp;
		}   
		
	} while( (firstNum > secondNum) || (secondNum > thirdNum) || (firstNum > thirdNum)) ;
	
}

