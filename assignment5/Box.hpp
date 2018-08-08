// Box.hpp is the Box class specification file

#ifndef BOX_HPP
#define BOX_HPP

// Box Class declaration

class Box
{
	private:
		double height;
		double width;
		double length;
	
	public:
		void setHeight(double);
		void setWidth(double);
		void setLength(double);
		double calcVolume();
		double calcSurfaceArea();
		Box();
		Box(double, double, double);
		//void printInfo();
};

#endif


