// Author: Austin Luan
//Date: 07/28/2018
// Description: This is a .cpp file that has the function SmallSort
// 		similiar to the program done previously, except
//		it uses pointers intstead of references.

#include <iostream>

using std::cout;
using std::endl;

// Function Prototype
void smallSort2(int* num1, int* num2, int* num3);

/*int main ()
{
	int first = 14;
	int second = -90;
	int third = 2;
	
	smallSort2(&first, &second, &third);
	
	cout << first << ", " << second << ", " << third << endl;
	
	return 0;
}*/

// Using the same SmallSort function, but instead using pointers
void smallSort2(int* num1, int* num2, int* num3)
{
	int temp;
	
	do
	{
		if (*num1 > *num2)
		{
			temp = *num1;
			*num1 = *num2;
			*num2 = temp;
		}
		if (*num2 > *num3)
		{
			temp = *num2;
			*num2 = *num3;
			*num3 = temp;
		}
		if (*num1 > *num3)
		{
			temp = *num1;
			*num1 = *num3;
			*num3 = temp;
		}
	} while(*num1 > *num2 || *num2 > *num3 || *num1 > *num3);

}

