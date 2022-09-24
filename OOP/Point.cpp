#include "Point.h"
#include <iostream>
#define _USE_MATH_DEFINES //????
#include <math.h>




Geom::Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;

}



Geom::AngleType Geom::TriangleAngel(Point p1, Point p2, Point p3)
{

	Point v1(p2.x - p1.x, p2.y - p1.y), v2(p3.x - p1.x, p3.y - p1.y);
	double angl1 = acos((v1.x * v2.x + v1.y * v2.y) / (sqrt(v1.x * v1.x + v1.y * v1.y) * sqrt(v2.x * v2.x + v2.y * v2.y))) * (180 / M_PI);

	v1 = Point(p1.x - p2.x, p1.y - p2.y), v2 = Point(p3.x - p2.x, p3.y - p2.y);
	double angl2 = acos((v1.x * v2.x + v1.y * v2.y) / (sqrt(v1.x * v1.x + v1.y * v1.y) * sqrt(v2.x * v2.x + v2.y * v2.y))) * (180 / M_PI);

	v1 = Point(p1.x - p3.x, p1.y - p3.y), v2 = Point(p2.x - p3.x, p2.y - p3.y);
	double angl3 = acos((v1.x * v2.x + v1.y * v2.y) / (sqrt(v1.x * v1.x + v1.y * v1.y) * sqrt(v2.x * v2.x + v2.y * v2.y))) * (180 / M_PI);

	if (angl1 == angl2 == angl3)
		return AngleType::Equilateral;

	if (((int)angl1 == 90) || ((int)angl2 == 90) || ((int)angl3 == 90))
		return  AngleType::Right;
	else if (((int)angl1 > 90) || ((int)angl2 > 90) || ((int)angl3 > 90))
		return AngleType::Obtuse;
	else
		return AngleType::Acute;


}



double Geom::TriangleS(Point p1, Point p2, Point p3)
{
	double result = math.abs(((p1.x - p3.x) * (p2.y - p3.y) - (p1.y - p3.y) * (p2.x - p3.x))) / 2;

	return result;
}

void Geom::Point::Print()
{
	std::cout << "X = " << this->x;
	std::cout << "Y = " << this->y;
}

Geom::Point:: ~Point() { };




