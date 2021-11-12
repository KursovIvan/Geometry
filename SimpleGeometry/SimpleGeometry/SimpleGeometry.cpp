#include <iostream>
#include <conio.h>
#include <vector>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

bool inputCheck(int number, int minValue)
{
    if ((std::cin.fail()) || std::cin.peek() != '\n' || number < minValue || number < 0)
    {      
        std::cin.clear();
        std::cin.ignore(std::cin.rdbuf()->in_avail());
        return false;
    }
    return true;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int figuresNumber = 0;
	int dimension = 0;  
    while (true)
    {
        std::cout << "Введите количество фигур: ";
        std::cin >> figuresNumber;
        if (!inputCheck(figuresNumber, 1))
        {
            std::cout << "Некорректный ввод " << std::endl;
            continue;
        }
        else break;
    }
	while (true)
	{
        std::cout << "Введите измерение (0 - полярная система координат): ";
		std::cin >> dimension;
		if (!inputCheck(dimension, 0) || dimension == 1)
		{
            std::cout << "Некорректный ввод " << std::endl;
			continue;
		}
		else break;
	}

    std::vector<Figure*> Figures;
    for (int i = 0; i < figuresNumber; i++)
    {    
            int figureT = 0;
            while (true)
            {
                std::cout << "Введите число, чтобы создать фигуру" << "\n\t0 - треугольник"
                    << "\n\t1 - прямоугольник" << "\n\t2 - круг" << std::endl;
                std::cin >> figureT;
                if (!inputCheck(figureT, 0) || figureT > 2)
                {
                    std::cout << "Некорректный ввод " << std::endl;
                    continue;
                }
                else break;
            }

            switch (figureT)
            {
            case 0:
            {
                Figures.push_back(new Triangle(dimension));
                break;
            }
            case 1:
            {
                Figures.push_back(new Rectangle(dimension));
                break;
            }
            case 2:
            {
                Figures.push_back(new Circle(dimension));
                break;
            }
            }           
    }

    for (size_t i = 0; i < Figures.size(); i++)
    {
        for (size_t j = 0; j < Figures.size() - i - 1; j++)
        {
            if (Figures[j]->figureType > Figures[j + 1]->figureType)
            {
                Figure* temp = Figures[j];
                Figures[j] = Figures[j + 1];
                Figures[j + 1] = temp;
            }
        }
    }

    for (const auto& element : Figures)
    {
        element->show_figuretype();
        element->show_perimeter();
        element->show_square();
    }

    _getch();
    return 0;  
}