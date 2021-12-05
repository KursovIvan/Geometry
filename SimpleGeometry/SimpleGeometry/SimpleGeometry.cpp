#include <iostream>
#include <conio.h>
#include <vector>
#include "Figure.h"
#include "Point.h"
#include "FiguresFactory.h"
#include "TriangleFactory.h"
#include "RectangleFactory.h"
#include "CircleFactory.h"

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

int Point::dimension;
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
    Point::dimension = dimension;
    std::vector<Figure*> figures;
    FiguresFactory* factory;
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
                factory = new TriangleFactory;
                figures.push_back(factory->CreateFigure());
                break;
            }
            case 1:
            {
                factory = new RectangleFactory;
                figures.push_back(factory->CreateFigure());
                break;
            }
            case 2:
            {
                factory = new CircleFactory;
                figures.push_back(factory->CreateFigure());
                break;
            }
            }           
    }

    for (size_t i = 0; i < figures.size(); i++)
    {
        for (size_t j = 0; j < figures.size() - i - 1; j++)
        {
            if (figures[j]->figureType > figures[j + 1]->figureType)
            {
                Figure* temp = figures[j];
                figures[j] = figures[j + 1];
                figures[j + 1] = temp;
            }
        }
    }

    for (const auto& element : figures)
    {
        element->show_figuretype();
        element->show_perimeter();
        element->show_square();
    }

    _getch();
    return 0;  
}