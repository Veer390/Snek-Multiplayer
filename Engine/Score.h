#pragma once
#include "board.h"

class ScoreSetter
{
private:
	Color colour;
    int ScorePrime = 0;
	
	board brd;

public:
	int PlayerNumber;
	ScoreSetter(int PlyrNumber);
	void IncrementScore();
	void DecrementScore();
	void DecrementSetScore(int val_to_set_secore_to);
	void DrawScore(Graphics& gfx);

};