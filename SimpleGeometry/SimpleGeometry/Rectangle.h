#pragma once
#include "Point.h"
#include "Figure.h"

class Rectangle : public Figure
{
public:
	
	Rectangle();

	void show_perimeter() override;
	void show_square() override;
	void show_figuretype() override;
};