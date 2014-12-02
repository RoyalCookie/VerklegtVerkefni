#ifndef COMPARER_H
#define COMPARER_H

#include "Person.h"

using namespace std;

class Comparer {
private:
    string orderCol;
    bool compare(std::string first, std::string second);
public:
    Comparer();
    Comparer( std::string col);
    bool operator()(const Person first, const Person second);
};
#endif // COMPARER_H
