#include "Ai++.h"

WhichButtonPressed Ai::StepOneInputProcess(vector SnekLoc, vector BallLoc)
{
	if (SnekLoc.x <= EatableLoc.x&&SnekLoc.y <= EatableLoc.y)
	{

	}
	if (SnekLoc.x <= EatableLoc.x&&SnekLoc.y >= EatableLoc.y)
	{

	}
	if (SnekLoc.x >= EatableLoc.x&&SnekLoc.y <= EatableLoc.y)
	{

	}
	if (SnekLoc.x >= EatableLoc.x&&SnekLoc.y >= EatableLoc.y)
	{

	}
	if (SnekLoc.x == EatableLoc.x&&SnekLoc.y >= EatableLoc.y)
	{

	}
	if (SnekLoc.x == EatableLoc.x&&SnekLoc.y <= EatableLoc.y)
	{

	}
	if (SnekLoc.x >= EatableLoc.x&&SnekLoc.y == EatableLoc.y)
	{

	}
	if (SnekLoc.x <= EatableLoc.x&&SnekLoc.y == EatableLoc.y)
	{

	}
}

int Ai::DistanceBeforeCollision(vector SnekLoc)
{
  
}

WhichButtonPressed Ai::AiMain(snake SnekObj, vector EatableLoc)
{
	vector SnekLoc = SnekObj.snk[0].loc;
	if (SnekObj.AiIsActive == true)
	{
		AssignButtonPress(SnekLoc, EatableLoc);
	}


}
