#include "Point.h"
#include <iostream>
#include <limits>

Point::Point(char letter) 
{
	std::cout << "\nСоздание точки " << letter << std::endl;
	std::cout << "Введите координаты " << std::endl;
	if (Point::dimension == 0) 
	{
		coordinates.push_back(enter('p', std::numeric_limits<float>::min(), std::numeric_limits<float>::max()));
		coordinates.push_back(enter('f', 0, 2));
	}
	else for (int i = 0; i < Point::dimension; i++) 
	{		
		coordinates.push_back(enter(i));
	}

}

float enter(char letter, float minValue, float maxValue)
{
	float num = 0;

	while (true)
	{
		std::cout << letter << " = ";
		std::cin >> num;

		if ((std::cin.fail()) || std::cin.peek() != '\n' || num < minValue || num >maxValue)
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
float enter(int i)
{
	float num = 0;
	std::cout << i << " координата = ";

	while (true)
	{
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
float calc_side(Point A, Point B) 
{
	float sideSum = 0;
	if (Point::dimension == 0)
	{
		sideSum = sqrt(A.coordinates.at(0) * A.coordinates.at(0) + B.coordinates.at(0) * B.coordinates.at(0) - 2 *
			A.coordinates.at(0) * B.coordinates.at(0) * cos(A.coordinates.at(1) * 3.1415926f - B.coordinates.at(1) * 3.1415926f));
		return sideSum;
	}
	else for (int i = 0; i < Point::dimension; i++) 
	{
		sideSum += (B.coordinates.at(i) - A.coordinates.at(i)) * (B.coordinates.at(i) - A.coordinates.at(i));
	}
	return sqrt(sideSum);
}