#include"Library.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Library::Library(string n):name(n){}

string Library::getName()
{
	return name;
}

void Library::addBook(const Book& b)
{
	books.push_back(b);
}

void Library::displayallBooks()
{
	for (int i = 0; i < books.size(); i++)
		books[i].displayallReviews();
}