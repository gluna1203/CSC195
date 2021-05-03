#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Products 
{
public:
	~Products() {};
	 virtual void Read();
	 virtual void Write();

	 virtual void Read(ifstream& istream);
	 virtual void Write(ofstream& ostream);

	 friend ostream& operator << (ostream& ostream, Products& product);
	 friend istream& operator >> (istream& istream, Products& product);

	 friend ofstream& operator << (ofstream& ostream, Products& product);
	 friend ifstream& operator >> (ifstream& istream, Products& product);

	enum object 
	{
		movie = 1,
		music
	};

	virtual object getType() = 0;
	string getName();

protected:
	int m_year = 0;
	string m_name;
};