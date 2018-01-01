#pragma once

#include "vector.h"
#include "SnakeCell.h"
#include "board.h"
#include "Graphics.h"
#include "MainWindow.h"
#include "takeinput.h"

class snake
{
	board brd;
	SnekCell snk[100];
	int length = 10;
	int vx = 1, vy = 0;
	int plyrNo;
	Input inp;
	int SnakeUpdateTimer = 5, SnakeRealTimer = 0;
	

public:
	snake(int PlayerNumber);
	//~snake();
	void MoveSnake();
	void DrawSnake(Graphics& gfx);
	void UpdateSnake(Graphics& gfx, Keyboard& kbd);
	void SnakeInput(Keyboard& kbd);
	
	
	
};