#include "interfacelayer.h"
using namespace std;

interfaceLayer::interfaceLayer()
{
}

void interfaceLayer::sortitby(char& type) //valmynd fyrir sort
{   char stafur;
    do{
  cout << "N = Sort by last name then first name\n"
       << "G = Sort by gender\n"
       << "A = Sort by date of birth\n";
    cin >> stafur;
    std::cin.ignore();                         //til að hægt sé að nota getline seinna
    type=(toupper(stafur));                    //breyta yfir í stóran staf
     if((type!='N')&&(type!='G')&&(type!='A')) //skoðar hvort innsláttur er rettur
          cout << "Invalid input!\n";
      }while((type!='N')&&(type!='G')&&(type!='A'));

}

void interfaceLayer::searchitby(char& sort) //valmynd fyrir i hverju á að leita
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
    if(val > 90)
        val = val - 32;
    std::cin.ignore();

    switch(val){
    case ('A'):     //kallar á register
        skra();
        break;
    case ('B'):     //kallar á display
    birta();
        break;
    case ('C'):     //kallar á search
    leita();
        break;
    case ('Q'):     //hættir keyrslu
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
    char afram,type;  //gildi fyrir endurköllun og upprodun
    do{
    sortitby(type);
    listi = service.getList(type);
    for(int i = 0; i < (signed)listi.size(); i++){
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
<<<<<<< Updated upstream
    sortitby(sort);
    searchitby(type);
    list = service.search(terms,type,sort);
    for(int i = 0; i < list.size(); i++){
=======
    sortitby(type);
    searchitby(sort);
    list = service.search(terms,sort,type);
    for(int i = 0; i < (signed)list.size(); i++){
>>>>>>> Stashed changes
        cout << list[i] << endl;
    }
    cout << "\nWould you like to search again?(Y/N)\n";
    cin >> afram;
    std::cin.ignore();
    }while(afram=='y' || afram == 'Y');
}

