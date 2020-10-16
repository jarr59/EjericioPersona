#include "Persona.h"
#include <iostream>

using namespace std;

void Persona::setCarnet(char* _carnet)
{
    carnet = _carnet;
}
void Persona::setNombre(char* _nombre)
{
    nombre = _nombre;
}
void Persona::setApellido(char* _apellido)
{
    apellido = _apellido;
}
void Persona::setFechaNacimiento(Fecha _fechaNac)
{
    fechaNacimiento = _fechaNac;
}
void Persona::setTurno(char* _turno)
{
    turno = _turno;
}
char* Persona::getCarnet()
{
    return carnet;
}
char* Persona::getNombre()
{
    return nombre;
}
char* Persona::getApellido()
{
    return apellido;
}
Fecha Persona::getFechaNacimiento()
{
    return fechaNacimiento;
}
char* Persona::getTurno()
{
    return turno;
}
void Persona::setFechaHoy(Fecha _fechaHoy)
{
    fechaHoy = _fechaHoy;
}
Fecha Persona::getFechaHoy()
{
    return fechaHoy;
}
void Persona::imprimir()
{
    cout << "Carnet: " << getCarnet()
        << "\nNombre: " << getNombre()
        << "\nApellido: " << getApellido()
        << "\nFecha nacimiento: ";
    imprimirFechaNacimiento();
    calcularEdad();
}
void Persona::imprimirFechaNacimiento()
{
    cout << fechaNacimiento.dia << "/" << fechaNacimiento.mes << "/" << fechaNacimiento.anio << endl;
}
void Persona::calcularEdad()
{
    int edad = fechaHoy.anio - fechaNacimiento.anio;
    cout << "Edad: " << edad << endl;
}