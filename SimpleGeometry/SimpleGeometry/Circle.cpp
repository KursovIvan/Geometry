#include "Circle.h"
#include <iostream>

const float Pi = 3.1415926f;

Circle::Circle(int dimension) 
{
	std::cout << "\nСоздание круга " << std::endl;
	std::cout << "Введите координаты радиуса " << std::endl;

	Point A('A', dimension);
	Point B('B', dimension);

	float radius = calc_side(A, B, dimension);

	this->perimeter = 2 * Pi * radius;
	this->square = Pi * radius * radius;
	this->figureType = figureTypes::typeCircle;
}

void Circle::show_perimeter()
{
	std::cout << "Длина окружности = " << perimeter << std::endl;
}
void Circle::show_square()
{ 
	std::cout << "Площадь круга = " << square << std::endl;
}
void Circle::show_figuretype()
{
	std::cout << enumToString(figureType) << std::endl;
}