#include"Shop.h"
#include<iostream>
#include<vector>
using namespace std;

Shop::Shop(string n):name(n){}

void Shop::addCategory(const Category& cat)
{
	categories.push_back(cat);
}

void Shop::removeCategory(const string& categoryname)
{
	for (int i = 0; i < categories.size(); i++)
		if (categories[i].getName() == categoryname)
			categories.erase(categories.begin() + i);
}

void Shop::displayAllProducts()
{
	for(int i=0;i<categories.size();i++)
	categories[i].printCategory();
}

void Shop::displayProductonPromotion()
{
	cout << "products on promotion are:" << endl;
	for (int i = 0; i < categories.size(); i++)
	{
		vector<Product> products = categories[i].getProduct();
		for (int j = 0; j < products.size(); j++)
			if (products[j].Promotion())
			{
				products[j].PrintProduct();
				cout << endl;
			}
				

	}
}

void Shop::searchName(const string& product_name)
{
	for (int i = 0; i < categories.size(); i++)
	{
		vector<Product> products = categories[i].getProduct();

		for (int j = 0; j < products.size(); j++)
			if (products[j].getName() == product_name)
			{
				cout << "the product has been found" << endl;
				products[j].PrintProduct();
			}
	}
}

void Shop::searchPrice(double min_price, double max_price)
{
	cout << "the products in this range of prices are:" << endl;

	for (int i = 0; i < categories.size(); i++)
	{
		vector<Product> products = categories[i].getProduct();
		for (int j = 0; j < products.size(); j++)
			if (min_price <= products[j].getPrice() <= max_price)
			{
				products[j].PrintProduct();
				cout << endl;
			}
	}

}

void Shop::searchCategory(const string& category_name)
{
	cout << "results for the category:" << endl;
	for (int i = 0; i < categories.size(); i++)
		if (categories[i].getName() == category_name)
			categories[i].printCategory();

}
