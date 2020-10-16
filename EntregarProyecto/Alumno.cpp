#include "Alumno.h"
#include <iostream>
using namespace std;

void Alumno::setDatosPersona(char* _carnet, char* _nombre, char* _apellido, Fecha _fechaNac, char* _turno)
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

void Alumno::imprimir()
{
	Persona::imprimir();
	cout << "Nota 1 " << getn1() << endl;
	cout << "Nota 2 " << getn2() << endl;
	cout << "Nota 3 " << getn3() << endl;
	cout << "Nota Final" << getn1() + getn2() + getn3() << endl;
	if (getn1() + getn2() + getn3() > 6)
	{
		cout << "Aprobado" << endl;
	}
	else
	{
		cout << "Reprobado" << endl;
	}
}

void Alumno::setn1(double _n1)
{
	n1 = _n1;
}

void Alumno::setn2(double _n2)
{
	n2 = _n2;
}

void Alumno::setn3(double _n3)
{
	n3 = _n3;
}

void Alumno::setmateria(char* _materia)
{
	materia = _materia;
}

double Alumno::getn1()
{
	return n1;
}

double Alumno::getn2()
{
	return n2;
}

double Alumno::getn3()
{
	return n3;
}

char* Alumno::getmateria()
{
	return materia;
}
