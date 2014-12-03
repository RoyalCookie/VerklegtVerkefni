#ifndef HELPER_H
#define HELPER_H

#include "person.h"
#include "comparer.h"

class helper{
public:
    vector<person> read();
    vector<person> sort(string temp, vector<person> per);
    void write(person per);
};

#endif // HELPER_H
