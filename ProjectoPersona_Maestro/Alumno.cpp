#include "Alumno.h"
#include <iostream>

//void Alumno::SetAlumno(string carnet, string nombre, string apellido, string turno, Fecha fechaCumple)
//{
//    SetPersona(carnet, nombre, apellido, turno, fechaCumple);
//}
void Alumno::SetAlumno(string materia, string grado, string seccion, double nota1, double nota2, double nota3)
{
    SetMateria(materia);
    SetGrado(grado);
    SetSeccion(seccion);
    SetNota1(nota1);
    SetNota1(nota2);
    SetNota1(nota3);
    SetNotaFinal(CalculaNotaFinal(nota1, nota2, nota3));
    SetEstado(Estado());
}
double Alumno::CalculaNotaFinal(double n1, double n2, double n3)
{
    return (n1 + n2 + n3) / 3;
}

string Alumno::Estado()
{
   return string((GetNotaFinal() > 6 ? "Aprobado" : "Reprobo"));
}

Alumno::~Alumno()
{
    cout << "Destruyendo registro" << endl;
}

void Alumno::Imprimir()
{
    imprimir();
    //cout << "\nMateria: " << GetMateria() << endl;
    cout << "\nNota Final: " << GetNotaFinal() << endl;
    cout << "\nEstado: " << GetEstado() << endl;
}

void Alumno::SetMateria(string materia)
{
    this->materia = materia;
}

void Alumno::SetGrado(string grado)
{
    this->grado = grado;
}

void Alumno::SetSeccion(string seccion)
{
    this->seccion = seccion;
}

void Alumno::SetEstado(string estado)
{
    this->estado = estado;
}

void Alumno::SetNota1(double nota)
{
    this->nota1 = nota;
}

void Alumno::SetNota2(double nota)
{
    this->nota2 = nota;
}

void Alumno::SetNota3(double nota)
{
    this->nota3 = nota;
}

void Alumno::SetNotaFinal(double notafinal)
{
    this->notaFinal = notafinal;
}

string Alumno::GetMateria()
{
    return string(materia);
}

string Alumno::GetGrado()
{
    return string(grado);
}

string Alumno::GetSeccion()
{
    return string(seccion);
}

string Alumno::GetEstado()
{
    return string(estado);
}

double Alumno::GetNota1()
{
    return this->nota1;
}

double Alumno::GetNota2()
{
    return this->nota2;
}

double Alumno::GetNota3()
{
    return this->nota3;
}

double Alumno::GetNotaFinal()
{
    return this->notaFinal;
}
