// Testing the Player.hpp and Player.cpp functions first

#include <iostream>
#include "Player.hpp"
#include <string>

int main ()
{
	Player p1("Austin", 20, 10, 5);
	Player p2("Marvin", 10, 10, 5);
	
	p1.printInfo();
	p2.printInfo();
	
	p1.setPoints(10);
	p2.setPoints(30);
	
	p1.printInfo();
	p2.printInfo();
	
	p1.hasMorePointsThan(p2);
	
	return 0;
}
