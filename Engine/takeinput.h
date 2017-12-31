#pragma once
#include "Keyboard.h"



enum WhichButtonPressed
{
	plyr1UP = 1,
	plyr1Down = 2,
	plyr1Right = 3,
	plyr1Left = 4,
	plyr2UP = 11,
	plyr2Down = 12,
	plyr2Right = 13,
	plyr2Left = 14,
	NOKEYPRESSED = 0,

};


class Input
{
public:
	WhichButtonPressed player1input(Keyboard& kbd);
	WhichButtonPressed player2input(Keyboard& kbd);
	

		
};