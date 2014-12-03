#include "helper.h"



vector<person> helper::read()
{
    //notum ifstream til ad na i uplysingar ur textaskjalinu

    vector<person> skil;
    ifstream lesari("file.txt");
    string lina;

    //notum getline til ad lesa inn i string, eina linu fyrir sig

   while (getline(lesari,lina))
   {

       skil.push_back(person(lina));

   }

   return skil;
}


vector<person> helper::sort(string temp, vector<person> per)

{
    list<person> l = list<person>();
    for(int i = 0; i < (signed)per.size(); i++){
        l.push_back(per[i]);
    }
    Comparer comp = Comparer(temp);

    l.sort(comp);
    vector<person> ret;
    ret.insert(ret.begin(), l.begin(),l.end());
    return ret;
}



void helper::write(person per)



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








