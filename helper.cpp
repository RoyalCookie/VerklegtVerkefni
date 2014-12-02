#include "helper.h"
//vector<Person> Sort(vector<Person> listi, char type){
//    list<Person> listToSort;
//    for(int i = 0; i < listi.size; i++){
//        listToSort.push_back(listi[i]);
//    }
//}

vector<Person> helper::read()
{
    vector<Person> skil;
    ifstream lesari("file.txt");
    string lesa;
   while (getline(lesari,lesa))
   {

       skil.push_back(Person(lesa));


   }



return skil;
}


 void helper::write(Person per)

 {
   ofstream myfile;

   myfile.open ("file.txt", ofstream::app);

   string total ="";
   total += per.firstName;
   total += " ";
   total += per.lastName;
   total += " ";
   total += per.gender;
   total += " ";

   ostringstream convert1;
   convert1 << per.dateOfBirth;

   total += convert1.str();
   total += " ";

   ostringstream convert2;
   convert2 << per.dateOfDeath;
   total += convert2.str();


   myfile << total << endl;

   myfile.close();

 }
 







