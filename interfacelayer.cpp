#include "interfacelayer.h"
#include "servicelayer.h"
using namespace std;

interfaceLayer::interfaceLayer()
{
}
void sortitby(char& type)
{
    do{
  cout << "N = Sort by last name then first name\n"
       << "G = Sort by gender\n"
       << "A = Sort by alive\n";
  cin >> type;
      if((type!='N')|(type!='G')|(type!='A'))
          cout << "Invalid input!";
      }while((type!='N')|(type!='G')|(type!='A'));
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
    sortitby(type);
    serviceLayer.list(type);
    cout << "\nWould you like to display again?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}
void interfaceLayer::skra()
{   char afram;
    do{
    serviceLayer.write();
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
    serviceLayer.search(terms, type);
    cout << "\nWould you like to search again?(Y/N)\n";
    cin >> afram;
    }while(afram=='y' || afram == 'Y');
}

