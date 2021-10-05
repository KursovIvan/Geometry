#pragma once
#include "Point.h"
#include "Figure.h"


class Circle : public Figure
{
public:

	Circle();

	void show_perimeter() override;
	void show_square() override;
};