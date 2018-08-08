/* Author: Austin Luan
   Date: 08/02/2018
   Description: This is the LineSegment header file, which also includes the Point header file
*/



#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
	private:
		Point* EndP1;
		Point* EndP2;
	
	public:
		// Constructor that takes to addresses of Point object
		LineSegment(Point*, Point*);

		// Function that sets the x and y coordinates of End1
		void setEnd1(Point*);

		// Function that returns Endpoint1 object
		Point getEnd1();

		// Function that sets 
		void setEnd2(Point*);
		
		// Function that returns Endpoint2 object
		Point getEnd2();

		// Function that determines the length between two endpoints
		double length();
		
		// Function that determines the slope between two endpoints
		double slope();

};

#endif