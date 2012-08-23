#include "Grid.h"
#include "Maze.h"
#include <iostream>
#include <ctime>    // For time() : Need to seed randomNumber()'s, srand().
#include <cstdlib>  // For srand() and rand()

using namespace std;

Maze::Maze			(void)	
{
}// end NULL constructor.

Maze::Maze			(int width,int height) : Grid (width, height)
{	
	srand(unsigned (time(0)));
	mazeGrid = Grid::grid();
	mazeWidth =width;
	mazeHeight=height;
}// end constructor.

Maze::~Maze			(void)	
{
	for (int i = 0;i<mazeHeight;i++){
		delete[]*(mazeGrid + i);
	}
	delete[] mazeGrid;
}// end deconstructor.

void	Maze::setMaze			(int width,int height)	
{
	Grid::set(height,width);
	srand(unsigned (time(0)));
	mazeGrid = Grid::grid();
	mazeWidth =width;
	mazeHeight=height;
}

int Maze::randomNumber		(int start, int end)	
{
    int r = (rand() % end) + start;
	return r;
}// end randomNumber().


















/*
Pending Intiation!

int Maze::length			(int area, float i)	{
	int length = (area) * ( (mazeHeight / mazeWidth) / area + i ) ;
	return length;
}// end length().

int Maze::turns			(int length, float i)	{
	int turns = randomNumber((length*.05),length*((mazeHeight/mazeWidth) / length + i));
	return turns;
}// end breaks().

int Maze::direction			(int* orgin,int* length, int limit)	{
	return 1;
}// end direction().
*/

void Maze::testPrint		(void)	{
	for (int i=0;i<mazeHeight;i++){
		for (int j=0;j<mazeWidth;j++){
			cout << mazeGrid[i][j] << " "; 
		}
	cout << endl;
	}
}

