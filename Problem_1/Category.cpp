#include"Category.h"
#include<iostream>
using namespace std;

Category::Category(string n) :name(n){}

string Category::getName()
{
	return name;
}

void Category::AddProduct(const Product& p)
{
	products.push_back(p);
}

void Category::RemoveProduct(const string& product_name)
{
	for (int i = 0; i < products.size(); i++)
		if (products[i].getName() == product_name)
		{
			products.erase(products.begin() + i);
			break;
		}
}

void Category::UpdateProduct(const string& product_name, double newprice, bool newpromotion)
{
	for (int i = 0; i < products.size(); i++)
		if (products[i].getName() == product_name)
		{
			products[i].setPrice(newprice);
			products[i].setPromotion(newpromotion);
		}


}

vector<Product> Category::getProduct()
{
	return products;
}

void Category::printCategory()
{
	cout << "category:" << name << endl;
	cout << "the products inside this category are:" << endl;
	for (int i = 0; i < products.size(); i++)
	{
		products[i].PrintProduct();
			cout << endl;

	}

}