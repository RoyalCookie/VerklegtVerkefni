#include "interfacelayer.h"
#include "servicelayer.h"
using namespace std;

interfaceLayer::interfaceLayer()
{
}
void interfaceLayer::sortitby(char& type)
{   char stafur;
    do{
  cout << "N = Sort by last name then first name\n"
       << "G = Sort by gender\n"
       << "A = Sort by alive\n";
    cin >> stafur;
    type=(toupper(stafur));
     if((type!='N')&&(type!='G')&&(type!='A'))
          cout << "Invalid input!\n";
      }while((type!='N')&&(type!='G')&&(type!='A'));

}
void interfaceLayer::choose()
{   char val;
    bool invalid=true;
    do {
    cout << "Choose wisely \nA - Register a person \nB - Display \nC - Search \nQ - Quit\n";
    cin >> val;

    switch(val){
    case ('A'|'a'):
        skra();
        break;
    case ('B'|'b'):
    birta();
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
    sortitby(type);
    service.list(type);
    cout << "\nWould you like to display again?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}
void interfaceLayer::skra()
{   char afram;
    do{
    string registerperson;
    cout << "Register one person at  a time\n";
    cout << "Enter first and last name, gender(M/F) and time alive"<<endl;
    cout << "For example:\n";
    cout << "Jón Jónsson M 1950 2010\n";
    getline (cin,registerperson);
    service.write(registerperson);
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
    sortitby(type);
    service.search(terms, type);
    cout << "\nWould you like to search again?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}

