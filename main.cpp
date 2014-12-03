#include <QCoreApplication>
#include "person.h"
#include "interfacelayer.h"
#include "helper.h"
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    interfaceLayer ui;
    ui.choose();
}
