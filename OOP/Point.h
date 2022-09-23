#pragma once

namespace Geom
{

	struct Point
	{
		double x;
		double y;

		Point(double, double);
		~Point();

		void Print();

	};



	enum AngleType
	{
		Acute = 1,
		Right = 2,
		Obtuse = 3,
		Equilateral = 4

	};


	AngleType TriangleAngel(Point, Point, Point);

	double TriangleS(Point, Point, Point);






};