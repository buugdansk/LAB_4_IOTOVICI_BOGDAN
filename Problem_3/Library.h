#pragma once
#include <string>
#include <list>
#include "Book.h"     
#include "Client.h"   

using namespace std;

class Library {
private:
    string name;
    list<Book> books;       
    list<Client> clients;   

public:
    Library(string name);

    void addBook(const Book& book);
    void addClient(const Client& client);

    Book* findBookByTitle(string title);
    Client* findClientByName(string name);

    void searchReviews(string searchText) const;
};