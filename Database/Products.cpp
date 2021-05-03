#include "Products.h"
#include <iostream>
using namespace std;

void Products::Read()
{
	cout << "Enter Product Name: " << endl;
	cin >> m_name;
	cout << "Enter Product Year: " << endl;
	cin >> m_year; 
};

void Products::Write()
{
	cout << endl;
	cout << "Name: " << m_name << endl;
	cout << "Year: " << m_year << endl;
}
void Products::Read(ifstream& istream)
{
	istream >> m_name;
	istream >> m_year;
}

void Products::Write(ofstream& ostream)
{
	ostream << m_name << endl;
	ostream << m_year << endl;
}
;

string Products::getName()
{
	return m_name;
};

ostream& operator<<(ostream& ostream, Products& product)
{
	product.Write();
	return ostream;
}

istream& operator>>(istream& istream, Products& product)
{
	product.Read();
	return istream;
}

ofstream& operator<<(ofstream& ostream, Products& product)
{
	product.Write(ostream);
	return ostream;
}

ifstream& operator>>(ifstream& istream, Products& product)
{
	product.Read(istream);
	return istream;
}
