#ifndef CLASS_USERS
#define CLASS_USERS
#include "Game.h"
#include <iostream>
#include <string>

using namespace std;

class User : public Game 
{
public:
	User(void);						// NULL constructor.
	User(string,char,string,
		 string,char,string);			
	~User(void);					// Deconstructor.

	void	newUser(
			string first, 
			char middle, 
			string last, 
			string user, 
			char sexOrient, 
			string eAddress);		// Set the user and level.
	string	userName(
			string, char, string);	// Generate a user name.
	void	social(string fB,
			string twit,
			string lIn,
			string gP);				// Set User Social platforms. If null set 0.

	void	open		(void);		// Open saved user game.
	void	saveUser	(void);		// Save User information to file.
	void	save		(void);		// Save all user and game information.

protected:
	string	userName,
			firstName,
			lastName,
			email,
			facebook,
			twitter,
			linkedIn,
			google;					// User name.
	char	sex,
			middleInitial;
	FILE	userFile;				// User file with current level information.
};
#endif 

