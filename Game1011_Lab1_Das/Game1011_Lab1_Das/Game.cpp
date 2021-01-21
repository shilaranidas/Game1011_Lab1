#include "Game.h"
void Game::setName(string n)
{
	m_name = n;
}
void Game::setPublisher(string p)
{
	m_publisher = p;
}
void Game::setDeveloper(string d)
{
	m_developer = d;
}
void Game::setAchievementNo(int c)
{
	achievements = new Achievement[c];
	no_of_achievement = c;
}
void Game::addAchievementAt(Achievement achiv, int index)
{
	achievements[index] = achiv;
}
void Game::gameInfo() {	
	cout << "\t\tName:" << m_name << ";\tPublisher:" << m_publisher << ";\tDeveloper:" << m_developer << endl;
	for (int i = 0; i < no_of_achievement; i++)
	{
		cout << "\t\tAchievement " << (i + 1) << "Information:" << endl;
		achievements[i].achievementInfo();
	}
}
