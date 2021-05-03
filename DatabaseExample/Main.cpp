#include <iostream>
#include "Database.h"
using namespace std;

int main() 
{
	Database database;

	bool quit = false;
	while (!quit)
	{
		// Display menu
		cout << "1) Create\n";
		cout << "2) Display All\n";
		cout << "3) Display By Name\n";
		cout << "4) Display By Type\n";
		cout << "5) Quit\n";

		int selection;
		cout << "Enter Selection: ";
		cin >> selection;
		cout << endl;

		switch (selection)
		{
		case 1:
		{
			int type;
			cout << "1) Bird\n";
			cout << "2) Mammal\n";
			cout << "Enter Type: ";
			cin >> type;
			database.Create(static_cast<Animal::eType>(type));
		}
			break;
		case 2:
			database.DisplayAll();
			break;
		case 3:
		{
			string name;
			cout << "Enter Name: ";
			cin >> name;
			database.Display(name);
		}
			break;
		case 4:
		{
			int type;
			cout << "1) Bird\n";
			cout << "2) Mammal\n";
			cout << "Enter Type: ";
			cin >> type;
			database.Display(static_cast<Animal::eType>(type));
		}
			break;
		case 5:
			quit = true;
			break;
		default:
			break;
		}
	}
}