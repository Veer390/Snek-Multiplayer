#pragma once
#include"vector.h"
#include <random>
#include "board.h"

class SnekEats
{
private:
	vector loc;
	board brd;
	Color colour = { 255,255,255 };


	
	


public:
	SnekEats(vector StartingLocation);
	bool SnekEating(vector snekloc);
	void DrawSnekEats(Graphics& gfx);
	void NextLocation();
  


};