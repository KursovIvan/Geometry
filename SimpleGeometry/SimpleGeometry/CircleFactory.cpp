#include "CircleFactory.h"
#include "Circle.h"

Figure* CircleFactory::CreateFigure()
{
	return new Circle();
}