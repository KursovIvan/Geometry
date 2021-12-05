#include "Triangle.h"
#include <iostream>

Triangle::Triangle()
{
	std::cout << "\n�������� �������������� ������������ " << std::endl;
	while (true)
	{
		std::cout << "\n����� ���������� ������� ��������������� " << std::endl;

		Point A('A');
		Point B('B');
		Point C('C');

		float A_side = calc_side(A, B);
		float B_side = calc_side(B, C);
		float C_side = calc_side(C, A);

		if ((A_side + B_side > C_side) && A_side != 0 && B_side != 0 && C_side != 0)
		{
			this->perimeter = A_side + B_side + C_side;
			float half_perimeter = perimeter / 2.0f;
			this->square = sqrt(half_perimeter * (half_perimeter - A_side) * (half_perimeter - B_side) * (half_perimeter - C_side));
			break;
		}
		else 
		{
			std::cout << "������������ ���� " << std::endl;
		}	
	}
	this->figureType = figureTypes::typeTriangle;
}

void Triangle::show_perimeter()
{
	std::cout << "�������� ������������ = " << perimeter << std::endl;
}
void Triangle::show_square()
{
	std::cout << "������� ������������ = " << square << std::endl;
}
void Triangle::show_figuretype()
{
	std::cout << enumToString(figureType) << std::endl;
}