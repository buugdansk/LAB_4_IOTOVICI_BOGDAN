#include "OnlineShop.h"
#include <iostream> 
#include <list>

using namespace std;

int main() {
    OnlineShop myShop("MyStore"); //magazinul

    Category pcParts("PCparts");
    Category furniture("Furniture");
    Category schoolStuff("Schoolstuff"); //categorii

    pcParts.addProduct(Product("Monitor", 199.99));
    pcParts.addProduct(Product("Mouse", 24.99));
    pcParts.addProduct(Product("Keyboard", 79.99));
    pcParts.addProduct(Product("Processor", 299.99));
    pcParts.addProduct(Product("Motherboard", 149.99)); //categoria PCparts

    furniture.addProduct(Product("Bed", 399.00));
    furniture.addProduct(Product("Sofa", 499.00));
    furniture.addProduct(Product("Table", 120.00));
    furniture.addProduct(Product("Desk", 150.00));
    furniture.addProduct(Product("Shelf", 60.00)); // categoria Furniture

    schoolStuff.addProduct(Product("Pencil", 0.99));
    schoolStuff.addProduct(Product("Pen", 1.99));
    schoolStuff.addProduct(Product("Eraser", 0.50));
    schoolStuff.addProduct(Product("Highlighter", 1.20));
    schoolStuff.addProduct(Product("Notebook", 2.50)); // categoria Schoolstuff

    myShop.addCategory(pcParts);
    myShop.addCategory(furniture);
    myShop.addCategory(schoolStuff); // adaug categoriile in magazin
    
    return 0;
}