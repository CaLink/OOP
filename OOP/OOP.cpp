#include <iostream>
#include "Point.h"
#include <string>

using namespace Geom;

int main()
{
	setlocale(LC_ALL, "Russian");

	Point p1(1, 1), p2(2, 2), p3(3, 1);

	std::cout << "Площадь треугольника: " << Geom::TriangleS(p1, p2, p3) << '\n';

	std::string res = "";


	switch ((int)Geom::TriangleAngel(p1, p2, p3))
	{
	case 1: res = "Острый"; break;
	case 2: res = "Прямой"; break;
	case 3: res = "Тупой"; break;
	case 4: res = "Равносторонний"; break;
	}

	std::cout << "Тип треугольника: " << res << '\n';
}

