#include "helper.h"
#include "person.h"
#include <iostream>
#include <fstream>

<<<<<<< Updated upstream
using namespace std;


//vector<person> Sort(vector<person> listi, char type){
//    list<person> listToSort;
//    for(int i = 0; i < listi.size; i++){
//        listToSort.push_back(listi[i]);
//    }
//}
//vector<person> Read();
//vector<person> Write(vector<person> listi);
=======
vector<person> helper::read()
{
    vector<person> skil;
    ifstream lesari("file.txt");
    string lesa;
   while (getline(lesari,lesa))
   {

       skil.push_back(person(lesa));

   }
return skil;
}





//lesa inn ur textaskra og seperate-a hverja linu fyrir sig. hver lina er ein person. Skila thvi svo.
>>>>>>> Stashed changes
