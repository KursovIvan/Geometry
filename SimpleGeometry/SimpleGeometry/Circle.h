#pragma once
#include "Point.h"
#include "Figure.h"


class Circle : public Figure
{
public:

	Circle(int dimension);

	void show_perimeter() override;
	void show_square() override;
	void show_figuretype() override;
};