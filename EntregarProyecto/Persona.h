#pragma once
struct Fecha
{
    int dia;
    int mes;
    int anio;
};
class Persona
{
private:
    char* carnet;
    char* nombre;
    char* apellido;
    Fecha fechaNacimiento;
    Fecha fechaHoy;
    char* turno;
    void imprimirFechaNacimiento();
    void calcularEdad();
public:
    void setCarnet(char*);
    void setNombre(char*);
    void setApellido(char*);
    void setFechaNacimiento(Fecha);
    void setTurno(char*);
    void setFechaHoy(Fecha);
    Fecha getFechaHoy();
    char* getCarnet();
    char* getNombre();
    char* getApellido();
    Fecha getFechaNacimiento();
    char* getTurno();
    void imprimir();
};
