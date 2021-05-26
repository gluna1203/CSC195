#pragma once
#include "Movie.h"
#include "Music.h"
#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include <string>
using namespace std;

class DataBase
{
public:
	~DataBase();
	void Add();
	void DisplayAll();
	void DisplayAll(const string& name);
	void Display(Products::object type);
	void deleteList();

	void Load(const string& filename);
	void Save(const string& filename);

	void Remove(const std::string& name);
	void Remove(Products::object type);

	//vector<Products*> m_objects;
	list<unique_ptr<Products>> m_objects;

private:
	unique_ptr<Products> Create(Products::object type);
};

