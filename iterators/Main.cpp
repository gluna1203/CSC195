#include <iostream>
#include <list>

template <typename T, size_t Size>
class array
{
public:
	struct iterator
	{
		iterator(T* ptr) : _ptr{ ptr } {}

		T& operator * () const { return *_ptr; }
		T* operator -> () { return _ptr; }

		iterator& operator ++ () { _ptr++; return *this; } //prefix
		iterator  operator ++ (int)
		{
			iterator temp = *this;
			this->_ptr++;
			return temp;
		} //postfix

		friend bool operator == (const iterator& a, const iterator& b) { return a._ptr == b._ptr; }
		friend bool operator != (const iterator& a, const iterator& b) { return a._ptr != b._ptr; }

		T* _ptr = { nullptr };
	};

public:
	T& operator [] (size_t position) { return _values[position]; }

	iterator begin() { return iterator{ _values }; }
	iterator end() { return iterator{ &_values[Size] }; }

private:
	T _values[Size];
};

int main()
{
	array<int, 5> numbers;
	numbers[0] = 3;
	numbers[1] = 23;
	numbers[2] = 40;
	numbers[3] = 67;
	numbers[4] = 21;

	for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	std::list<int> l{ 1, 2, 3 };
	for (auto iter = l.begin(); iter != l.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	for (int number : numbers)
	{
		std::cout << number << std::endl;
	}

	auto iter = std::find(numbers.begin(), numbers.end(), 40);
	if (iter != numbers.end())
	{
		std::cout << "found: " << *iter << std::endl;
	}

	//std::cout << "count: " << std::count(numbers.begin(), numbers.end(), 40) << std::endl;

	/*int i = 5;
	std::cout << i++ << std::endl;
	std::cout << i << std::endl;*/
}