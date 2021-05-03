#include "Movie.h"
#include <iostream>
using namespace std;

void Movie::Read()
{
	cout << "Enter Movie Name: " << endl;
	cin >> m_name;
	cout << "Enter Movie Year: " << endl;
	cin >> m_year;
	cout << "Enter Movie Genre: " << endl;
	cin >> m_genre;
	cout << "Enter Movie Studio: " << endl;
	cin >> m_studio;
};

void Movie::Write()
{
	cout << endl;
	cout << "Name: " << m_name << endl;
	cout << "Year: " << m_year << endl;
	cout << "Genre: " << m_genre << endl;
	cout << "Studio: " << m_studio << endl;
}
void Movie::Read(ifstream& istream)
{
	Products::Read(istream);
	istream >> m_genre;
	istream >> m_studio;
}
void Movie::Write(ofstream& ostream)
{
	Products::Write(ostream);
	ostream << m_genre << endl;;
	ostream << m_studio << endl;
}
;
