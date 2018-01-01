#pragma once
#include "Keyboard.h"



enum WhichButtonPressed
{
	numpad8key=1,
	numpad2key=2,
	numpad6key=3,
	numpad4key=4,
	Wkey=11,
	Skey=12,
	Akey=13,
	Dkey=14,
	SED = 0,

};


class Input
{
public:
	WhichButtonPressed input(Keyboard& kbd);
	
	

		
};