#include "Controls.h"
#include <stdio.h>


Controls::Controls(void)
{
}


Controls::~Controls(void)
{
}

void Controls::ClearScreen(void)
{

}

int Controls::getXCoord(){
	return itsXCoord;
}

void Controls::setXCoord (int xCoord){
	itsXCoord = xCoord;
}

int Controls::getYCoord(){
    return itsYCoord;
}

void Controls::setYCoord(int yCoord){
    itsYCoord = yCoord;
}