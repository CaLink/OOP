#include "Polygon.h"


Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Polygon::Polygon()
{
	count = 0;
	arr = {};
}

Polygon::Polygon(std::vector<Point> arr)
{
	this->arr = arr;
	count = arr.size();
}

void Polygon::Info()
{
	std::cout << "Count: " << count << "\nSet: ";

	for (Point i : arr)
	{
		std::cout << i.x << ',' << i.y << ' ';
	}
	std::cout << '\n';
}

void Polygon::Add(Point dot)
{
	arr.push_back(dot);
	count++;
}

void Polygon::Dell(int id)
{
	if (count <= 0 || id >= count)
		return;
	else
	{
		arr.erase(arr.begin()+id-1);
		count--;
	}
}

Polygon::operator double() const
{
	double ret = 0;

	int j = count - 1;
	for (int i = 0; i < count; i++)
	{
		ret+= (arr[j].x + arr[i].x) * (arr[j].y - arr[i].y);
		j = i; // j is previous vertex to i
	}

	return abs(ret*0.5);
}

Polygon::operator std::string() const
{
	std::string str = "";
	for (Point i : arr)
		str += "{" + std::to_string(i.x) + ',' + std::to_string(i.y) + "},";
	return str;
}

