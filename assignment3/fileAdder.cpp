
/**********************************
	Name: Austin Luan
	Date: 07/02/2018
	Description: This program opens a file and reads the list of integers in the file.
		     This program will add all the integers together and create an output file
		     in a text file.
*********************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string; 

int main ()
{
 	ifstream inputFile;
	ofstream outputFile;
	string fileName;
	int sum = 0;
	int value = 0;
	
	cout << "Please enter your filename." << endl;
	cin >> fileName;

	inputFile.open(fileName);
	
	if (inputFile)
	{
		while (inputFile >> value)
		{
			sum += value;
		}
		
		inputFile.close();

		outputFile.open("sum.txt");
		outputFile << sum << endl;
		outputFile.close();
		cout << "result written to sum.txt" << endl;
	}
	else
	{
		cout << "could not access file" << endl;
	}

	return 0;

}
