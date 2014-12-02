#include "helper.h"



vector<Person> helper::read()
{
    //notum ifstream til ad na i uplysingar ur textaskjalinu

    vector<Person> skil;
    ifstream lesari("file.txt");
    string lina;

    //notum getline til ad lesa inn i string, eina linu fyrir sig

   while (getline(lesari,lina))
   {

       skil.push_back(Person(lina));

   }

   return skil;
}

<<<<<<< Updated upstream
vector<Person> helper::sort(string temp, vector<Person> per)
=======


vector<Person> helper::sort(string temp)
>>>>>>> Stashed changes
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


<<<<<<< Updated upstream
void helper::write(Person per)
=======

 void helper::write(Person per)

>>>>>>> Stashed changes
 {
   //opnum textaskjalid file
   ofstream myfile;

   myfile.open ("file.txt", ofstream::app);

   //lesum ur person yfir i strenginn total
   string total ="";
   total += per.firstName;
   total += " ";
   total += per.lastName;
   total += " ";
   total += per.gender;
   total += " ";

   //notum ostringstream til þess að lesa int breytur inn i string

   ostringstream convert1;
   convert1 << per.dateOfBirth;

   total += convert1.str();
   total += " ";

   ostringstream convert2;
   convert2 << per.dateOfDeath;
   total += convert2.str();

    //setjum strenginn inn i textaskranna

   myfile << total << endl;

   myfile.close();

 }








