#pragma once

#define SHOP_NAME "Subway"

//#define XBOX

class Sandwich
{
public:
	void Read();
	void Write();

private:
	char name[32];
	float price;
	bool isHot;
};