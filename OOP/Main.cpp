#include "Animal.h"
#include <iostream>
using namespace std;

int main()
{
	Animal animal;
	animal.Speak();
	animal.SetLifespan(10);

	Animal* pAnimal = &animal;
	(*pAnimal).Speak();
	pAnimal->Speak();

}