#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.02f;

void Employee::Read() {
	cout << "'\nEnter First Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout << "Enter Zipcode: ";
	cin >> zipcode;
	cout << "Enter Wage: ";
	cin >> wage;
	cout << "Enter Day(s) Worked: ";
	cin >> daysWorked;


	for (int i = 0; i < daysWorked; i++) {

		cout << "Enter the hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];

	}

};

void Employee::Write() {
	int totalHours = 0;

	for (int i = 0; i < daysWorked; i++) {
		totalHours = hoursWorkedPerDay[i] + totalHours;
	}

	int grossIncome = totalHours * wage;
	int netIncome = grossIncome - (grossIncome * TAX);

	cout << "\nEmployee Info\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Zipcode: " << zipcode << endl;
	cout << "Wage:" << wage << endl;
	cout << "Day(s) Worked: " << daysWorked << endl;
	cout << "Gross Income: " << grossIncome << endl;
	cout << "NetIncome: " << netIncome << endl;
};