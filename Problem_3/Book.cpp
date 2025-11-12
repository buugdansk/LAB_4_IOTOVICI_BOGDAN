#include "Book.h"
#include <iterator>

Book::Book(string title, string author) {
    this->title = title;
    this->author = author;
}

string Book::getTitle() const {
    return this->title;
}

string Book::getAuthor() const {
    return this->author;
}

void Book::addReview(string content, const Client* reviewer) {
    Review newReview(content, reviewer);
    this->reviews.push_back(newReview);
}

const list<Review>& Book::getReviews() const {
    return this->reviews;
}