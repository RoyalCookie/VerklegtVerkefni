#define HELPER_H

#include "Person.h"

using namespace std;
class helper{
public:
    vector<Person> sort(vector<Person> listi, char type);
    vector<Person> read();
    vector<Person> sort(string temp);
    void write(Person per);
};



