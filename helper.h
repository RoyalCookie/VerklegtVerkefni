#define HELPER_H
#include <iostream>
#include <fstream>
#include <vector>
#include "person.h"
#include <string>

using namespace std;
class helper{
public:
    vector<person> sort(vector<person> listi, char type);
    vector<person> read();
    vector<person> write(vector<person> listi);
};



