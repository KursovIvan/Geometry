#pragma once

class Point
{
public:

	Point(char letter);

	float get_x();
	float get_y();
	
private:

	float x;
	float y;
};

float calc_side(Point A, Point B);
float enter(char letter);