#include "figureTypes.h"

std::string enumToString(figureTypes type)
{
	switch (type)
	{
	case (figureTypes::typeTriangle):
	{
		return "�����������";
		break;
	}
	case (figureTypes::typeRectangle):
	{
		return "�������������";
		break;
	}
	case (figureTypes::typeCircle):
	{
		return "����";
		break;
	}
	}
}