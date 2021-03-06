#pragma once

#include "vector.h"
#include "SnakeCell.h"
#include "board.h"
#include "Graphics.h"
#include "MainWindow.h"
#include "takeinput.h"
#include "Eatable.h"
#include "Score.h"
#include "DesbuggerSnekClass.h"
#include "Ai++.h"



class snake
{
	Ai AIComp;
	board brd;
	bool horizontallock = false, verticallock = false;
	SnekCell snk[100];
	int length = 10;
	int vx = 1, vy = 0;
	int plyrNo;
	Input inp;
	float SnakeUpdateTimer = 5, SnakeRealTimer = 5;
	bool STOPUPDATING = false;
	int Score = 0;
	bool start = false;
	ScoreSetter score = ScoreSetter(plyrNo);
	bool CanChangeVelocity = true;
	DebugSNEk Ds;
	bool AiIsActive;
	
	void CheckDebug(Keyboard& kbd);



private:
	
	void SetSnakeToMoveUP();   /*plays  with  Vx And Vy Values To Achieve Results.... All 4 Functions*/
	void SetSnakeToMoveDown();
	void SetSnakeToMoveLeft();
	void SetSnakeToMoveRight();

public:
	snake(int PlayerNumber,bool AiActivate);
	//~snake();
	void MoveSnake();
	void DrawSnake(Graphics& gfx);
	void UpdateSnake(Graphics& gfx, Keyboard& kbd,SnekEats& eats);
	void SnakeInputPlayerControl(Keyboard& kbd);
	void CheckCollidingWithWall(Graphics& gfx);
	void CheckIfEating(SnekEats& eats);
	void checkcollisionwithself();
	void DrawScoreForPlayer(Graphics& gfx);
	void ChangeVelocityBasedOnScore();
	
	
	friend class Ai;
	
};