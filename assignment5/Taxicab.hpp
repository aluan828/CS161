// Taxicab.hpp is the Taxicab class specification file

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

// Taxicab Class declaration

class Taxicab 
{
	private:
		int XCoord;
		int YCoord;
		int TotalDistance;
		
	public:
		int getXCoord();
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int);
		void moveY(int);
		Taxicab();
		Taxicab(int, int);
		//void printInfo();
};

#endif
