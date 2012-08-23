#ifndef CLASS_CONTROLS
#define CLASS_CONTROLS


class Controls
{
public:
	Controls(void);
	~Controls(void);

	void	ClearScreen	(void);

	int		getXCoord	(void);
    void	setXCoord	(int);
    int		getYCoord	(void);
    void	setYCoord	(int);

private:
    int		itsXCoord;
    int		itsYCoord;
};
#endif 