#include "Point.h"

namespace rlm 
{
	void Point::Add(const Point& point)
	{
		x += point.x;
		y += point.y;
	}
	Point Point::operator+(Point& point)
	{
		Point p;
		p.x = x + point.x;
		p.y = y + point.y;

		return p;
	}
	Point Point::operator-(Point& point)
	{
		Point p;
		p.x = x - point.x;
		p.y = y - point.y;

		return p;
	}
	Point Point::operator*(float s)
	{
		return Point(x * s, y * s);
	}
	void Point::Output(std::ostream& ostream)
	{
		ostream << x << " : " << y << std::endl;
	}
	void operator << (std::ostream& ostream, const Point& point)
	{
		ostream << point.x << " : " << point.y << std::endl;
	}
	void operator>>(std::istream& istream, Point& point)
	{
	}
}
