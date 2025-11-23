#pragma once
#include<iostream>
#include<string>
using namespace std;

class Product
{
private:
	string name;
	double price;
	bool OnPromotion;

public:
	Product(string n = "", double p = 0, bool promo=false);

	string getName();
	double getPrice();
	bool Promotion();

	void setName(const string& n);
	void setPrice(double p);
	void setPromotion(bool promo);
	void PrintProduct();
};