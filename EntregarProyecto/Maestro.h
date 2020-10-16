#pragma once
#include "Persona.h"

class Maestro : public Persona
{
private:
    double hora;
    double salarioHora;
    char* materia;
    void calcularSueldo();
public:
    void setDatosPersona(char*, char*, char*, Fecha, char*);
    void setHora(double);
    void setSalarioHora(double);
    void setMateria(char*);
    double getHora();
    double getSalarioHora();
    char* getMateria();
    void imprimir();
};