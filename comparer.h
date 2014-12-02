#ifndef COMPARER_H
#define COMPARER_H

#include <iostream>
#include "person.h"
using namespace std;

class Comparer {
private:
    string orderCol;
    bool compare(std::string first, std::string second);
public:
    void changeType(string col);
    Comparer();
    Comparer( std::string col);
    bool operator()(const person first, const person second);
};
#endif // COMPARER_H
