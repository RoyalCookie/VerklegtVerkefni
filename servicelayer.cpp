#include "servicelayer.h"



serviceLayer::serviceLayer()
{
}

void serviceLayer::write(string input){
    Person newPerson(input);
    help.write(newPerson);
}

vector<Person> serviceLayer::search(string terms, char type, char sort){
    string eh = terms;
    helper help;
    vector<Person> listi = help.read();
    vector<Person> filteredList;
    switch(type){
        case 'N':       // Name
            for(int i = 0; i < (signed)listi.size(); i++){
                if(listi[i].lastName == eh)
                    filteredList.push_back(listi[i]);
            }
            break;
        case 'G':       // Gender
            for(int i = 0; i < (signed)listi.size(); i++){
                if(listi[i].gender == eh[0])
                    filteredList.push_back(listi[i]);
            }
            break;
        case 'A':       // Date of Birth
            // String -> Int
            int value;
            stringstream convert(eh);
            if ( !(convert >> value) )
                value = 0;
            //-----
            for(int i = 0; i < (signed)listi.size(); i++){
                if(listi[i].dateOfBirth < value && listi[i].dateOfDeath > value)
                    filteredList.push_back(listi[i]);
            }
            break;
    }

    return filteredList;
}

vector<Person> serviceLayer::getList(char type)
{
    string eh = "";
    eh += type;
    vector<Person> readList = help.read();
    vector<Person> sortedList = help.sort(eh, readList);
    return sortedList;
}


