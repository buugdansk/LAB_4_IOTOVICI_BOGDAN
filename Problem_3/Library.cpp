#include "Library.h"
#include <iostream> 
#include <iterator>

Library::Library(string name) {
    this->name = name;
}

void Library::addBook(const Book& book) {
    this->books.push_back(book);
}

void Library::addClient(const Client& client) {
    this->clients.push_back(client);
}

Book* Library::findBookByTitle(string title) {
    for (list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
        if (it->getTitle() == title) {
            return &(*it);
        }
    }
    return nullptr;
}

Client* Library::findClientByName(string name) {
    for (list<Client>::iterator it = clients.begin(); it != clients.end(); ++it) {
        if (it->getName() == name) {
            return &(*it);
        }
    }
    return nullptr;
}

void Library::searchReviews(string searchText) const {
    bool found = false;

    for (const Book& book : this->books) {
        for (const Review& review : book.getReviews()) {
            string reviewContent = review.getContent();
            string reviewerName = review.getReviewer()->getName();

            if (reviewContent.find(searchText) != string::npos || 
                reviewerName.find(searchText) != string::npos) 
            {
                cout << book.getTitle() << endl;
                cout << " Reviewer: " << reviewerName << endl;
                cout << " Review: " << reviewContent << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No matches found." << endl;
    }
}