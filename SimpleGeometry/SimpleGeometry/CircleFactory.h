#pragma once
#include "FiguresFactory.h"

class CircleFactory : public FiguresFactory
{
	Figure* CreateFigure() override;
};