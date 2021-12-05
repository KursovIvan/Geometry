#pragma once
#include <vector>

class Point
{
	
public:

	Point(char letter);
	std::vector<float> coordinates;
	static int dimension;
	
};

float enter(char letter, float minValue, float maxValue);
float enter(int i);
float calc_side(Point A, Point B);