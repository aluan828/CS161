// Author: Austin Luan
// Date: 07/22/2018
// Description: This is a team class specification file using the player class specification file

#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
	private:
		
		Player PointGuard;
		Player ShootingGuard;
		Player SmallForward;
		Player PowerForward;
		Player Center;

	public:
		//Constructor
	
		Team(Player, Player, Player, Player, Player);
	
		//Class functions
		
		void setPointGuard(Player);
		Player getPointGuard();
		void setShootingGuard(Player);
		Player getShootingGuard();
		void setSmallForward(Player);
		Player getSmallForward();
		void setPowerForward(Player);
		Player getPowerForward();
		void setCenter(Player);
		Player getCenter();
		int totalPoints();
		//void printInfo();
};

#endif
