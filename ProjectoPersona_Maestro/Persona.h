#pragma once
using namespace std;
#include <string>
struct Fecha
{
    int dia;
    int mes;
    int anio;
};

class Persona
{
private:
    string carnet;
    string nombre;
    string apellido;
    Fecha fechaNacimiento;
    Fecha fechaHoy;
    string turno;
    void ImprimirFechaNacimiento();
    void CalcularEdad();
public:
    ~Persona();
    void SetPersona(string carnet, string nombre, string apellido, string turno, Fecha fechaCumple);
    void SetCarnet(string);
    void SetNombre(string);
    void SetApellido(string);
    void SetFechaNacimiento(Fecha);
    void SetTurno(string);
    void SetFechaHoy(Fecha);
    Fecha GetFechaHoy();
    string GetCarnet();
    string GetNombre();
    string GetApellido();
    Fecha GetFechaNacimiento();
    string GetTurno();
    void imprimir();
};

