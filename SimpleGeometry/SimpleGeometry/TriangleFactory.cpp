#include "TriangleFactory.h"
#include "Triangle.h"

Figure* TriangleFactory::CreateFigure()
{
	return new Triangle();
}