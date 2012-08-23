/*
Mind Games : Framework Develpment 
Written By: Brandon Clark
----------------------------------------------------------------------------------------------
File: UI.cpp
----------------------------------------------------------------------------------------------
Information: This program is comprised of the following objects and desired associations:
-	(Grid > Maze / Scrabble) > (Game > User) > Controls

This game is being made to develop a simple game framework that can then be imported
into any project relevant to the use of the objects.  The goal is to create a efficient 
low code base that will be suitable for mobile applications without the heavy load of 
other libraries.  
----------------------------------------------------------------------------------------------
CSUF Info:  Jordan, use this as a template to learn OOP concepts.  Each class represents 
a object that is defined by its functions.  I have always thought a good way to understand
good programming techniques is to image classes as encyclopedias.  You open and close the 
encylopedia as you need it and if you not using it now but need it again later you keep it 
near you, but out of the way.  

In the class Games you can find an example of overloading the level incrementers/decrementers.  

Any header file where you see the word 'virtual' before the funtion declartion you are looking 
at an example of inheritance, because it loans its funtions to another class who simply calls 
the funtion as if it was its own.

I havent included any polymorphism concepts yet but there will be some.  Just think of inheritance
on steriods.  It does the same thing but instead the class that is barrowing the function adds more 
information to the function by declaring itself with additional unique properties.

The nameing conventions are also a example.  I choose camel case because it aviods the use of 
uneeded addtional characters which can add up over time and harder to write clean lines.  
Also take note of the names accross connected headers, this must also be considered in order to 
write a descriptive object that other can use or yourself next time you use it.
-----------------------------------------------------------------------------------------------
Development Notes:
In progress.  Testing classes.
*/
#include <iostream>
#include "User.h"
#include "Controls.h"

using namespace std;

int main(){
	int h;
	
	User tmp;

	tmp.start();
	tmp.testPrint();

	while (tmp.currentLevel() > 0)
	{
	tmp.nextLvl();
	tmp.testPrint();
	    cout << "Press any 'int' and enter to continue levels" << endl;
		cin >> h;
	}

	return 0;
}
