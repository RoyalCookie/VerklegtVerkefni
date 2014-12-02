#ifndef HELPER_H
#define HELPER_H

#include "Person.h"
#include "comparer.h"

class helper{
public:
    vector<Person> read();
    vector<Person> sort(string temp, vector<Person> per);
    void write(Person per);
};

#endif // HELPER_H
