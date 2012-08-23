#include "Grid.h"
#include <iostream>

using namespace std;

Grid::Grid			(void)	{
}// end NULL constructor.

Grid::Grid			(int width,int height)
{	
	set(height, width); 
}// end constructor.

Grid::~Grid			(void)	{
	for (int i = 0;i<gridHeight;i++){
		delete[]*(beta + i);
	}
	delete[] beta;
}// end deconstructor.

void Grid::gridDefault		(void)	{
	for (int i=0;i<gridHeight;i++){
		for (int j=0;j<gridWidth;j++){
			beta[i][j] = 0; 
		}
	}
	for (int i=1;i<gridHeight-1;i++){
		for (int j=1;j<gridWidth-1;j++){
			beta[i][j] = 1; 
		}
	}
}// end gridDefault().

void Grid::set		(int h, int w)	{
	gridWidth		= w;
	gridHeight		= h;
	beta = new int*[w];
	for (int i = 0;i<h;i++){
		*(beta + i) = new int[w];
	}
	gridDefault();
}// end set().

int** Grid::grid		(void)	{return beta;}
//end grid().











// print for test
void Grid::testPrint		(void)	{
	for (int i=0;i<gridHeight;i++){
		for (int j=0;j<gridWidth;j++){
			cout << beta[i][j] << " "; 
		}
	cout << endl;
	}
}

