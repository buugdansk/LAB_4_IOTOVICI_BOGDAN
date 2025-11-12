#pragma once
#include <string>
#include <list>
#include "Product.h" 

using namespace std;

class Category {
private:
    string categoryName;
    list<Product> products;

public:
    Category(string name);

    string getName() const;
    const list<Product>& getProductList() const;

    void addProduct(const Product& product);
    void removeProduct(string productName);
    Product* findProductByName(string productName);

    void displayProducts() const;
};