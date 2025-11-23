#pragma once
#include "Book.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Library
{
private:
	string name;
	vector<Book> books;

public:
	Library(string n = "");
	string getName();
	void addBook(const Book& b);
	void displayallBooks();
};