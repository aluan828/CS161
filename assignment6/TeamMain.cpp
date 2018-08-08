// This is used to test the Team and Player class declaration files

#include <iostream>
#include <string>
#include "Team.hpp"

using std::cout;
using std::endl;
using std::string;

int main ()
{
	Player p1("Charlotte", 24, 10, 7);
	Player p2("Emily", 21, 13, 9);
	Player p3("Anne", 20, 10, 8);
	Player p4("Jane", 19, 10, 10);
	Player p5("Mary", 18, 20, 10);

	Team team1(p1, p2, p3, p4, p5);

	team1.printInfo();
	
	Player random = team1.getPointGuard();

	random.printInfo();	
	
	int points = team1.totalPoints();
	
	cout << points  << " Points Total" << endl;

	return 0;
}
