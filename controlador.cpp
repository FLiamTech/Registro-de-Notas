#include "controlador.h"

Controlador::Controlador()
{

}

QString Controlador::estado()
{
    if(notaFinal() >= 70.0)
    {
       return "Aprobado";
    }
    else if(notaFinal() >= 25.0)
    {
        return "Remedial";
    }
    else
    {
        return "Reprobado";
    }
}

void Controlador::calculoNotaFinal()
{
    // float notaFinal = (m_estudiante.nota1() + m_estudiante.nota2());
    // notaFinal = notaFinal > Modelo::maxNota ? Modelo::maxNota : notaFinal;
}

float Controlador::notaFinal()
{
    float notaFinal = (m_estudiante.nota1() + m_estudiante.nota2());
    return notaFinal > Modelo::maxNota ? Modelo::maxNota : notaFinal;
}
