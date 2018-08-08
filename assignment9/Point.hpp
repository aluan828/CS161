/* Author: Austin Luan
   Date: 08/02/2018
   Description: This is the header file for the Point class,  which takes two doubles representing
				the x and y coordinates. There will be some get/set functions and a function to calculate
				the distance between these two coordinates.
*/

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:
		double XCoord;
		double YCoord;
	public:
		// Constructor that takes two double parameters and initializes its coordinates
		Point(double,double);

		// Default constructor that initializes both coordinates to zero
		Point();
		
		// Function to set X coordinate
		void setXCoord(double);

		// Function to set Y coordinate
		void setYCoord(double);
		
		// Function that returns the X coordinate (double)
		double getXCoord();

		// Function that returns the Y coordinate (double)
		double getYCoord();

		// Function that determines the distance between two points
		double distanceTo(Point);

		// Function that prints out information about the point
		void printInfo();
};

#endif
