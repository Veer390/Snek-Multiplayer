#pragma once
#include "board.h"

class ScoreSetter
{
private:
	Color colour = { 255,255,255 };
    int ScorePrime = 0;
	int PlayerNumber;
	board brd;

public:
	ScoreSetter(int PlyrNumber);
	void IncrementScore();
	void DecrementScore();
	void DecrementSetScore(int val_to_set_secore_to);
	void DrawScore(Graphics& gfx);

};