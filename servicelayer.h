#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "Person.h"
#include "helper.h"
#include "comparer.h"

class serviceLayer
{
private:
    helper help;
public:
    serviceLayer();
    vector<Person>  search(string terms, char type, char sort);
    vector<Person> getList(char type);
    void write(string input);
};

#endif // SERVICELAYER_H
