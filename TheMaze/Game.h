#ifndef CLASS_GAME
#define CLASS_GAME

class Game 
{
public:
	Game						(void);		// NULL constructor.
	~Game						(void);		// Deconstructor.

	// Level Controls
	virtual void	setGame		(int);		// Set the game type.
	virtual int		gameType	(void);		// Return the current game type.
	virtual int		currentLevel(void);		// Return the current level.
	virtual int		iValue		(int);		// Return the i# of choice (1-4:Currently).
	virtual void	start		(void);		// Start a new game by lvl = 1.
	virtual void	nextLvl		(void);		// Increments lvl by int = program decion.
	void			setLvl		(int);		// Increments lvl by int = program decion.
	float			iIncrement	(float);	// Increments i# values.
	int				iIncrement	(int);		// Increments i# values.
	float			iDecrement	(float);	// Decrements i# values.
	int				iDecrement	(int);		// Decrements i# values.
	virtual void	gamePause	(void);		// Pause the game.
	virtual void	gameEnd		(void);		// End the game.

	// Time Controls
	virtual void	timer		(void);		// Return current clock.
	void			timerStart  (void);		// Starts the timer new.
	int				timerType	(int);		// Return count up or count down.
	void			countUp		(void);		// Set the counter for total time.
	void			countDown	(void);		// Set the clock for time remaining.
	int				timePeriod	(int);		// Set a limit on the timer period.
	void			timerPause	(void);		// Pause the timer.

	// Score Controls
	virtual int		score		(void);		// Return the user score.
	virtual void	newScore	(void);		// Set score to 0.
	virtual void	iScore		(void);		// Increment point to score 1.
	virtual void	dScore		(void);		// Decrement point to score -1.
	virtual void	setBonus	(int);		// Set the bonus incrment.
	virtual void	bonus		(void);		// Incremnt the score by bonus.

	void			testPrint	(void);		// Test visual level aspects.

protected:
	int		lvl;							// Current level.
	float	i1,i2;							// i# 1&2 lvl difficulties.
	int		i3,i4;							// i# 3&4 lvl difficulties.
};
#endif
