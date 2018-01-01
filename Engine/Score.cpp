#include "Score.h"

void ScoreSetter::SetColour(int plyrNo)
{
	if (plyrNo == 1)
		colour = { 0,0,255 };
	if (plyrNo == 2)
		colour = { 255,0,0 };

}
