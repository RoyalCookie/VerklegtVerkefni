#include "person.h"
using namespace std;
person::person()
{
}

person::person(string variables){

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


    int mod = values.size()-5;

    firstName = values[0];
    for(int i = 1; i < mod+1; i++){         // Ef það eru fleirri en 5 objects í vector
        firstName += " ";                   // þá er öllum nema síðustu 4 hlaðið í firstName
        firstName += values[0+i];
    }
    lastName = values[1+mod];
    // Extra Names

    gender = values[2+mod][0];
    if(this->gender > 90)
    this->gender = this->gender - 32;
    dateOfBirth = atoi(values[3+mod].c_str());
    dateOfDeath = atoi(values[4+mod].c_str());
}

void person::set(string variables){
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
ostream& operator<<(ostream& stream, person me){
    stream << me.firstName << " " << me.lastName << " " << me.gender << " " << me.dateOfBirth << " " << me.dateOfDeath;
    return stream;
}
