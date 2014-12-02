#include "helper.h"
#include "person.h"
#include <iostream>
#include <fstream>

//vector<person> Sort(vector<person> listi, char type){
//    list<person> listToSort;
//    for(int i = 0; i < listi.size; i++){
//        listToSort.push_back(listi[i]);
//    }
//}

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

<<<<<<< HEAD
 void write(person per)
=======
 void helper::write(person)
>>>>>>> FETCH_HEAD
 {
   ofstream myfile;

   myfile.open ("file.txt");

   string total ="";
   total += per.firstName;
   total += " ";
   total += per.lastName;
   total += " ";
   total += per.gender;
   total += " ";
   total += per.dateOfBirth;
   total += " ";
   total += per.dateOfDeath;



   myfile << total << endl;

   myfile.close();

 }
 





//lesa inn ur textaskra og seperate-a hverja linu fyrir sig. hver lina er ein person. Skila thvi svo.

