#ifndef INTERFACELAYER_H
#define INTERFACELAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <list>

class interfaceLayer
{
public:

    interfaceLayer();
    void choose();
    void skra();
    void leita();
    void birta();
    void sortitby(char& type);
private:

    serviceLayer list;
    serviceLayer search;
    serviceLayer write;
};
#endif // INTERFACELAYER_H
