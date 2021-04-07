#include "Sandwich.h"
#include <iostream>

void Sandwich::Read() {
	std::cout << "Enter Name: ";
	std::cin >> name;
};

void Sandwich::Write() {
	std::cout << "Name: " << name << std::endl;
};