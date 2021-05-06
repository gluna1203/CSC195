#pragma once


template <typename T>
class Point
{
public:
	Point() : x{}, y{} {}
	Point(T x, T y) : x{x}, y{y} {}

private:
	T x, y;
};


template <class T, size_t Size>
class array
{
public:
	T& operator [] (size_t position)				{ return m_elements[position]; }
	const T& operator [] (size_t position) const	{ return m_elements[position]; }

	void swap(array& other);

private:
	T m_elements[Size]{};
};

template <class T, size_t Size>
void array<T, Size>::swap(array& other)
{
	for (size_t i = 0; i < Size; i++)
	{
		T temp = m_elements[i];
		m_elements[i] = other.m_elements[i];
		other.m_elements[i] = temp;
	}
}