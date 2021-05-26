#include "DataBase.h"
#include <vector>
#include <iostream>
using namespace std;

DataBase::~DataBase() 
{
	deleteList();
}

void DataBase::Add() 
{
	Products* product = nullptr;
	cout << "What Product Would you like to Add?" << endl;
	cout << "1) Movie" << endl;
	cout << "2) Music" << endl;
	int selection = 0;
	cin >> selection;

	switch (static_cast<Products::object>(selection))
	{
	case Products::object::movie:
		product = new Movie;
		break;
	case Products::object::music:
		product = new Music;
		break;
	default:
		cout << "Please Choose from 1 or 2" << endl;
		break;
	}

	cin >> *product;
	//product->Read();
	m_objects.push_back(unique_ptr<Products>{product});
	delete product;

}

void DataBase::DisplayAll()
{
	if (m_objects.size() == 0)
	{
		cout << endl;
		cout << "Nothing has been added!" << endl;
		cout << endl;
	}
	else
	{
		for (auto& allProducts : m_objects)
			{
				cout << endl;
				cout << *allProducts;
				//allProducts->Write();
				cout << endl;

			}
	}
	
}

void DataBase::DisplayAll(const std::string& name)
{	
	if (m_objects.size() == 0)
	{
		cout << endl;
		cout << "Nothing has been added!" << endl;
		cout << endl;
	}
	else 
	{
		for (auto& allProducts : m_objects)
			{
				if (allProducts->getName() == name)
				{
					cout << endl;
					cout << *allProducts;
					//allProducts->Write();
					cout << endl;
				}
			}
	}
	
}

void DataBase::Display(Products::object type) 
{

	if (m_objects.size() == 0)
	{
		cout << endl;
		cout << "Nothing has been added!" << endl;
		cout << endl;
	}
	else
	{
			for (auto& allProducts : m_objects)
		{
			if (allProducts->getType() == type)
			{
				cout << endl;
				cout << *allProducts;
				//allProducts->Write();
				cout << endl;
			}
		}
	}
	
}

void DataBase::deleteList() 
{
	/*for (auto& allProducts : m_objects) 
	{
		delete allProducts;
	}*/
	m_objects.clear();
}

void DataBase::Load(const string& filename)
{
	ifstream input(filename);
	if (input.is_open())
	{
		deleteList();
		while (!input.eof())
		{
			int type;
			input >> type;

			if (input.fail()) break;

			unique_ptr<Products> product = Create(static_cast<Products::object>(type));
			//product->Read(input);
			input >> *product;
			m_objects.push_back(move(product));
		}
	}
	input.close();
}

void DataBase::Save(const string& filename)
{
	ofstream output(filename);
	if (output.is_open())
	{
		for (auto& product : m_objects)
		{
			output << static_cast<int>(product->getType()) << endl;
			//product->Write(output);
			output << *product;
		}
	}
	output.close();
}

void DataBase::Remove(const std::string& name)
{
	for (auto iter = m_objects.begin(); iter != m_objects.end();)
	{
		iter = std::find(iter, m_objects.end(), name);
		if (iter != m_objects.end())
		{
			iter = m_objects.erase(iter);
		}
	}
	cout << "Object(s) deleted!" << endl;
}

void DataBase::Remove(Products::object type)
{
	for (auto iter = m_objects.begin(); iter != m_objects.end();)
	{
		iter = std::find(iter, m_objects.end(), type);
		if (iter != m_objects.end())
		{
			iter = m_objects.erase(iter);
		}
	}
	cout << "Object(s) deleted!" << endl;
}

unique_ptr<Products> DataBase::Create(Products::object type)
{
	Products* product = nullptr;
	switch (type)
	{
	case Products::movie:
		product = new Movie;
		break;
	case Products::music:
		product = new Music;
		break;
	default:
		break;
	}
	return unique_ptr<Products>{product};
}
