#include "snek.h"

snake::snake(int PlayerNumber)
{
	plyrNo = PlayerNumber;
}

/*snake::~snake()
{
	length = 0;
}*/

void snake::MoveSnake()
{
	int i;
	SnakeRealTimer++;
	if (SnakeRealTimer >= SnakeUpdateTimer)
	{
		snk[0].loc.x = snk[0].loc.x + vx;
		snk[0].loc.y = snk[0].loc.y + vy;
		SnakeRealTimer = 0;
	}
	for (i = length-1; i > 0; i--)
	{
		snk[i].loc.x = snk[i - 1].loc.x;
		snk[i].loc.y = snk[i - 1].loc.y;
	}
}

void snake::DrawSnake(Graphics& gfx)
{
	int i;
	for (i = 0; i < length; i++)
	{
		brd.GridToPixelDraw(snk[i].loc, gfx, { 255,255,255 });
	}
}

void snake::UpdateSnake(Graphics& gfx, Keyboard& kbd)
{
	
  SnakeInput(kbd);
  MoveSnake();
  DrawSnake(gfx);
}

void snake::SnakeInput(Keyboard& kbd)
{
	if (plyrNo == 1)
	{
		WhichButtonPressed wbp;
		wbp = inp.player1input(kbd);
		if (wbp == plyr1UP)
		{
			vy = -1;
			vx = 0;
		}
		if (wbp == plyr1Down)
		{
			vy = 1;
			vx = 0;
		}
		if (wbp == plyr1Right)
		{
			vy = 0;
			vx = 1;
		}
		if (wbp == plyr1Left)
		{
			vy = 0;
			vx = -1;
		}
	}
	if (plyrNo == 2)
	{
		WhichButtonPressed wbp;
		wbp = inp.player2input(kbd);
		if (wbp == plyr2UP)
		{
			vy = -1;
			vx = 0;
		}
		if (wbp == plyr2Down)
		{
			vy = 1;
			vx = 0;
		}
		if (wbp == plyr2Right)
		{
			vy = 0;
			vx = 1;
		}
		if (wbp == plyr2Left)
		{
			vy = 0;
			vx = -1;
		}
	}
}


