#pragma once
#include <string>
#include <iostream>

using namespace std;

class Product {
private:
    string name;
    double price;
    bool onPromotion;

public:
    Product(string name, double price, bool onPromotion = false);

    string getName() const;
    double getPrice() const;
    bool isOnPromotion() const;

    void setName(string name);
    void setPrice(double price);
    void setPromotion(bool status);
    
    void display() const;
};