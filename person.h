#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Constructor For Person
// Takes in a  single line in the format of "Fname Lname Gender DateOfBirth DateOfDeath" i.e "Jon Asd m  1900 1948"
// Takes the strings and breaks it down and sets the value of its properties.
class person{
public:
    person();
    person(string variables);
    void set(string variables);
    friend ostream& operator<<(ostream& stream, person me);
<<<<<<< Updated upstream
=======
private:    
>>>>>>> Stashed changes
    string firstName;
    string lastName;
    char gender;
    int dateOfBirth;
    int dateOfDeath;
};

#endif // PERSON_H
