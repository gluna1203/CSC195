// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string name;
	char initial;
	short age = 0;
	bool isAdult = false;
	int zipcode = 0;
	double wage = 0.0;
	short daysWorked = 0;
	short hoursWorkedPerDay[7];

	const float TAX = 0.2f;

	cout << "Enter First Name: " << endl;
	cin >> name;
	cout << "Enter Last Inital: " << endl;
	cin >> initial;
	
	cout << "Enter Age: " << endl;
	cin >> age;
	
	if (age >= 18) {
		isAdult = true;
	}
	else {
		cout << "(Minor)" << endl;
	}
	
	cout << "Enter ZipCode: " << endl;
	cin >> zipcode;
	cout << "Enter Wage: " << endl;
	cin >> wage;
	cout << "Enter Day's Worked: " << endl;
	cin >> daysWorked;

	

	int totalHours = 0;
	for (int i = 0; i < daysWorked; i++) {

		cout << "Enter the hours worked for day " << i+1 << ": ";
		cin >> hoursWorkedPerDay[i];

	}

	

	for (int i = 0; i < daysWorked; i++) {
		totalHours = hoursWorkedPerDay[i] + totalHours;
	}

	int grossIncome = totalHours * wage;
	int netIncome = grossIncome - (grossIncome * TAX);

	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << endl;
	cout << "Gross Income: " << grossIncome << endl;
	cout << "Net Income: " << netIncome << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
