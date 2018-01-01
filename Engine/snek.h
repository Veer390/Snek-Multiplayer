#pragma once

#include "vector.h"
#include "SnakeCell.h"
#include "board.h"
#include "Graphics.h"
#include "MainWindow.h"
#include "takeinput.h"
#include "Eatable.h"

class snake
{
	board brd;
	SnekCell snk[100];
	int length = 10;
	int vx = 1, vy = 0;
	int plyrNo;
	Input inp;
	int SnakeUpdateTimer = 5, SnakeRealTimer = 5;
	bool STOPUPDATING = false;
	int Score = 0;
	bool start = false;

public:
	snake(int PlayerNumber);
	//~snake();
	void MoveSnake();
	void DrawSnake(Graphics& gfx);
	void UpdateSnake(Graphics& gfx, Keyboard& kbd,SnekEats& eats);
	void SnakeInput(Keyboard& kbd);
	void CheckCollidingWithWall(Graphics& gfx);
	void CheckIfEating(SnekEats& eats);
	void checkcollisionwithself();
	
	
	
};