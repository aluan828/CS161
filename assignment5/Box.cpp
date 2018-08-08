// Box.cpp is the Box class function implementation file

#include "Box.hpp"
#include <iostream>

using std::cout;
using std::endl;

Box::Box()
	{
		setHeight(1);
		setWidth(1);
		setLength(1);
	}

	
Box::Box(double h, double w, double l)
	{

		setHeight(h);
		setWidth(w);
		setLength(l);
	}

void Box::setHeight(double heightIn)
{
	height = heightIn;
}

void Box::setLength (double lengthIn)
{
	length = lengthIn;
}

void Box::setWidth (double widthIn)
{
	width = widthIn;
}

double Box::calcVolume()
{
	return length * width * height;
}

double Box::calcSurfaceArea()
{

	double lenWidSurfArea = 2.0 * length * width;
	double lenHeiSurfArea = 2.0 * length * height;
	double widHeiSurfArea = 2.0 * width * height;
	double surfaceArea = lenWidSurfArea + lenHeiSurfArea + widHeiSurfArea;	

	return surfaceArea;
}
	
/*void Box::printInfo()
{
	cout << "Height: " << height << endl;
	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
}*/
