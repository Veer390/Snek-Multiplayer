#pragma once

class vector
{
public:
	int x;
	int y;
	
	vector operator + (vector vec1)
	{
		vector temp;
		temp.x = x + vec1.x;
		temp.y = y + vec1.y;
		return temp;
	}
	
	
	
	

};