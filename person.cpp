#include "person.h"
using namespace std;

person::person(string variables){
    vector<string> values;
    string temp = "";
    for (int i = 0; i < (signed)variables.length(); i++) {
        if (variables[i] == ' '){
            values.push_back(temp);
            temp = "";
        }
        else
            temp += variables[i];
    }
    values.push_back(temp);
    firstName = values[0];
    lastName = values[1];
    gender = values[2][0];
    dateOfBirth = atoi(values[3].c_str());
    dateOfDeath = atoi(values[4].c_str());
}

ostream& operator<<(ostream& stream, person me){
    stream << me.firstName << " " << me.lastName << " " << me.gender << " " << me.dateOfBirth << " " << me.dateOfDeath;
    return stream;
}
