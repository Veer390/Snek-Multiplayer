#pragma once

#include "vector.h"
#include "Graphics.h"
#include "Colors.h"

class board
{
public:
	void GridToPixelDraw(vector vec, Graphics& gfx,Color c);
	void ScoreToPixelDraw(vector vec, Graphics& gfx, Color c);


};