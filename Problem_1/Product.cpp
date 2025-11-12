#include "Product.h"
#include <iostream> 

using namespace std;

Product::Product(string name, double price, bool onPromotion) {
    this->name = name;
    this->price = price;
    this->onPromotion = onPromotion;
}

string Product::getName() const {
    return this->name;
}

double Product::getPrice() const {
    return this->price;
}

bool Product::isOnPromotion() const {
    return this->onPromotion;
}

void Product::setName(string name) {
    this->name = name;
}

void Product::setPrice(double price) {
    this->price = price;
}

void Product::setPromotion(bool status) {
    this->onPromotion = status;
}

void Product::display() const {
    cout << " Product: " << this->name
         << " Price: $" << this->price
         << (this->onPromotion ? " (ON SALE!)" : "") << endl;
}