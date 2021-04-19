#pragma once
#include "Animal.h"
#include <iostream>
class Bird : public Animal
{
public:
	Bird(int lifespan, float speed) : Animal(lifespan) //Calls default Constructor is not specified
	{
		m_flightSpeed = speed;
		std::cout << "Bird constructor\n";
	}
	void Speak() override;

	void Fly();

protected:
	float m_flightSpeed = 0.0f;
};

