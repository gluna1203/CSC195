#pragma once
#include <iostream>

class Animal
{
public:
	Animal() 
	{ 
		std::cout << "constructor\n";
		m_lifespan = 10; 
		m_p = new int(40);
	}
	Animal(int lifespan) { m_lifespan = lifespan;  }
	~Animal() 
	{
		std::cout << "destructor\n";
		delete m_p;
	}

	virtual void Speak() = 0; // Pure Virtual Function (Abstract)

	int GetLifespan() { return m_lifespan; }
	void SetLifespan(int lifespan) 
	{ 
		if (lifespan < 200) m_lifespan = lifespan; 
	}

protected:
	int m_lifespan = 0;
	int* m_p = nullptr;
};