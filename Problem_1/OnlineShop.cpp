#include "OnlineShop.h"
#include <iterator>
#include <iostream>

using namespace std;

OnlineShop::OnlineShop(string name) {
    this->shopName = name;
}

void OnlineShop::addCategory(const Category& category) {
    this->categories.push_back(category);
}

void OnlineShop::removeCategory(string categoryName) {
    for (list<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
        if (it->getName() == categoryName) {
            categories.erase(it);
            return;
        }
    }
}

Category* OnlineShop::findCategoryByName(string categoryName) {
    for (list<Category>::iterator it = categories.begin(); it != categories.end(); ++it) {
        if (it->getName() == categoryName) {
            return &(*it);
        }
    }
    return nullptr;
}

void OnlineShop::displayAllProducts() const {
    for (const Category& cat : this->categories) {
        cat.displayProducts();
    }
}

void OnlineShop::displayPromotionProducts() const {
    for (const Category& cat : this->categories) {
        for (const Product& p : cat.getProductList()) {
            if (p.isOnPromotion()) {
                p.display();
            }
        }
    }
}

list<Product> OnlineShop::searchProducts(string name, double price, string categoryName) const {
    list<Product> results;
    for (const Category& cat : this->categories) {
        if (cat.getName() == categoryName) {
            for (const Product& p : cat.getProductList()) {
                if (p.getName() == name && p.getPrice() == price) {
                    results.push_back(p);
                }
            }
            break;
        }
    }
    return results;
}