#include "servicelayer.h"



serviceLayer::serviceLayer()
{
}

void serviceLayer::write(string input){
    person newperson(input);
    help.write(newperson);
}

vector<person> serviceLayer::search(string terms, char type, char sort){
    string eh = terms;
    helper help;
    vector<person> listi = help.read();
    vector<person> filteredList;
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

vector<person> serviceLayer::getList(char type)
{
    string eh = "";
    eh += type;
    vector<person> readList = help.read();
    vector<person> sortedList = help.sort(eh, readList);
    return sortedList;
}


