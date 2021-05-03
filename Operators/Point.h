#pragma once
#include <iostream>

namespace rlm 
{
	class Point
	{
	public:
		Point() : x{ 0 }, y{ 0 } {}
		Point(float x, float y) : x{ x }, y{ y } {}

		void Add(const Point& point);

		Point operator + (Point& point);
		Point operator - (Point& point);
		Point operator * (float s);
		//bool operator == (Point* point);

		void Output(std::ostream& ostream);
		friend void operator << (std::ostream& ostream, const Point& point);
		friend void operator >> (std::istream& istream, Point& point);

	private:
		float x, y;
	};
}

