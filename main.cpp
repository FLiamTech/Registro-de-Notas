#include "registro.h"
#include <modelo.h>


#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Registro w;
    w.show();

    Modelo m("Fabian", "Izquierdo", 21, 20);
    qDebug() << m.to_string();


    return a.exec();
}
