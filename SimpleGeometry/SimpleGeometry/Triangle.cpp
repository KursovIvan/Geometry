#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int dimension)
{
	std::cout << "\nСоздание невырожденного треугольника " << std::endl;
	while (true)
	{
		std::cout << "\nТочки необходимо вводить последовательно " << std::endl;

		Point A('A', dimension);
		Point B('B', dimension);
		Point C('C', dimension);

		float A_side = calc_side(A, B, dimension);
		float B_side = calc_side(B, C, dimension);
		float C_side = calc_side(C, A, dimension);

		if ((A_side + B_side > C_side) && A_side != 0 && B_side != 0 && C_side != 0)
		{
			this->perimeter = A_side + B_side + C_side;
			float half_perimeter = perimeter / 2.0f;
			this->square = sqrt(half_perimeter * (half_perimeter - A_side) * (half_perimeter - B_side) * (half_perimeter - C_side));
			break;
		}
		else 
		{
			std::cout << "Некорректный ввод " << std::endl;
		}	
	}
	this->figureType = figureTypes::typeTriangle;
}

void Triangle::show_perimeter()
{
	std::cout << "Периметр треугольника = " << perimeter << std::endl;
}
void Triangle::show_square()
{
	std::cout << "Площадь треугольника = " << square << std::endl;
}
void Triangle::show_figuretype()
{
	std::cout << enumToString(figureType) << std::endl;
}