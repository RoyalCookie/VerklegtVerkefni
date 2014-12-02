#include "servicelayer.h"

bool asd(const person &a, const person &b){

}

serviceLayer::serviceLayer()
{
}

void serviceLayer::write(string input){
    person newPerson(input);
    //help.write(newPerson);
}

vector<person> serviceLayer::search(string terms, char type){
    helper help;
    vector<person> listi = help.read();
    vector<person> filteredList;
    switch(type){
        case 'N':       // Name
            for(int i = 0; i < (signed)listi.size(); i++){
                if(listi[i].lastName == terms)
                    filteredList.push_back(listi[i]);
            }
            break;
        case 'G':       // Gender
            for(int i = 0; i < (signed)listi.size(); i++){
                if(listi[i].gender == terms[0])
                    filteredList.push_back(listi[i]);
            }
            break;
        case 'A':       // Date of Birth
            // String -> Int
            int value;
            stringstream convert(terms);
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


//bool serviceLayer::compare_firstName(const person &a, const person &b)
//{
//    return a.firstName < b.firstName;
//}
