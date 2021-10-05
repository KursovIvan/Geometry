#include "Point.h"
#include <iostream>

Point::Point(char letter)
{
	std::cout << "\nСоздание точки " << letter << std::endl;
	std::cout << "Введите координаты " << std::endl;

	this->x = enter('x');
	this->y = enter('y');
}

float Point::get_x()
{
	return x;
}
float Point::get_y()
{
	return y;
}
float calc_side(Point A, Point B)
{
	return sqrt((B.get_x() - A.get_x()) * (B.get_x() - A.get_x()) + (B.get_y() - A.get_y()) * (B.get_y() - A.get_y()));
}
float enter(char letter)
{
	float num = 0;

	while (true)
	{
		std::cout << letter << " = ";
		std::cin >> num;

		if ((std::cin.fail()) || std::cin.peek() != '\n')
		{
			std::cout << "Некорректный ввод " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			continue;
		}
		else break;
	}

	return num;
}