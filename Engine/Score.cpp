#include "Score.h"

ScoreSetter::ScoreSetter(int PlyrNumber)
	:
	PlayerNumber(PlyrNumber)
{
	if (PlyrNumber == 1)
	{
		colour = { 0,0,255 };
		PlayerNumber = 1;
	}
	if (PlyrNumber == 2)
	{
		colour = { 255,0,0 };
		PlayerNumber = 2;
	}
}


void ScoreSetter::IncrementScore()
{
	ScorePrime++;
}

void ScoreSetter::DecrementScore()
{
	ScorePrime--;
}

void ScoreSetter::DecrementSetScore(int val_to_set_secore_to)
{
	if (val_to_set_secore_to <= ScorePrime)
		ScorePrime = val_to_set_secore_to;

}

void ScoreSetter::DrawScore(Graphics & gfx)
{
	if (PlayerNumber == 1)
	{
		int i;
		for (i = 0; i < ScorePrime; i++)
		{
			brd.ScoreToPixelDraw({ i + 1,2 }, gfx, colour);
		}
	}
	if (PlayerNumber == 2)
	{
		int i;
		for (i = 0; i < ScorePrime; i++)
		{
			brd.ScoreToPixelDraw({ 79 - i,2 }, gfx, colour);
		}
	}
}


