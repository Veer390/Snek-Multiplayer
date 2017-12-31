#include "takeinput.h"



WhichButtonPressed Input::player1input(Keyboard& kbd)
{
	WhichButtonPressed wbp;
	if (kbd.KeyIsPressed(0x38))
	{
		wbp = plyr1UP;
	}
	else if (kbd.KeyIsPressed(0x32))
	{
		wbp = plyr1Down;
	}
	else if (kbd.KeyIsPressed(0x34))
	{
		wbp = plyr1Left;
	}
	else if (kbd.KeyIsPressed(0x36))
	{
		wbp = plyr1Right;
	}
	else
	{
		wbp = NOKEYPRESSED;
	}
	return wbp;
}

WhichButtonPressed Input::player2input(Keyboard & kbd)
{
	WhichButtonPressed wbp;
	if (kbd.KeyIsPressed(0x44))
	{
		wbp = plyr2Right;
	}
	else if (kbd.KeyIsPressed(0x41))
	{
		wbp = plyr2Left;
	}
	else if (kbd.KeyIsPressed(0x57))
	{
		wbp = plyr2UP;
	}
	else if (kbd.KeyIsPressed(0x53))
	{
		wbp = plyr2Down;
	}
	else
	{
		wbp = NOKEYPRESSED;
	}
	return wbp;
	
}
