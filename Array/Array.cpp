//#include "Array.h"
//
//arr::array::array()
//{
//	//DEFAULT CON
//}

//arr::array::array(const std::initializer_list<int>& ilist)
//{
//	size_t i = 0;
//	for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
//	{
//		m_elements[i] = *iter;
//		i++;
//	}
//}
//
//int& arr::array::operator[](size_t position)
//{
//	return m_elements[position];
//}
//
//const int& arr::array::operator[](size_t position) const
//{
//	return m_elements[position];
//}
//
//int& arr::array::at(size_t position)
//{
//	return m_elements[position];
//}
//
//const int& arr::array::at(size_t position) const
//{
//	return m_elements[position];
//}
//
//int& arr::array::front()
//{
//	return m_elements[0]; //.front()
//}
//
//int& arr::array::back()
//{
//	return m_elements[size() - 1]; //.back()
//}
//
//int* arr::array::data()
//{
//	return m_elements;
//}
//
//void arr::array::fill(int value)
//{
//	for (int i = 0; i < size(); i++)
//	{
//		m_elements[i] = value;
//	}
//}
//
//void arr::array::swap(array& other)
//{
//	int copy[m_size]{};
//
//	for (int i = 0; i < size(); i++)
//	{
//		copy[i] = m_elements[i];
//	}
//
//	for (int i = 0; i < size(); i++)
//	{
//		m_elements[i] = other[i];
//	}
//
//	for (int i = 0; i < size(); i++)
//	{
//		other[i] = copy[i];
//	}
//}
//
//bool arr::array::empty() const //OVER THOUGHT METHOD
//{
//	/*if (size() == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}*/
//
//	return size() == 0;
//
//	/*if (m_size)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}*/
//}
//
//size_t arr::array::size() const
//{
//	return m_size;
//}
