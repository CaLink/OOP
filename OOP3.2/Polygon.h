#pragma once
#include <vector>
#include <iostream>
#include <string>

class Point
{
public:
	int x;
	int y;

	Point(int, int);

};

class Polygon
{
public:
	std::vector<Point> arr;
	int count;

	Polygon();
	Polygon(std::vector<Point>);
	void Info();
	void Add(Point);
	void Dell(int);

	double S(int);

	operator double() const;
	//explicit operator double() const;

	operator std::string() const;
	//explicit operator std::string() const;

	
};

