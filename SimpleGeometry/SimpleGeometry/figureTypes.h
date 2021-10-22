#pragma once
#include <string>

enum class figureTypes
{
	typeTriangle,
	typeRectangle,
	typeCircle
};

std::string enumToString(figureTypes type);
