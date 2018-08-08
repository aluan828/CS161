// Author: Austin Luan 
// Date: 07/22/2018
// Description: Player.cpp is a Player class function implementation file

#include "Player.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

// Player default constructor
Player::Player()
{
	name = "";
	setPoints(-100);
	setRebounds(-100);
	setAssists(-100);
}

// Player class that takes four arguments (name, points, rebounds, assists)
Player::Player(string n, int p, int r, int a)
{
	name = n;
	setPoints(p);
	setRebounds(r);
	setAssists(a);
}
// Function that retrieves the player's name and returns a string

string Player::getName()
{
	return name;
}

// Function that sets the player's points
void Player::setPoints(int PointsIn)
{
	points = PointsIn;
}

// Function that ges the player's points
int Player::getPoints()
{
	return points;
}

// Function that sets the player's rebounds
void Player::setRebounds(int ReboundsIn)
{
	rebounds = ReboundsIn;
}

// Function that gets the player's rebounds
int Player::getRebounds()
{
	return rebounds;
}

// Function that sets the player's assists
void Player::setAssists(int AssistsIn)
{
	assists = AssistsIn;
}

// Function that gets the player's assists
int Player::getAssists()
{
	return assists;
}

// Function that returns a bool value, determines if the current player's points
// is less than or great than another player's points
bool Player::hasMorePointsThan(Player otherPlayer)
{
	int otherPlayerPoints = otherPlayer.getPoints();
	int currentPlayerPoints = getPoints(); 
	bool morePoints = true;

	if (currentPlayerPoints > otherPlayerPoints)
	{
		morePoints = true;
	}
	else
	{	
		morePoints = false;
	}

	return morePoints;
}

/*void Player::printInfo()
{
	cout << name << " " << points << " pts " << rebounds << " rebs " << assists << " asts " << endl;
}*/
