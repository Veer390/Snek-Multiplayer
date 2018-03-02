#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Snek.h"
#include "Eatable.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */


	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	board brd;
	/********************************/
	/*  User Variables              */

	snake snk = snake(1,false), snk2 = snake(2,true);
	SnekEats eats = SnekEats({ 10,8 });    //starting location for collectible can be randomized

	/********************************/
};