#include "Point.h"
#include <array>
#include <iostream>

//int max(int i1, int i2)
//{
//	return (i1 > i2) ? i1 : i2;
//}
//
//float max(float i1, float i2)
//{
//	return (i1 > i2) ? i1 : i2;
//}

template <typename T>
T max(T v1, T v2)
{
	return (v1 > v2) ? v1 : v2;
}

template <typename T>
T min(T v1, T v2)
{
	return (v1 < v2) ? v1 : v2;
}

template <typename T1, typename T2>
T1 max(T1 v1, T2 v2)
{
	return (v1 > v2) ? v1 : v2;
}



int main()
{
	Point<float> p1;
	Point<int> p2;

	//Point p3; Needs a type declared


	array<Point<int>, 20> points;
	std::array<float, 5> fnumbers;

	std::cout << max<int>(10, 14) << std::endl; // Declaring type is optional
	std::cout << max<float, int>(5.5f, 3) << std::endl;
	std::cout << max("Hello", "World") << std::endl;
}