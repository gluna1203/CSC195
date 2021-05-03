#include "Database.h"
#include <iostream>

Database::~Database()
{
	for (Animal* animal : m_animals)
	{
		delete animal;
	}
	m_animals.clear();
}

void Database::Create(Animal::eType type)
{
	Animal* animal = nullptr;
	switch (type)
	{
	case Animal::eType::Bird:
		animal = new Bird;
		break;
	case Animal::eType::Mammal:
		break;
	default:
		break;
	}

	animal->Read(std::cout, std::cin);
	m_animals.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal* animal : m_animals)
	{
		animal->Write(std::cout);
	}
}

void Database::Display(std::string name)
{
	for (Animal* animal : m_animals)
	{
		if (name == animal->GetName())
		{
			animal->Write(std::cout);
		}
	}
}

void Database::Display(Animal::eType type)
{
	for (Animal* animal : m_animals)
	{
		if (type == animal->GetType())
		{
			animal->Write(std::cout);
		}
	}
}
