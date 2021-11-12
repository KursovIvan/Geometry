#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int dimension)
{
	std::cout << "\nСоздание прямоугольника " << std::endl;
	while (true)
	{
		std::cout << "Точки необходимо вводить последовательно " << std::endl;

		Point A('A', dimension);
		Point B('B', dimension);
		Point C('C', dimension);

		float A_side = calc_side(A, B, dimension);
		float B_side = calc_side(B, C, dimension);
		float hypotenuse = calc_side(A, C, dimension);

		if ((hypotenuse * hypotenuse == B_side * B_side + A_side * A_side) && A_side != 0 && B_side != 0)
		{
			this->perimeter = (A_side + B_side) * 2;
			this->square = A_side * B_side;
			break;
		}
		else 
		{
			std::cout << "Некорректный ввод " << std::endl;
		}
	}
	this->figureType = figureTypes::typeRectangle;
}

void Rectangle::show_perimeter()
{
	std::cout << "Периметр прямоугольника = " << perimeter << std::endl;
}
void Rectangle::show_square()
{
	std::cout << "Площадь прямоугольника = " << square << std::endl;
}
void Rectangle::show_figuretype()
{
	std::cout << enumToString(figureType) << std::endl;
}