#pragma once
#include <string>

using namespace std;

class Client {
private:
    string name;

public:
    Client(string name);
    string getName() const;
};