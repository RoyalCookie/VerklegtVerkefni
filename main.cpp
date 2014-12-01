#ifndef VARIADIC_TEMPLATES_SUPPORTED

#error "Your compiler doesn't support variadic templates.  :("

#else
#include <QCoreApplication>
#include <list>
#include <vector>
#include <fstream>
#include <iostream>
#include "person.h"

using namespace std;

vector<person> read();
vector<person> search(string terms, char type);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Search implementation

    //search("Mary",'N');


    return a.exec();
}



vector<person> search(string terms, char type){




    vector<person> listi = read();
    person* linqTest;
    linqTest = new person[listi.size()];
}

vector<person> read(){
    vector<person> persons;
    ifstream reader("/Users/janus/Workspace/C++/VerklegtVerkefniDummy/VerklegtVerkefniDummy/example.txt");
    string variables;
    if (reader.is_open()){
        while (getline(reader, variables)) {
            person scientist(variables);
            persons.push_back(scientist);
        }
    }
    return persons;
}
