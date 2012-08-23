#ifndef CLASS_GRID
#define CLASS_GRID

class Grid
{
public:
	Grid(void);							// NULL constructor
	Grid(int,int);						// Copy Constrctor
	~Grid(void);						// Deconstructor

	void	gridDefault		(void);		// Set grid values to 0 & 1.
	virtual void  set		(int,int);	// Set the dynamic pointer array.
	virtual int** grid		(void);		// Return the grid to requestor. 

	void  testPrint	(void);				// Test visual of grid object.

protected:	
	int			gridWidth,				// User defined grid width.
				gridHeight;				// User defined grid height.
	int**		beta;					// This is where all the data for the grid output is held.
};
#endif 

