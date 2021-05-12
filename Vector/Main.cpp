#include <iostream>
#include "Vector.h"

template <typename T>
void Display(const vec::vector<T>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	/*int static_array[10];

	int* dynamic_array = new int[20];
	dynamic_array[5] = 5;
	delete[] dynamic_array;
	dynamic_array = new int[30];
	dynamic_array[25] = 10;*/

	//vec::vector<int> numbers{ 5, 25, 15};
	//numbers.push_back(23);
	//numbers.push_back(34);
	//numbers.resize(5);
	//numbers.push_back(5);
	//numbers.push_back(12);
	//numbers.pop_back();

	//for (size_t i = 0; i < numbers.size(); i++)
	//{
	//	std::cout << numbers[i] << std::endl;
	//}

	std::cout << "vector\n";
	vec::vector<int> numbers{ 43, 23, 56, 7, 16 };
	numbers[0] = 84;
	numbers.push_back(99);
	Display(numbers);

	std::cout << "copy\n";
	vec::vector<int> copy;
	copy = numbers;
	copy.pop_back();
	copy.pop_back();
	Display(copy);

	std::cout << "swap\n";
	numbers.swap(copy);
	Display(numbers);
	Display(copy);

	std::cout << "clear\n";
	copy.clear();
	Display(copy);

	std::cout << "assignment\n";
	copy = numbers;
	Display(numbers);

	std::cout << "resize\n";
	numbers.resize(10, 5);
	numbers.reserve(20);
	Display(numbers);

	std::cout << "front: " << numbers.front() << std::endl;
	std::cout << "back: " << numbers.back() << std::endl;
	std::cout << "size: " << numbers.size() << std::endl;
	std::cout << "max size: " << numbers.max_size() << std::endl;
	std::cout << "capacity: " << numbers.capacity() << std::endl;
	std::cout << "empty: " << numbers.empty() << std::endl;
	std::cout << "data: " << numbers.data() << std::endl;

}