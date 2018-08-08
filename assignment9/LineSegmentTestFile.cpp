// This is a test file for the LineSegment.cpp and Point.cpp

#include "LineSegment.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main ()
{

	Point p1(4.3, 7.52);
	Point p2(-17.0, 1.5);

	p1.printInfo();
	p2.printInfo();

	LineSegment ls1(&p1, &p2);

	double length = ls1.length();

	double slope = ls1.slope();

	cout << "length is " << length << endl;

	cout << "slope is " << slope << endl;

	cout << "END OF PROGRAM" << endl;

	return 0;

}
