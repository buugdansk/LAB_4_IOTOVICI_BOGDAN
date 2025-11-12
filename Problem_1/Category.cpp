#include "Category.h"
#include <iterator> 
#include <iostream>

using namespace std;

Category::Category(string name) {
    this->categoryName = name;
}

string Category::getName() const {
    return this->categoryName;
}

const list<Product>& Category::getProductList() const {
    return this->products;
}

void Category::addProduct(const Product& product) {
    this->products.push_back(product);
}

void Category::removeProduct(string productName) {
    for (list<Product>::iterator it = products.begin(); it != products.end(); ++it) {
        if (it->getName() == productName) {
            products.erase(it);
            return; 
        }
    }
}

Product* Category::findProductByName(string productName) {
    for (list<Product>::iterator it = products.begin(); it != products.end(); ++it) {
        if (it->getName() == productName) {
            return &(*it); 
        }
    }
    return nullptr; 
}

void Category::displayProducts() const {
    for (const Product& p : this->products) {
        p.display();
    }
}