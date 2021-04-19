//#include "Animal.h"
#include "Bird.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers;
	cout << numbers.size() << endl;
	numbers.push_back(10);
	cout <<numbers.size() << endl;

	vector<Animal*> animals;
	animals.push_back(new Bird(12, 14.5f));
	Bird* bird = new Bird(5, 10.5f);
	bird->Fly();
	animals.push_back(bird);

	for (Animal* animal : animals)
	{
		animal->Speak();
		if (dynamic_cast<Bird*>(animal))
		{
			dynamic_cast<Bird*>(animal)->Fly();
		}
	}
	

	//Bird bird(12, 14.5f);
	//bird.Speak();
	// 
	//Animal animal;
	//animal.Speak();
	//animal.SetLifespan(10);

	//Animal* pAnimal = &animal;
	//(*pAnimal).Speak();
	//pAnimal->Speak();

}