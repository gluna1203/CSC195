#pragma once
#include "Products.h"
#include <iostream>
#include <string>
using namespace std;

class Movie : public Products
{

public:

	void Read() override;
	void Write() override;

	void Read(ifstream& istream) override;
	void Write(ofstream& ostream) override;
	object getType() { return Products::object::movie; };


protected:
	string m_genre;
	string m_studio;
};

