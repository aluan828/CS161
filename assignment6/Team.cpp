// Author: Austin Luan
// Date: 07/22/2018
// Description: Team.cpp is the Team class function implementation file, which also includes	
// the Player class implementation file

#include "Team.hpp"
#include <iostream>

using std::cout;
using std::endl;

// Constructor taking five player classes to set them as PG, SG, SF, PF, and C
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	setPointGuard(p1);
	setShootingGuard(p2);
	setSmallForward(p3);
	setPowerForward(p4);
	setCenter(p5);
}

// Function that sets the Point Guard Player
void Team::setPointGuard(Player PlayerIn)
{	
	PointGuard = PlayerIn;
}

// Function that retrieves the Point Guard Player
Player Team::getPointGuard()
{	
	return PointGuard;	
}

// Function that sets the Shooting Guard Player
void Team::setShootingGuard(Player PlayerIn)
{
	ShootingGuard = PlayerIn;
}

// Function that retrieves the Shooting Guard Player
Player Team::getShootingGuard()
{
	return ShootingGuard;
}

// Function that sets the Small Forward Player
void Team::setSmallForward(Player PlayerIn)
{
	SmallForward = PlayerIn;
}

// Function that retrieves the Small Forward Player
Player Team::getSmallForward()
{
	return SmallForward;
}

// Function that sets the Power Forward Player
void Team::setPowerForward(Player PlayerIn)
{
	PowerForward = PlayerIn;
}

// Function that retrieves the Power Forward Player
Player Team::getPowerForward()
{
	return PowerForward;
}

// Function that sets the Center Player
void Team::setCenter(Player PlayerIn)
{	
	Center = PlayerIn;
}

// Function that retrieves the Center Player
Player Team::getCenter()
{	
	return Center;
}

// Function that returns the total points of the entire team
int Team::totalPoints()
{
	int sum = PointGuard.getPoints() + ShootingGuard.getPoints() + SmallForward.getPoints() + PowerForward.getPoints() + Center.getPoints();

	return sum;
}

/*void Team::printInfo()
{

	PointGuard.printInfo();
	ShootingGuard.printInfo();
	SmallForward.printInfo();
	PowerForward.printInfo();
	Center.printInfo();
}*/
	
