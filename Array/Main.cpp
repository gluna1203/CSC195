#include <iostream>
#include "Array.h"

void DisplayArray(const arr::array<std::string, 4>& a)
{ 
	for (size_t i = 0; i < a.size(); i++) 
	{ 
		std::cout << a[i] << " "; 
	}
	std::cout << std::endl;
}

int main()
{
	std::cout << "**array**\n";
	arr::array<std::string, 4> words{ "hello", "world", "neumont", "college" };
	words[0] = "welcome";
	DisplayArray(words);

	std::cout << "**copy**\n";
	arr::array<std::string, 4> copy{ words };
	copy[1] = "to";
	DisplayArray(copy);

	std::cout << "**swap**\n";
	words.swap(copy);
	DisplayArray(words);
	DisplayArray(copy);

	std::cout << "**fill**\n";
	copy.fill("now!");
	DisplayArray(copy);

	std::cout << "**info**\n";

	std::cout << "front: " << words.front() << std::endl;
	std::cout << "back: " << words.back() << std::endl;
	std::cout << "size: " << words.size() << std::endl;
	std::cout << "data: " << words.data() << std::endl;

	arr::array<char, 5> test{};

	std::cout << test.empty();


}