// Game1011_Lab1_Das.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"
using namespace std;
int main()
{
	string value;
	int score;
	int gameSize, achievSize;
	Game gameObj;
	cout << "\Game Name: ";
	cin >> value;
	gameObj.setName(value);
	cout << "\Game Publisher: ";
	cin >> value;
	gameObj.setPublisher(value);
	cout << "\Game Developer: ";
	cin >> value;
	gameObj.setDeveloper(value);
	cout << "\How many numbers of achievement for this game? ";
	cin >> achievSize;
	gameObj.setAchievements(achievSize);
	for (int j = 0; j < achievSize; j++)
	{
		cout << "Enter information about Achivement " << (j + 1) << " of game"  << ": ";
	Achievement achievementObj;
	cout << "\tAchievement Title: ";
	cin >> value;
	achievementObj.setTitle(value);
	cout << "\tAchievement Description: ";
	cin >> value;
	achievementObj.setDescription(value);
	cout << "\tAchievement Score Value: ";
	cin >> score;
	achievementObj.setScoreValue(score);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
