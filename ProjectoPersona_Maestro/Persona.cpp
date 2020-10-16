#include "Persona.h"
#include <iostream>
#include <chrono>
#include <time.h>
#pragma warning(suppress : 4996)
using namespace std;


Persona::~Persona()
{
	cout << "Destruyendo los registro" << endl;
}

void Persona::SetPersona(string carnet,string nombre, string apellido, string turno, Fecha fechaCumple)
{
	time_t t;
	struct tm* tm;
	t = time(NULL);
	tm = localtime(&t);

	Fecha fechahoy;
	fechahoy.dia = tm->tm_mday;
	fechaHoy.mes = tm->tm_mon + 1;
	fechaHoy.anio = 1900 + tm->tm_year;
	SetCarnet(carnet);
	SetNombre(nombre);
	SetApellido(apellido);
	SetTurno(turno);
	SetFechaNacimiento(fechaCumple);
	SetFechaHoy(fechaHoy);
}
void Persona::ImprimirFechaNacimiento()
{

	cout << "\nFecha Nacimiento: " << fechaNacimiento.dia << 
		"/" << fechaNacimiento.mes << "/" << fechaNacimiento.anio << endl;
}

void Persona::CalcularEdad()
{
	int edad = fechaHoy.anio - fechaNacimiento.anio;
	cout << "\nEdad: " << edad << endl;
}

void Persona::SetCarnet(string carnet)
{
	this->carnet = carnet;
}

void Persona::SetNombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::SetApellido(string apellido)
{
	this->apellido = apellido;
}

void Persona::SetFechaNacimiento(Fecha fecha)
{
	this->fechaNacimiento = fecha;
}

void Persona::SetTurno(string turno)
{
	this->turno = turno;
}

void Persona::SetFechaHoy(Fecha fechahoy)
{
	this->fechaHoy = fechahoy;
}

Fecha Persona::GetFechaHoy()
{
	return Fecha();
}

string Persona::GetCarnet()
{
	return string(carnet);
}

string Persona::GetNombre()
{
	return string(nombre);
}

string Persona::GetApellido()
{
	return string(apellido);
}

Fecha Persona::GetFechaNacimiento()
{
	return Fecha(fechaNacimiento);
}

string Persona::GetTurno()
{
	return string(turno);
}

void Persona::imprimir()
{
	cout << "\nCarnet: " << GetCarnet() << endl;
	cout << "\nNombre: " << GetNombre() << endl;
	cout << "\nApellido: " << GetApellido() << endl;
	cout << "\nTurno: " << GetTurno() << endl;
	ImprimirFechaNacimiento();
	CalcularEdad();
}
