#include "servicelayer.h"



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

vector<person> serviceLayer::list(char type)
{
    helper help;
    vector<person> templist, temp, rtrnlist;

    templist = help.read();


    switch (type) {
    case 'G':
        for(unsigned int i = 0; i < templist.size(); i++)
        {
            if(templist[i].gender == 'f' || templist[i].gender == 'F')
                    rtrnlist.push_back(templist[i]);
            else
                    temp.push_back(templist[i]);
        }

        for(unsigned int c = 0; c < temp.size(); c++)
                    rtrnlist.push_back(temp[c]);

        break;

    case 'N':
        person temppersonN;

        for(unsigned int z = 0; z < temp.size(); z++)
        {
            for(unsigned int x = 1; x < temp.size(); x++)
            {
                if(templist[z].dateOfBirth > templist[x].dateOfBirth)
                {
                    temppersonN = templist[z];
                    templist[z] = templist[x];
                    templist[x] = temppersonN;
                }
            }
        }

        break;
/*
    case 'A':
        person temppersonA;

        for(unsigned int z = 0; z < temp.size(); z++)
        {
            for(unsigned int x = 1; x < temp.size(); x++)
            {
                if(templist[z].dateOfBirth > templist[x].dateOfBirth)
                {
                    temppersonA = templist[z];
                    templist[z] = templist[x];
                    templist[x] = temppersonA;
                }
            }
        }


        break;
*/
    }

    return rtrnlist;
}
