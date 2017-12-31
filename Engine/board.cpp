#include "board.h"
#include <assert.h>

void board::GridToPixelDraw(vector vec, Graphics & gfx,Color c)
{
	assert(vec.x < gfx.ScreenWidth / 10);
	assert(vec.y < gfx.ScreenHeight / 10);
	int i, j;
	int iX = vec.x * 10;
	int iY = vec.y * 10;
	for (i = iX; i < iX + 10; i++)
	{
		for (j = iY; j < iY + 10; j++)
		{
			gfx.PutPixel(i, j, c);
		}
		
	}
}
