#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "person.h"
#include "helper.h"
#include "comparer.h"

class serviceLayer
{
private:
    helper help;
public:
    serviceLayer();
    vector<person>  search(string terms, char type, char sort);
    vector<person> getList(char type);
    void write(string input);
};

#endif // SERVICELAYER_H
