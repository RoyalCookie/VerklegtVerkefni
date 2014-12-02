#include "servicelayer.h"



serviceLayer::serviceLayer()
{
}

void serviceLayer::write(string input){
    Person newPerson(input);
    //help.write(newPerson);
}

vector<Person> serviceLayer::search(string terms, char type){
    helper help;
    vector<Person> listi = help.read();
    vector<Person> filteredList;
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

vector<Person> serviceLayer::getList(char type)
{
<<<<<<< Updated upstream
    helper help;
    vector<person> templist, temp, rtrnlist;

    templist = help.read();


    switch (type) {
    case 'G':
    {
        for(unsigned int i = 0; i < templist.size(); i++)
        {
            if(templist[i].gender == 'F')
                    rtrnlist.push_back(templist[i]);
            else
                    temp.push_back(templist[i]);
        }

        for(unsigned int c = 0; c < temp.size(); c++)
                    rtrnlist.push_back(temp[c]);
    }
        break;
=======
    string temp = "";
    temp += type;
    list<Person> l = list<Person>();
>>>>>>> Stashed changes

    Comparer comp = Comparer(temp);

<<<<<<< Updated upstream
        for(unsigned int z = 0; z < temp.size(); z++)
        {
            for(unsigned int x = 1; x < temp.size(); x++)
            {
                if(templist[z].lastName > templist[x].lastName)
                {
                    temppersonN = templist[z];
                    templist[z] = templist[x];
                    templist[x] = temppersonN;
                }
                else if(templist[z].lastName == templist[x].lastName)
                {
                    if(templist[z].firstName > templist[x].firstName)
                    {
                        temppersonN = templist[z];
                        templist[z] = templist[x];
                        templist[x] = temppersonN;
                    }

                }
            }
            rtrnlist.push_back(templist[z]);
        }
    }
        break;

    case 'A':
    {
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
    }
        break;

    }
=======
    l.sort(comp);
    vector<Person> ret;
    ret.insert(ret.begin(), l.begin(),l.end());
    return ret;
>>>>>>> Stashed changes

}
