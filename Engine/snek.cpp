#include "snek.h"


void snake::CheckDebug(Keyboard& kbd)
{
	WhichButtonPressed wbp;
	wbp = inp.input(kbd);
	if (wbp == SpaceBar)
	{
		int s = score.GetScore();
		Ds.IncreaseScoreAndLength(s, length);
		score.SetScore(s);
	}
}

void snake::SetSnakeToMoveUP()
{
	vx = 0;
	vy = -1;
	horizontallock = false;
	verticallock = true;
}

void snake::SetSnakeToMoveDown()
{
	vx = 0;
	vy = 1;
	horizontallock = false;
	verticallock = true;
}

void snake::SetSnakeToMoveLeft()
{
	vx = -1;
	vy = 0;
	horizontallock = true;
	verticallock = false;
}

void snake::SetSnakeToMoveRight()
{
	vx = 1;
	vy = 0;
	horizontallock = true;
	verticallock = false;
}



snake::snake(int PlayerNumber,bool AiActivate)
	:plyrNo(PlayerNumber),
	 AiIsActive(AiActivate)
{
	//score.PlayerNumber = PlayerNumber;
	snk[0].colour = { 255,0,255 };
	int i;
	for ( i = 1; i < 100; i++)
	{
		snk[i].colour = { 255,255,255 };
	}
}

/*snake::~snake()
{
	length = 0;
}*/

void snake::MoveSnake()
{
	int i;
	SnakeRealTimer=SnakeRealTimer+0.5;
	if (SnakeRealTimer >= SnakeUpdateTimer)
	{
		for (i = length - 1; i >0; i--)
		{
			snk[i].loc.x = snk[i - 1].loc.x;
			snk[i].loc.y = snk[i - 1].loc.y;
		}
		snk[0].loc.x = snk[0].loc.x + vx;
		snk[0].loc.y = snk[0].loc.y + vy;
		SnakeRealTimer = 0;
		
	}
}

void snake::DrawSnake(Graphics& gfx)
{
	int i;
	for (i = 0; i < length; i++)
	{
		brd.GridToPixelDraw(snk[i].loc, gfx, snk[i].colour);
	}
}

void snake::UpdateSnake(Graphics& gfx, Keyboard& kbd,SnekEats& eats)  //MAIN FUNCTION OF SNAKE MUST ACCESS THIS To CONTROL
{
	    if (STOPUPDATING == false)
		{
			
			DrawScoreForPlayer(gfx);
			ChangeVelocityBasedOnScore();
			if (AiIsActive == false)
			{
				SnakeInputPlayerControl(kbd);
			}
			CheckDebug(kbd);
			MoveSnake();
			DrawSnake(gfx);
			checkcollisionwithself();
			CheckCollidingWithWall(gfx);
			CheckIfEating(eats);

		}
	
}

void snake::SnakeInputPlayerControl(Keyboard& kbd)
{
	WhichButtonPressed wbp;
	wbp = inp.input(kbd);
	
		if (plyrNo == 1)
		{
			if (verticallock == false)
			{
				if (wbp == numpad8key)
				{
					SetSnakeToMoveUP();
				}

				if (wbp == numpad2key)
				{
					SetSnakeToMoveDown();
				}
			}
			if (horizontallock == false)
			{
				if (wbp == numpad4key)
				{
					SetSnakeToMoveLeft();
				}
				if (wbp == numpad6key)
				{
					SetSnakeToMoveRight();
				}
			}
		}
		if (plyrNo == 2)
		{
			if (verticallock == false)
			{
				if (wbp == Wkey)
				{
					SetSnakeToMoveUP();
				}
				if (wbp == Skey)
				{
					SetSnakeToMoveDown();
				}
			}
			if (horizontallock == false)
			{
				if (wbp == Akey)
				{
					SetSnakeToMoveLeft();
				}
				if (wbp == Dkey)
				{
					SetSnakeToMoveRight();
				}
			}
		}
	
	
}

void snake::CheckCollidingWithWall(Graphics & gfx)
{
	if (((snk[0].loc.x) * 10) <= 0 || ((snk[0].loc.y) * 10) <= 0)
	{
		STOPUPDATING = true;
	}
	if (((snk[0].loc.x) * 10) + 10 >= gfx.ScreenWidth || ((snk[0].loc.y) * 10) + 10 >= gfx.ScreenHeight)
	{
		STOPUPDATING = true;
	}
}

void snake::CheckIfEating(SnekEats & eats)
{
	if (eats.SnekEating(snk[0].loc))
	{
		score.IncrementScore();
		length++;
		eats.NextLocation();
	}
}

void snake::checkcollisionwithself()
{
	int i;
	for (i = 1; i < length; i++)
	{
		if (snk[0].loc.x == snk[i].loc.x && snk[0].loc.y == snk[i].loc.y)
		{
			STOPUPDATING = true;
		}
	}
}

void snake::DrawScoreForPlayer(Graphics & gfx)
{
	score.DrawScore(gfx);
}

void snake::ChangeVelocityBasedOnScore()
{
	int scr = score.GetScore();
	if (SnakeUpdateTimer > 0)
	{
		if (scr % 4 != 0)
		{
			CanChangeVelocity = true;
		}
		if (scr % 4 == 0)
		{
			if (CanChangeVelocity == true)
			{
				SnakeUpdateTimer=SnakeUpdateTimer-0.5;
				CanChangeVelocity = false;
			}
		}
	}
}


