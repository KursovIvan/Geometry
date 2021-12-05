#pragma once
#include "Figure.h"

class FiguresFactory
{
public: 
	virtual Figure* CreateFigure() = 0;
};