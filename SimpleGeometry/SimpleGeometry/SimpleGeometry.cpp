#include <iostream>
#include <conio.h>
#include <vector>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

bool inputCheck(int number)
{
    if ((std::cin.fail()) || std::cin.peek() != '\n' || number % 1 != 0 || number < 0)
    {
        std::cout << "Некорректный ввод " << std::endl;
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
    std::cout << "Введите количество фигур: ";
    while (true)
    {
        std::cin >> figuresNumber;
        if (!inputCheck(figuresNumber))
        {
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
                if (!inputCheck(figureT) || figureT > 2)
                {
                    continue;
                }
                else break;
            }

            switch (figureT)
            {
            case 0:
            {
                Figures.push_back(new Triangle);
                break;
            }
            case 1:
            {
                Figures.push_back(new Rectangle);
                break;
            }
            case 2:
            {
                Figures.push_back(new Circle);
                break;
            }
            }           
    }

    for (int i = 0; i < Figures.size(); i++)
    {
        for (int j = 0; j < Figures.size() - i - 1; j++)
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
    }

    _getch();
    return 0;  
}