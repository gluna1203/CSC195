#include "Music.h"
#include <iostream>
using namespace std;

void Music::Read()
{
	cout << "Enter Music's Name: " << endl;
	cin >> m_name;
	cout << "Enter Music's Year: " << endl;
	cin >> m_year;
	cout << "Enter Music's Artist: " << endl;
	cin >> m_artist;
	cout << "Enter Music's Album: " << endl;
	cin >> m_album;
};

void Music::Write()
{
	cout << endl;
	cout << "Name: " << m_name << endl;
	cout << "Year: " << m_year << endl;
	cout << "Artist: " << m_artist << endl;
	cout << "Album: " << m_album << endl;
}
void Music::Read(ifstream& istream)
{
	Products::Read(istream);
	istream >> m_artist;
	istream >> m_album;
}
void Music::Write(ofstream& ostream)
{
	Products::Write(ostream);
	ostream << m_artist << endl;
	ostream << m_album << endl;
}
;