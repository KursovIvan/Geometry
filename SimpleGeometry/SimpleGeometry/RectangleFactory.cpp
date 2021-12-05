#include "RectangleFactory.h"
#include "Rectangle.h"

Figure* RectangleFactory::CreateFigure()
{
	return new Rectangle();
}