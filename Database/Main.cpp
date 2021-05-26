#include <iostream>
#include "DataBase.h"
#include <string>
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
using namespace std;



int main()
{
	DataBase* database = new DataBase;
	bool keepGoing = true;
	string name;
	
	
	while (keepGoing == true)
	{
		cout << "1) Add" << endl;
		cout << "2) Display All" << endl;
		cout << "3) Display by Name" << endl;
		cout << "4) Display by Type" << endl;
		cout << "5) Load" << endl;
		cout << "6) Save" << endl;
		cout << "7) Remove" << endl;
		cout << endl;
		cout << "0) Exit" << endl;
		cout << "Make Selection: ";
		int choice = 0;
		cin >> choice;

		switch (choice)
		{
		case 1:
			database->Add();
			break;
		case 2:
			database->DisplayAll();
			break;
		case 3:
			cout << "What is the name of the object you are searching? " << endl;
			cin >> name;
			database->DisplayAll(name);
			break;
		case 4:
			cout << "What Product were you searching for? " << endl;
			cout << "1) Movie" << endl;
			cout << "2) Music" << endl;
			unsigned short int num;
			cin >> num;
			switch (static_cast<Products::object>(num))
			{
				case Products::object::movie:
					database->Display(Products::object::movie);
					break;
				case Products::object::music:
					database->Display(Products::object::music);
					break;
			default:
				cout << "Enter a Number Between 1-2" << endl;
				break;
			}
			break;
		case 5:
		{
			cout << "Enter File Name: ";
			string name;
			cin >> name;
			database->Load(name+".txt");
		}
		cout << endl;
		cout << "Data Loaded!\n";
			break;
		case 6:
		{
			cout << "Enter File Name: ";
			string name;
			cin >> name;
			database->Save(name+".txt");
		}
		cout << endl;
		cout << "Data Saved!\n";
			break;
		case 7:
			cout << "1) All\n";
			cout << "2) Name\n";
			cout << "3) Type\n";
			cout << "enter: ";
			int selection;
			std::cin >> selection;
			if (selection == 1)
			{
				database->deleteList();
			}
			else if (selection == 2)
			{
				{
					cout << "Enter Name: ";
					string name;
					cin >> name;
					database->Remove(name);
				}
			}
			else 
			{
				{
					cout << "1) Movie" << endl;
					cout << "2) Music" << endl;
					cout << "enter: ";
					int type;
					cin >> type;
					database->Remove(static_cast<Products::object>(type));
				}
			}
			break;
		case 0:
			keepGoing = false;
			cout << endl;
			cout << "Ending Program GoodBye!" << endl;
			cout << endl;
			delete database;
			break;
		default:
			cout << "Enter a Number Between 0-7" << endl;
			break;
		}
	}
	
	_CrtDumpMemoryLeaks();
}