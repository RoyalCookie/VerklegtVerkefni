#ifndef COMPARER_H
#define COMPARER_H
#include <string>


class comparer
{
private:
    std::string orderCol;
    bool compare(std::string first, std::string second);
public:
    comparer();
    comparer(std::string col);
};

#endif // COMPARER_H
