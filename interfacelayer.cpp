#include "interfacelayer.h"
using namespace std;

interfaceLayer::interfaceLayer()
{
}

void interfaceLayer::sortitby(char& type)
{   char stafur;
    do{
  cout << "N = Sort by last name then first name\n"
       << "G = Sort by gender\n"
       << "A = Sort by date of birth\n";
    cin >> stafur;
    std::cin.ignore();
    type=(toupper(stafur));                    //breyta yfir í stóran staf
     if((type!='N')&&(type!='G')&&(type!='A'))
          cout << "Invalid input!\n";
      }while((type!='N')&&(type!='G')&&(type!='A'));

}

void interfaceLayer::searchitby(char& sort) //Fyrir search fallið leita eftir í
{   char stafur;
    do{
  cout << "N = Search by last name then first name\n"
       << "G = Search by gender\n"
       << "A = Search by date of birth\n";
    cin >> stafur;
    std::cin.ignore();
    sort=(toupper(stafur));
     if((sort!='N')&&(sort!='G')&&(sort!='A'))
          cout << "Invalid input!\n";
      }while((sort!='N')&&(sort!='G')&&(sort!='A'));

}

void interfaceLayer::choose()
{   char val;
    bool invalid=true;
    do {
    cout << "Choose wisely \nA - Register a Person \nB - Display \nC - Search \nQ - Quit\n";
    cin >> val;
    std::cin.ignore();

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
    }
   }while(invalid==true);
}

void interfaceLayer::birta()
{

    vector<Person> listi;
    char afram,type;
    do{
    sortitby(type);   //gildi fyrir upprodun
    listi = service.getList(type);
    for(int i = 0; i < listi.size(); i++){
        cout << listi[i] << endl;
    }
    cout << "\nWould you like to display again?(Y/N)\n";
    cin >> afram;
    std::cin.ignore();
    }while(afram=='y' || afram == 'Y');
}

void interfaceLayer::skra()
{   char afram;
    do{
    string registerPerson;
    cout << "Register one Person at  a time\n";
    cout << "Enter first and last name, gender(M/F) and time alive"<<endl;
    cout << "For example:\n";
    cout << "Jon Jonsson M 1950 2010\n";
    getline (cin,registerPerson);
    service.write(registerPerson);  //tekur vid einum  streng og skilar til write
    cout << "\nWould you like to register another Person?(Y/N)\n";
    cin >> afram;
    std::cin.ignore();
    }while(afram=='y' || afram == 'Y');
}

void interfaceLayer::leita()
{
    vector<Person> list;
    char afram,type,sort;
    string terms;
    do{
    cout << "Enter search term: ";
    cin >> terms;
    std::cin.ignore();
    sortitby(type);
    searchitby(sort);
    list = service.search(terms,sort,type);
    for(int i = 0; i < list.size(); i++){
        cout << list[i] << endl;
    }
    cout << "\nWould you like to search again?(Y/N)\n";
    cin >> afram;
    std::cin.ignore();
    }while(afram=='y' || afram == 'Y');
}

