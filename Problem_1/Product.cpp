#include"Product.h"
#include<iostream>
using namespace std;

Product::Product(string n, double p, bool promo) :name(n), price(p), OnPromotion(promo){}

string Product::getName()
{
	return name;
}

double Product::getPrice()
{
	return price;
}

bool Product::Promotion()
{
	return OnPromotion;
}

void Product::setName(const string& n)
{
	name = n;
}

void Product::setPrice(double p)
{
	price = p;
}

void Product::setPromotion(bool promo)
{
	OnPromotion = promo;
}

void Product::PrintProduct()
{
	cout << name << " , " << price << " , ";
	if (OnPromotion)
		cout << "on promotion" << endl;
}
