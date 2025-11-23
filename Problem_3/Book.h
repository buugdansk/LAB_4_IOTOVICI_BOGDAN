#pragma once
#include"Review.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Book
{
private:
	string name;
	vector<Review> reviews;

public:
	Book(string n = "");
	string getName();
	void addReviews(const Review& r );
	void displayallReviews();
	void searchforText(const string& text);
};