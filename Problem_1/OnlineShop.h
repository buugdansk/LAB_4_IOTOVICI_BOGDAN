#pragma once
#include <string>
#include <list>
#include "Category.h"

using namespace std;

class OnlineShop {
private:
    string shopName;
    list<Category> categories;

public:
    OnlineShop(string name);

    void addCategory(const Category& category);
    void removeCategory(string categoryName);
    Category* findCategoryByName(string categoryName);

    void displayAllProducts() const;
    void displayPromotionProducts() const;
    list<Product> searchProducts(string name, double price, string categoryName) const;
};