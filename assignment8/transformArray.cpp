// Author: Austin Luan
// Date: 07/28/2019
// Description: This is a .cpp file for the transformArray function
// 		where it takes a reference to a pointer of a dynamically alllocated
// 		array of ints and the size of the array

#include <iostream>

using std::cout;
using std::endl;

//Function Prototype
void transformArray(int* array ,int size);

/*int main ()
{
	int* myArray = new int[3];
	myArray[0] = 4;
	myArray[1] = 2;
	myArray[2] = 5;

	transformArray(myArray,3);

	for (int i = 0; i < 6; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[]myArray;
	
	return 0;
}*/


// Function for transforming the array to the original array followed by each value plus one
void transformArray(int* array,int size)
{
	// Allocate a temporary pointed array
	int *temp = new int[2*size];
	
	// Fill temporary array with pointed array's elements	
	for (int i = 0; i < size; i++)
	{
		temp[i] = array[i];
	}
	
	// Double the temporary array and implement the poitned array but
	// elements are +1
	for (int i = size; i < 2*size; i++)
	{
		temp[i] = temp[i-size] + 1;
	}
	
	// Filled pointed array with temporary array
	for (int i = 0; i < 2*size; i++)
	{
		array[i] = temp[i];
	}
	
	// Delete the temp dynamic allocated array
	delete[]temp;
}

	

	
	
		
