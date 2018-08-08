/* Author: Austin Luan
   Date: 08/02/2018
   Description: This is the LineSegment Implementation file, which also includes the Point implementation file
*/

#include "LineSegment.hpp"
#include <iostream>

using std::cout;
using std::endl;

// Constructor that sets the two point
LineSegment::LineSegment(Point* Point1, Point* Point2)
{
		setEnd1(Point1);
		setEnd2(Point2);
}

// Function that sets the first endpoint
void LineSegment::setEnd1(Point* Point1)
{
		EndP1 = Point1;
}

// Function that returns the first endpoint
Point LineSegment::getEnd1()
{
		return (*EndP1);
}

// Function that sets the second endpoint
void LineSegment::setEnd2(Point* Point2)
{
		EndP2 = Point2;
}

// Function that returns the second endpoint
Point LineSegment::getEnd2()
{
		return (*EndP2);
}

// Function that determines the length of two endpoints
double LineSegment::length()
{
		
		double length;

		length = EndP1->distanceTo(*EndP2);
		
		return length;
}

// Function that determines the slope of two endpoints
double LineSegment::slope()
{
		double x1 = EndP1->getXCoord();
		double y1 = EndP1->getYCoord();
		double x2 = EndP2->getXCoord();
		double y2 = EndP2->getYCoord();

		double slope;

		slope = (y2 - y1)/(x2 - x1);

		return slope;

}
