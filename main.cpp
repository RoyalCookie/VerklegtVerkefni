#include <QCoreApplication>
#include <list>
#include <vector>
#include <fstream>
#include <iostream>
#include "person.h"
using namespace std;

vector<person> read();
vector<person> search(string terms, char type);
void print(vector<person> eh);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Search implementation
    //vector<person> listin;
    //listin = search("Simpson",'N');



}
