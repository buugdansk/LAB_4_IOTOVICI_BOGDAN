#pragma once
#include <string>
#include "Client.h" 

using namespace std;

class Review {
private:
    string content;
    const Client* reviewer; 

public:
    Review(string content, const Client* reviewer);

    string getContent() const;
    const Client* getReviewer() const;
};