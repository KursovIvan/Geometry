#pragma once
class Figure
{
protected:

	float perimeter;
	float square;

public:

	virtual void show_perimeter() = 0;
	virtual void show_square() = 0;
};