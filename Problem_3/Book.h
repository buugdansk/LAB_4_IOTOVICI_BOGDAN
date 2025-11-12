#pragma once
#include <string>
#include <list>
#include "Review.h" 
#include "Client.h" 

using namespace std;

class Book {
private:
    string title;
    string author;
    list<Review> reviews; 

public:
    Book(string title, string author);

    string getTitle() const;
    string getAuthor() const;

    void addReview(string content, const Client* reviewer);
    const list<Review>& getReviews() const;
};