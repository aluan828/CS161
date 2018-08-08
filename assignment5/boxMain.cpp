// This is the main function to test Box header and Box class files

#include <iostream>
#include "Box.hpp"

using std::cout;
using std::endl;

int main ()
{
	Box box1(2.4, 7.1, 5.0);
	Box box2;

	box1.printInfo();
	box2.printInfo();

	double volume1 = box1.calcVolume();
	cout << volume1 << endl;

	double surfaceArea1 = box1.calcSurfaceArea();
	cout << surfaceArea1 << endl;
	
	double volume2 = box2.calcVolume();
	cout << volume2 << endl;

	double surfaceArea2 = box2.calcSurfaceArea();
	cout << surfaceArea2 << endl;

	return 0;
}	
