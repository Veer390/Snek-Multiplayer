#pragma once
#include "vector.h"
#include "Graphics.h"
#include "takeinput.h"
#include "snek.h"

class snake;
class Ai
{
private:
	vector SnekLoc;
	WhichButtonPressed button;
	vector EatableLoc;

private:
	WhichButtonPressed StepOneInputProcess(vector SnekLoc,vector BallLoc);
	int DistanceBeforeCollision(vector SnekLoc);

public:
	WhichButtonPressed AiMain(snake SnakeObj,vector BallLoc);
};