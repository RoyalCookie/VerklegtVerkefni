#ifndef INTERFACELAYER_H
#define INTERFACELAYER_H

#include "serviceLayer.h"

class interfaceLayer
{
public:

    interfaceLayer();
    void choose();
    void skra();
    void leita();
    void birta();
    void sortitby(char& type);
    void searchitby(char& sort);
private:
    serviceLayer service;
};
#endif // INTERFACELAYER_H
