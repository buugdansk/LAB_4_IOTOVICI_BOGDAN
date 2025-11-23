#pragma once
#include<iostream>
#include<string>
using namespace std;

class Review
{
private:
	string Person;
	string review;

public:
	Review(string p = "", string r = "");
	string getPerson();
	string getReview();
	void printReview();
};