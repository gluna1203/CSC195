#include <iostream>
#include "Point.h"
using namespace rlm;

//Point operator + (Point& p1, Point& p2)
//{
//	Point p;
//	p.x = p1.x + p2.x;
//	p.y = p1.y + p2.y;
//
//	return p;
//}

int main()
{
	Point point1(12, 8);
	Point point2(10, 5);

	point1.Output(std::cout);
	//point1.Add(point2);
	Point point3 = point1 + point2;
	point3 = point1 * 10.0f;
	point3.Output(std::cout);

	std::cout << point3;
}