#pragma once
#include "Persona.h"
class Alumno: public Persona 
{
private:
	string materia;
	string grado;
	string seccion;
	string estado;
	double nota1;
	double nota2;
	double nota3;
	double notaFinal;
	double CalculaNotaFinal(double n1, double n2, double n3);
	string Estado();
public:

	~Alumno();

	void Imprimir();
	void SetAlumno(string materia, string grado, string seccion, double n1, double n2, double n3);

	void SetMateria(string materia);
	void SetGrado(string grado);
	void SetSeccion(string seccion);
	void SetEstado(string estado);
	void SetNota1(double nota);
	void SetNota2(double nota);
	void SetNota3(double nota);
	void SetNotaFinal(double notafinal);

	string GetMateria();
	string GetGrado();
	string GetSeccion();
	string GetEstado();
	double GetNota1();
	double GetNota2();
	double GetNota3();
	double GetNotaFinal();
};

