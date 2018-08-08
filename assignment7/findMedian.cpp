// Author: Austin Luan
// Date: 07/23/2018
// Description: This is a .cpp file containing the findMedian function.
// 		This function wll return the median of an array.

#include <iostream>
#include <algorithm> 

// Function prototype
double findMedian(int array[], int size); 

using std::cout;
using std::sort;
using std::endl;

/*int main ()
{
	int array[] = {1,4,3,2,5,6,7,8};
	int size = 8;
	double median;

	median = findMedian(array, size);

	cout << median << endl;
		
	return 0;
}*/

//Function determines median of the array and returns that value
double findMedian(int array[], int size)
{
	double median;
	int  medianLocation;		
	double medianSum;
	
	sort(array, array + size);
	
	medianLocation = (size + 1)/2;

	if (size%2 == 1)
	{
		median = array[medianLocation-1];
	}
	else
	{
		medianSum = array[medianLocation] + array[medianLocation-1];
		median = medianSum/2.0;
	}	
	
	return median;
}
