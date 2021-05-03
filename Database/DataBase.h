#pragma once
#include "Movie.h"
#include "Music.h"
#include <iostream>
#include <vector>
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

	vector<Products*> m_objects;

private:
	Products* Create(Products::object type);
};

