#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <modelo.h>

class Controlador
{
public:
    Controlador();
    QString estado();
    void calculoNotaFinal();
    void notaMinima();

    float notaFinal();
private:
    Modelo m_estudiante;
};

#endif // CONTROLADOR_H
