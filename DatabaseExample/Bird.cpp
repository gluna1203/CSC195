#include "Bird.h"
#include <iostream>

void Bird::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "Enter Number of Eggs: ";
	istream >> m_numEggs;
}

void Bird::Write(std::ostream& ostream)
{
	Animal::Write(ostream);

	ostream << "Number of Eggs: " << m_numEggs << std::endl;
}
