#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
	std::cout << "\n�������� �������������� " << std::endl;
	while (true)
	{
		std::cout << "����� ���������� ������� ��������������� " << std::endl;

		Point A('A');
		Point B('B');
		Point C('C');

		float A_side = calc_side(A, B);
		float B_side = calc_side(B, C);
		float hypotenuse = calc_side(A, C);

		if ((hypotenuse * hypotenuse == B_side * B_side + A_side * A_side) && A_side != 0 && B_side != 0)
		{
			this->perimeter = (A_side + B_side) * 2;
			this->square = A_side * B_side;
			break;
		}
		else 
		{
			std::cout << "������������ ���� " << std::endl;
		}
	}
	this->figureType = figureTypes::typeRectangle;
}

void Rectangle::show_perimeter()
{
	std::cout << "�������� �������������� = " << perimeter << std::endl;
}
void Rectangle::show_square()
{
	std::cout << "������� �������������� = " << square << std::endl;
}
void Rectangle::show_figuretype()
{
	std::cout << enumToString(figureType) << std::endl;
}