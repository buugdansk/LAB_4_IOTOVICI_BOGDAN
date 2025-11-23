#include"Library.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	Library lib("Library");

	Book b1("The Boy on the Wooden Box");
	b1.addReviews(Review("Cristi","Fantastic"));
	b1.addReviews(Review("Alex", "Heartbreaking book"));
	Book b2("451� Fahrenheit");
	b2.addReviews(Review("Andrei", "Very interesting concept"));
	Book b3("The Great Gatsby");
	b3.addReviews(Review("Stefan", "Amazing story"));
	b3.addReviews(Review("Andrei", "One of my favorite book"));

	lib.addBook(b1);
	lib.addBook(b2);
	lib.addBook(b3);

	lib.displayallBooks();
	string text;
	cin>>text;

	b1.searchforText(text);
	b2.searchforText(text);
	b3.searchforText(text);

	
}