#include <iostream>
#include "Game.h"
#include "Maze.h"

using namespace std;

Game::Game(void)
{	
}

Game::~Game(void) 
{
}

int		Game::currentLevel		(void)
{
	return lvl;
}

int		Game::iValue		(int i)
{
	if (i == 1)
		return i1;
	else if(i == 2)
		return i2;
	else if (i == 3)
		return i3;
	else if (i == 4)
		return i4;
}

void	Game::start		(void)
{
		// Default values for new game.
	lvl = 1;
	i1	= 0;
	i2	= 0;
	i3	= 0;
	i4	= 0;
	
}


void	Game::nextLvl		(void)
{
	lvl++;
}

void	Game::setLvl		(int level)
{
	lvl += level;
}

float	Game::iIncrement	(float i)
{
	i++;
	return i;
}

int		Game::iIncrement	(int i)
{
	i++;
	return i;
}

float	Game::iDecrement	(float i)
{
	i--;
	return i;
}

int		Game::iDecrement	(int i)
{
	i--;
	return i;
}

void	Game::testPrint	(void) 
{
	
	cout << "Current level settings:\nLevel: " << lvl 
		 << "\ni1: " << i1 
		 << "\ni2: " << i2 
		 << "\ni3: " << i3 
		 << "\ni4: " << i4 << endl;
}

void	Game::gameEnd	(void) 
{

}
void	Game::gamePause	(void) 
{
		 
}
