#pragma once
#include "Persona.h"
class Alumno: public Persona
{
private:
	char* materia;
	double n1;
	double n2;
	double n3;
public:
	void setn1(double);
	void setn2(double);
	void setn3(double);
	void setmateria(char*);
	double getn1();
	double getn2();
	double getn3();
	char* getmateria();
	void setDatosPersona(char* _carnet, char* _nombre, char* _apellido, Fecha _fechaNac, char* _turno);
	void imprimir();
};

