#include "interfacelayer.h"
#include "servicelayer.h"
using namespace std;

interfaceLayer::interfaceLayer()
{
}
void interfaceLayer::choose()
{   char val;
    bool invalid=false;
    do {
    cout << "Choose wisely \nA - Register a person \nB - Display \nC - Search \nQ - Quit\n";
    cin >> val;

    switch(val){
    case ('A'|'a'):
        skra();
        break;
    case ('B'|'b'):

        break;
    case ('C'|'c'):
    leita();
        break;
    case ('Q'|'q'):
    invalid=false;
        break;
    default :
    cout << " Wrong input\n";
    invalid=true;
    }
   }while(invalid==true);
}
void interfaceLayer::birta()
{
    char afram,type;
    do{
    cout << "N = Sort by last name then first name\n"
         << "G = Sort by gender\n"
         << "B = Sort by date of birth\n"
         << "D = date of death\n";
    cin >> type;
    List(char type);
    cout << "\nWould you like to display again?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}
void interfaceLayer::skra()
{   char afram;
    do{
    Write();
    cout << "\nWould you like to register another person?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}
void interfaceLayer::leita()
{
    char afram,type;
    string terms;
    do{
    cout << "Enter search term: ";
    cin >> terms;
    cout << "N = Sort by last name then first name\n"
         << "G = Sort by gender\n"
         << "B = Sort by date of birth\n"
         << "D = Sort by date of death\n";
    cin >> type;
    Search(string terms, char type);
    cout << "\nWould you like to search again?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}

vector<person> interfaceLayer::search(string terms, char type){
    vector<person> listi = read();
    print(listi);
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
