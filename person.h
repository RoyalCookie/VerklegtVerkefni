#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctype.h>
#include <fstream>
#include <vector>

using namespace std;

// Constructor For person
// Takes in a  single line in the format of "Fname Lname Gender DateOfBirth DateOfDeath" i.e "Jon Asd m  1900 1948"
// Takes the strings and breaks it down and sets the value of its properties.
class person{
public:
    person();
    person(string variables);
    void set(string variables);
    friend ostream& operator<<(ostream& stream, person me);
    string firstName;
    string lastName;
    char gender;
    int dateOfBirth;
    int dateOfDeath;
};

#endif // PERSON_H
