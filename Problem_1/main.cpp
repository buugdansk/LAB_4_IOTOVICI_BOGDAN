#include"Shop.h"
#include<iostream>
using namespace std;

int main()
{
	Category electronics ("Electronics");

	Product p1("Laptop", 999.9, true);
	Product p2("Smart phone", 1299.9);

	Category peripherals("Peripherals");
	Product p6("Keyboard", 70.0); 
	Product p4("Mouse", 50.0, true);

	Category accesories("Accesories");
	Product p5("Bracelet", 399.9, true);
	Product p3("Watch", 1500.0);


	electronics.AddProduct(p1);
	electronics.AddProduct(p2);
	
	peripherals.AddProduct(p4);
	peripherals.AddProduct(p6);

	accesories.AddProduct(p3);
	accesories.AddProduct(p5);
	Shop shop("Online store");

	shop.addCategory(electronics);
	shop.addCategory(peripherals);
	shop.addCategory(accesories);

	shop.displayAllProducts();
	cout << endl;

	shop.displayProductonPromotion();
	cout << endl;

	shop.searchName("Laptop");
	cout << endl;

	shop.searchPrice(100, 900);
	cout << endl;

	shop.searchCategory("electronics");


}