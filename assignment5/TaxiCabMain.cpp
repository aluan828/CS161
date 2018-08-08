// This is the main funciont that will check the Taxi Cab class and header implementation

#include "Taxicab.hpp"
#include <iostream>

using std::endl;
using std::cout;

int main ()
{

	Taxicab cab1;
	Taxicab cab2(5, -8);

	cab1.moveX(3);
	cab1.moveY(-4);

	cab1.printInfo();

	cab1.moveX(-1);

	cab1.printInfo();

	cout << "Distance traveled: " << cab1.getDistanceTraveled() << endl;

	cab2.moveY(7);
	
	cab2.printInfo();

	cout << "Y Coord: " << cab2.getYCoord() << endl;

	return 0;
} 
