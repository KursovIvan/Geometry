#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
	std::cout << "\nСоздание невырожденного треугольника " << std::endl;
	while (true)
	{
		std::cout << "\nТочки необходимо вводить последовательно " << std::endl;

		Point A('A');
		Point B('B');
		Point C('C');

		float A_side = calc_side(A, B);
		float B_side = calc_side(B, C);
		float C_side = calc_side(C, A);

		if ((A_side + B_side > C_side) && A_side != 0 && B_side != 0 && C_side != 0)
		{
			this->perimeter = A_side + B_side + C_side;
			float half_perimeter = perimeter / 2;
			this->square = sqrt(half_perimeter * (half_perimeter - A_side) * (half_perimeter - B_side) * (half_perimeter - C_side));
			break;
		}
		else 
		{
			std::cout << "Некорректный ввод " << std::endl;
		}	
	}
	this->show_perimeter();
	this->show_square();
}

void Triangle::show_perimeter()
{
	std::cout << "Периметр треугольника = " << perimeter << std::endl;
}
void Triangle::show_square()
{
	std::cout << "Площадь треугольника = " << square << std::endl;
}