#ifndef SERVICELAYER_H
#define SERVICELAYER_H

#include "person.h"
#include <vector>
#include <list>
#include "helper.h"


class serviceLayer
{
public:
    serviceLayer();
    vector<person>  search(string terms, char type);
    vector<person> list(char type);
};

#endif // SERVICELAYER_H
