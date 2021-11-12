#pragma once
#include "figureTypes.h"

class Figure
{
protected:
	float perimeter;
	float square;	

public:
	figureTypes figureType;
	virtual void show_perimeter() = 0;
	virtual void show_square() = 0;
	virtual void show_figuretype() = 0;
};
