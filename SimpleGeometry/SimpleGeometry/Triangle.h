#pragma once
#include "Point.h"
#include "Figure.h"

class Triangle : public Figure
{
public:

	Triangle(int dimension);

	void show_perimeter() override;
	void show_square() override;
	void show_figuretype() override;
};