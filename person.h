#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class person{
public:
    person(string variables);
    friend ostream& operator<<(ostream& stream, person me);
private:
    string firstName;
    string lastName;
    char gender;
    int dateOfBirth;
    int dateOfDeath;
};

#endif // PERSON_H
