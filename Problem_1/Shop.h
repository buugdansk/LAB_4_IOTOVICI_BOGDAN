#pragma once
#include"Category.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Shop
{
private:
	string name;
	vector<Category>categories;

public:
	Shop(string n = "");

	void addCategory(const Category& cat);
	void removeCategory(const string& categoryname);
	void displayAllProducts();
	void displayProductonPromotion();
	void searchName(const string& product_name);
	void searchPrice(double min_price, double max_price);
	void searchCategory(const string& category_name);

};