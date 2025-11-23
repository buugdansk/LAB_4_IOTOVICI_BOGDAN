#include"Book.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

Book::Book(string n):name(n){}

string Book::getName()
{
	return name;
}

void Book::addReviews(const Review& r)
{
	reviews.push_back(r);
}

void Book::displayallReviews()
{
	cout << name << ":" << endl;
	for (int i = 0; i < reviews.size(); i++)
	{
		reviews[i].printReview();
		cout << endl;
	}
	
}

void Book::searchforText(const string& text)
{
	for(int i=0;i<reviews.size();i++)
		if (reviews[i].getPerson().find(text) != string::npos || reviews[i].getReview().find(text) != string::npos)
		{
			cout << name << ":" << endl << reviews[i].getPerson() << "-" << reviews[i].getReview();
			cout << endl;
		}
}