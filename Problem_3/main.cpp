#include "Library.h"
#include <iostream>

using namespace std;

int main() {
    Library Library("City Library");

    Library.addClient(Client("Andrei"));
    Library.addClient(Client("Bogdan"));
    Library.addClient(Client("Ciprian"));

    Library.addBook(Book("Ultima noapte de dragoste", "Camil Petrescu"));
    Library.addBook(Book("Ion", "Liviu Rebreanu"));

    Client* pAndrei = Library.findClientByName("Andrei");
    Client* pBogdan = Library.findClientByName("Bogdan");
    Client* pCiprian = Library.findClientByName("Ciprian");
    
    Book* p1 = Library.findBookByTitle("Ultima noapte de dragoste");
    Book* p2 = Library.findBookByTitle("Ion");

    if (p1 && pAndrei) {
        p1->addReview("9/10", pAndrei);
    }
    if (p1 && pBogdan) {
        p1->addReview("10/10", pBogdan);
    }
    if (p2 && pAndrei) {
        p2->addReview("10/10", pAndrei);
    }
    if (p2 && pBogdan) {
        p2->addReview("8/10", pBogdan);
    }
    if (p2 && pCiprian) {
        p2->addReview("9/10", pCiprian);
    }
    return 0;
}