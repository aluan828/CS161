/* Author: Austin Luan
   Date: 08/02/2018
   Description: This is the Point class implementation file for the functions and constructors
*/

#include <iostream>
#include "Point.hpp"
#include <cmath>

using std::cout;
using std::sqrt;
using std::endl;


// Default constructor initializes x and y coordinates to 0
Point::Point()
{
		XCoord = 0;
		YCoord = 0;
}

// Constructor that sets x and y coordinates to parameters entered
Point::Point(double x, double y)
{
		setXCoord(x);
		setYCoord(y);
}

// Takes a double and sets the x coordinate to that value
void Point::setXCoord(double x)
{
		XCoord = x;
}

// Takes a double and sets the y coordinate to that value
void Point::setYCoord(double y)
{
		YCoord = y;
}

// Function that returns the x coordinate of the point
double Point::getXCoord()
{
		return XCoord;
}

// Function that returns the y coordinate of the point
double Point::getYCoord()
{
		return YCoord;
}

// Function that determines the distance between two points
double Point::distanceTo(Point otherPoint)
{
		double sumX;
		double sumY;
		double sumXSquared;
		double sumYSquared;
		double sumCoords;
		double distance;
		
		double XCoordFirstPoint;
		double YCoordFirstPoint; 
		
		double XCoordSecondPoint;
		double YCoordSecondPoint;

		// Gets the coordinates of the first point
		XCoordFirstPoint = getXCoord();
		YCoordFirstPoint = getYCoord();

		// Gets the coordinates of the second point
		XCoordSecondPoint = otherPoint.getXCoord();
		YCoordSecondPoint = otherPoint.getYCoord();

		// Determine the sum of the x coordinates, and square them
		sumX = XCoordSecondPoint - XCoordFirstPoint;
		sumXSquared = sumX * sumX;

		// Determine the sum of the y coordinates, and square them
		sumY = YCoordSecondPoint - YCoordFirstPoint;
		sumYSquared = sumY * sumY;

		// Determines the distance, which is the square root of the sum of squares of x and y coordinates
		sumCoords = sumXSquared + sumYSquared;
		distance = sqrt(sumCoords);

		return distance;
}

void Point::printInfo()
{
		cout << XCoord << " " << YCoord << endl;
}