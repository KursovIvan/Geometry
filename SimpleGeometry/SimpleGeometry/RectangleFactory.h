#pragma once
#include "FiguresFactory.h"

class RectangleFactory : public FiguresFactory
{
	Figure* CreateFigure() override;
};