#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include <string>
#include <list>

using namespace std;
class helper{
public:
    vector<person> Sort(vector<person> listi, char type);
    vector<person> Read();
    vector<person> Write(vector<person> listi);
};


#endif // HELPER_H
