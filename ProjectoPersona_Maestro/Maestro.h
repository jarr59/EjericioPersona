#pragma once
#include "Persona.h"
class Maestro: public Persona 
{
private:
    double _hora;
    double _salarioHora;
    string _materia;
    void CalcularSueldo();
public:
    ~Maestro();
    void SetMaestro(double horas, double salariohora, string materia);
    void SetHora(double);
    void SetSalarioHora(double);
    void SetMateria(string);
    double GetHora();
    double GetSalarioHora();
    string GetMateria();
    void Imprimir();
};

