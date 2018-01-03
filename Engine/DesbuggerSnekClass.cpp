#include "DesbuggerSnekClass.h"

void DebugSNEk::IncreaseScore(int & Score)
{
	Score = Score + 1;
}

void DebugSNEk::IncreaseLength(int & length)
{
	length = length + 1;
}

void DebugSNEk::IncreaseScoreAndLength(int & Score, int & length)
{
	IncreaseScore(Score);
	IncreaseLength(length);
}
