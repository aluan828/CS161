// Taxicab.cpp is the Taxi class function implementation file

#include "Taxicab.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::abs; 

Taxicab::Taxicab()
{
	XCoord = 0;
	YCoord = 0;
	TotalDistance = 0;
}

Taxicab::Taxicab(int x, int y)
{
	XCoord = x;
	YCoord = y;
	TotalDistance = 0;
}

int Taxicab::getXCoord()
{
	return XCoord;
}

int Taxicab::getYCoord()
{
	return YCoord;
}

int Taxicab::getDistanceTraveled()
{
	return TotalDistance;
}

void Taxicab::moveX(int x) 
{
	TotalDistance += abs(x);
	XCoord += x; 	
}

void Taxicab::moveY(int y)
{
	TotalDistance += abs(y); 
	YCoord += y; 
}  


/*void Taxicab::printInfo()
{
	cout << "XCoord: " << XCoord << " YCoord: " << YCoord <<  endl;
}*/
	
	

