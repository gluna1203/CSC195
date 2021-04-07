#pragma once

class Employee {
public:
	void Read();
	void Write();	

private:
	char name[32];
	short age = 0;
	int zipcode = 0;
	float wage = 0.0f;
	short daysWorked = 0;
	short hoursWorkedPerDay[7];

	static const float TAX;

};