#include "figureTypes.h"

std::string enumToString(figureTypes type)
{
	switch (type)
	{
	case (figureTypes::typeTriangle):
	{
		return "Треугольник";
		break;
	}
	case (figureTypes::typeRectangle):
	{
		return "Прямоугольник";
		break;
	}
	case (figureTypes::typeCircle):
	{
		return "Круг";
		break;
	}
	}
}