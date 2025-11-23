#include"Review.h"
#include<iostream>
#include<string>
using namespace std;

Review::Review(string p,string r):Person(p),review(r){}

string Review::getPerson()
{
	return Person;
}

string Review::getReview()
{
	return review;
}

void Review::printReview()
{
	cout << Person << "-" << review << endl;
}