// Author: Austin Luan
// Date: 07/22/2018
// Description: This is the Player class specification file

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>


//Player class declaration

class Player
{
        private:
        	std::string name;
                int points;
	        int rebounds;
                int assists;
	public:
              //Default Constructor
             	Player();
	      //Constructor taking four parameters
	     	Player(std::string, int, int, int);
		std::string getName();
	       	void setPoints(int);
		int getPoints();
		void setRebounds(int);
		int getRebounds();
		void setAssists(int);
		int getAssists();
		bool hasMorePointsThan(Player);
		//void printInfo();		
};

#endif
