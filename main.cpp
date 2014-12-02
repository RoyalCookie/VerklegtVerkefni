#include <QCoreApplication>
#include "Person.h"
#include "interfacelayer.h"
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    interfaceLayer ui;
    ui.choose();
}
