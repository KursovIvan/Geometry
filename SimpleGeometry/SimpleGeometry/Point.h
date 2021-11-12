#pragma once
#include <vector>

class Point
{
public:

	Point(char letter, int dimension);
	std::vector<float> coordinates;
};

float enter(char letter, float minValue, float maxValue);
float enter(int i);
float calc_side(Point A, Point B, int dimension);