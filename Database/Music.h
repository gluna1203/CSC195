#pragma once
#include "Products.h"
#include <iostream>
#include <string>
using namespace std;

class Music : public Products
{
public:

	void Read() override;
	void Write() override;

	void Read(ifstream& istream) override;
	void Write(ofstream& ostream) override;
	object getType() { return Products::object::music; };

protected:
	string m_artist;
	string m_album;
};

