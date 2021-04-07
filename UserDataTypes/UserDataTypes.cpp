
#include "Employee.h"
#include <iostream>
using namespace std;

//typedef double currency; // C-Style
//using currency = double; // C++ Style


int main()
{	
	Employee employee[5];
	unsigned short numEmployees;
	cout << "Number of Employees: ";
	cin >> numEmployees;

	for (int counter = 0;  counter < numEmployees; counter++) {
		employee[counter].Read();
	};

	for (int counter = 0; counter < numEmployees; counter++) {
		employee[counter].Write();
	};
}

/*Sandwich sandwich;
sandwich.Read();
sandwich.Write();

cout << SHOP_NAME << endl;*/

//#ifdef XBOX
//	cout << "xbox\n";
//#endif
//
//#ifdef _DEBUG
//	cout << "debug\n";
//#endif

	//currency wage; // 12.50f

	//enum Difficulty 
	//{
	//	Easy,
	//	Medium,
	//	Hard
	//};

	//Difficulty difficulty;
	//difficulty = Easy;


	//cout << sizeof(Difficulty) << endl;