#include "Person.h"
using namespace std;
person::person()
{

<<<<<<< Updated upstream
}
person::person(string variables){
=======
Person::Person(string variables){
>>>>>>> Stashed changes
    vector<string> values;
    string temp = "";

    // Brjótum niður variables strengin í gildi fyrir klasan
    // Skiptir eftir "whitespace"
    for (int i = 0; i < (signed)variables.length(); i++) {
        if (variables[i] == ' '){
            values.push_back(temp);
            temp = "";
        }
        else
            temp += variables[i];
    }
    values.push_back(temp);

    // Setjum gildin á vectorinum values í breytur klasans.
    firstName = values[0];
    lastName = values[1];
    gender = values[2][0];
    dateOfBirth = atoi(values[3].c_str());
    dateOfDeath = atoi(values[4].c_str());
}

void Person::set(string variables){
    vector<string> values;
    string temp = "";

    // Brjótum niður variables strengin í gildi fyrir klasan
    // Skiptir eftir "whitespace"
    for (int i = 0; i < (signed)variables.length(); i++) {
        if (variables[i] == ' '){
            values.push_back(temp);
            temp = "";
        }
        else
            temp += variables[i];
    }
    values.push_back(temp);

    // Setjum gildin á vectorinum values í breytur klasans.
    firstName = values[0];
    lastName = values[1];
    gender = values[2][0];
    dateOfBirth = atoi(values[3].c_str());
    dateOfDeath = atoi(values[4].c_str());
}
// overwrite á << skilar  gildum í sama formati og þau eru sett í filea
ostream& operator<<(ostream& stream, Person me){
    stream << me.firstName << " " << me.lastName << " " << me.gender << " " << me.dateOfBirth << " " << me.dateOfDeath;
    return stream;
}
