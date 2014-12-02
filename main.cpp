#include <QCoreApplication>
#include <list>
#include <vector>
#include <fstream>
#include <iostream>
#include "person.h"
#include "comparer.h"
using namespace std;

vector<person> read();
vector<person> search(string terms, char type);
void print(vector<person> eh);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Comparer comp = Comparer("N");
    vector<person> l;
//    for(int i = 0; i < 15; i++){
//            l.push_back(pesron(asd));
//    }
//    try {
//        l.sort(comp);
//        outList(l);
//    } catch(UserErrorException e) {
//        cout << "Kjáni!!!" << endl;
//    } catch(InvalidSortException e) {
//        cout << "Þekkt villa" << endl;
//    } catch(...) {//InvalidSortException e
//        cout << "ERROR ########## Invalid sort type ############" << endl;
//        continue;
//    }

}
