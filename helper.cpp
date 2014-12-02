#include "helper.h"

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

vector<Person> helper::sort(string temp, vector<Person> per)
{
    list<Person> l = list<Person>();
    for(int i = 0; i < per.size(); i++){
        l.push_back(per[i]);
    }
    Comparer comp = Comparer(temp);

    l.sort(comp);
    vector<Person> ret;
    ret.insert(ret.begin(), l.begin(),l.end());
    return ret;
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








