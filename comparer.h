#ifndef COMPARER_H
#define COMPARER_H

#include "person.h"

using namespace std;

class Comparer {
private:
    string orderCol;
    bool compare(std::string first, std::string second);
public:
    Comparer();
    Comparer( std::string col);
    bool operator()(const person first, const person second);
};
#endif // COMPARER_H
