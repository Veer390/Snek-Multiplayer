#include "Eatable.h"

void SnekEats::NextLocation()
{
	int width = Graphics::ScreenWidth;
	int height = Graphics::ScreenHeight;
	width = width / 10;
	height = height / 10;
	std::random_device random;
	std::mt19937 range(random());
	std::uniform_int_distribution<int> xDist(0, width);
	std::uniform_int_distribution<int> yDist(0, height);
	loc.x = xDist(range);
	loc.y = yDist(range);
}

void SnekEats::DrawSnekEats(Graphics & gfx)
{
	brd.GridToPixelDraw(loc, gfx, colour);
}

SnekEats::SnekEats(vector StartingLocation)
{
	loc.x = StartingLocation.x;
	loc.y = StartingLocation.y;
}

bool SnekEats::SnekEating(vector snekloc)
{
	if (snekloc.x == loc.x&& snekloc.y == loc.y)
	{
		return true;
	}
	else return false;
}
