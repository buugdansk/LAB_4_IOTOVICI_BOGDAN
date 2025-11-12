#include "Client.h"

Client::Client(string name) {
    this->name = name;
}

string Client::getName() const {
    return this->name;
}