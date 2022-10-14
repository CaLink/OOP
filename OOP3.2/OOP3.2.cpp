#include "Polygon.h"

int main()
{
    std::vector<Point> arr = { Point(0,4),Point(4,4),Point(4,0) };

    Polygon pol(arr);
    pol.Info();

    pol.Add(Point(0, 0));
    pol.Info();

    //pol.Dell(2);
    pol.Info();
    std::cout << (std::string)pol<<'\n';
    std::cout << (double)pol;
}
