#include "Maestro.h"

#include <iostream>

using namespace std;

void Maestro::setDatosPersona(char* _carnet, char* _nombre, char* _apellido, Fecha _fechaNac, char* _turno)
{
    Persona::setCarnet(_carnet);
    Persona::setNombre(_nombre);
    Persona::setApellido(_apellido);
    Persona::setFechaNacimiento(_fechaNac);
    Persona::setTurno(_turno);

    Fecha hoy;
    hoy.dia = 10;
    hoy.mes = 10;
    hoy.anio = 2020;
    Persona::setFechaHoy(hoy);
}
void Maestro::setHora(double _hora)
{
    hora = _hora;
}
void Maestro::setSalarioHora(double _salario)
{
    salarioHora = _salario;
}
void Maestro::setMateria(char* _materia)
{
    materia = _materia;
}
double Maestro::getHora()
{
    return hora;
}
double Maestro::getSalarioHora()
{
    return salarioHora;
}
char* Maestro::getMateria()
{
    return materia;
}
void Maestro::imprimir()
{
    Persona::imprimir();
    cout << "Materia: " << getMateria()
        << "\nTurno: " << getTurno()
        << "\nHora: " << getHora()
        << "\nSalario por hora: " << getSalarioHora() << endl;
    calcularSueldo();
}
void Maestro::calcularSueldo()
{
    double sueldo = getSalarioHora() * getHora();
    cout << "Sueldo: " << sueldo << endl;
}