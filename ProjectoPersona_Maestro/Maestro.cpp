#include "Maestro.h"
using namespace std;
#include <iostream>

void Maestro::CalcularSueldo()
{
	double sueldo = GetSalarioHora() * GetHora();
	cout << "Sueldo: " << sueldo << endl;
}

Maestro::~Maestro()
{
	cout << "Destruyendo registro" << endl;
}

void Maestro::SetMaestro(double horas, double salariohora, string materia)
{
	SetHora(horas);
	SetSalarioHora(salariohora);
	SetMateria(materia);
}

void Maestro::SetHora(double hora)
{
	this->_hora = hora;
}

void Maestro::SetSalarioHora(double salariohora)
{
	this->_salarioHora = salariohora;
}

void Maestro::SetMateria(string materia)
{
	this->_materia = materia;
}

double Maestro::GetHora()
{
	return this->_hora;
}

double Maestro::GetSalarioHora()
{
	return this->_salarioHora;
}

string Maestro::GetMateria()
{
	return string(_materia);
}

void Maestro::Imprimir()
{
	imprimir();
	cout << "Materia: " << GetMateria() << endl;
	cout << "\nTurno: " << GetTurno() << endl;
	cout << "\nHora: " << GetHora() << endl;
	cout << "\nSalario por hora: " << GetSalarioHora() << endl;
	CalcularSueldo();
}
