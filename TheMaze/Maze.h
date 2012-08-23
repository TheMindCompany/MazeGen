#ifndef CLASS_MAZE
#define CLASS_MAZE
#include "Grid.h"

class Maze : public Grid
{
public:
	Maze(void);							// NULL constructor
	Maze(int,int);						// Constrctor
	~Maze(void);						// Deconstructor

	virtual void setMaze			(int,int);
	int		randomNumber	(int,int);	// Create random number point.
/* Pending Use
	int		length			(int,float);// Decide the length of the line.
	int		turns			(int,float);// Decides the number of turn points in a line.
	int		direction		(int*,int*,int);// Chooses a random direction based on surroundings(eg. wall(0)).
*/
	void	testPrint		(void);		// Test visual of maze matrix.

protected:	
	int		mazeWidth,					// User defined maze width.
			mazeHeight,					// User defined maze height.
			n;							// Number of verticies.(points where 2 or more line connect)
	int**	mazeGrid;					// This is where all the data for the maze output is held.
};
#endif 

