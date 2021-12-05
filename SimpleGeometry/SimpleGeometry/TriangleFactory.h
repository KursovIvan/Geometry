#pragma once
#include "FiguresFactory.h"

class TriangleFactory : public FiguresFactory
{
	Figure* CreateFigure() override;
};