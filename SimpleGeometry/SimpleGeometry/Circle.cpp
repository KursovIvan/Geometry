#include "Circle.h"
#include <iostream>

const float Pi = 3.1415926;

Circle::Circle() 
{
	std::cout << "\n�������� ����� " << std::endl;
	std::cout << "������� ���������� ������� " << std::endl;

	Point A('A');
	Point B('B');

	float radius = calc_side(A, B);

	this->perimeter = 2 * Pi * radius;
	this->square = Pi * radius * radius;
	this->show_perimeter();
	this->show_square();
}

void Circle::show_perimeter()
{
	std::cout << "����� ���������� = " << perimeter << std::endl;
}
void Circle::show_square()
{ 
	std::cout << "������� ����� = " << square << std::endl;
}