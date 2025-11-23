#pragma once
#include"Product.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Category 
{
private:
	string name;
	vector<Product>products;

public:

	Category(string n = "");
	string getName();
	void AddProduct(const Product& p);
	void RemoveProduct(const string& product_name);
	void UpdateProduct(const string& product_name, double newprice, bool newpromotion);

	vector<Product> getProduct();

	void printCategory();
};