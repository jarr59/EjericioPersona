// EntregarProyecto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Alumno.h"
#include "Maestro.h"
using namespace std;
#include <iostream>
int main()
{
	Alumno alumno;
	Maestro maestro;
	char* nombre = new char[10];
	char* carnet = new char[10];
	char* apellido = new char[10];
	char* turno = new char[10];
	char* materia= new char[10];
	double n1, n2, n3;
	int mes, a, dia;
	double hora;
	double salarioHora;
	Fecha fecha;
	fecha.anio = 2020;
	fecha.anio = 10;
	fecha.anio = 10;
	char repetir = ' ';
	while (repetir != 's' || repetir != 'S')
	{
		cout << "Alumno" << endl;
		cout << "Nombre" << endl;
		cin >> nombre;
		cout << "Carnet " << endl;
		cin >> carnet;
		cout << "Apellido " << endl;
		cin >> apellido;
		cout << "Turno " << endl;
		cin >> turno;
		cout << "dia" << endl;
		cin >> dia;
		cout << "mes" << endl;
		cin >> mes;
		cout << "año" << endl;
		cin >> a;
		fecha.dia = dia;
		fecha.mes = mes;
		fecha.anio = a;
		alumno.setDatosPersona(carnet, nombre, apellido, fecha, turno);
		cout << "Nota 1" << endl;
		cin >> n1;
		cout << "Nota 2" << endl;
		cin >> n2;
		cout << "Nota 3" << endl;
		cin >> n3;
		alumno.setn1(n1);
		alumno.setn2(n2);
		alumno.setn3(n3);
		alumno.setmateria(materia);
		alumno.imprimir();
		cout << "Maestro" << endl;
		cout << "Nombre" << endl;
		cin >> nombre;
		cout << "Carnet " << endl;
		cin >> carnet;
		cout << "Apellido " << endl;
		cin >> apellido;
		cout << "Turno " << endl;
		cin >> turno;
		cout << "dia" << endl;
		cin >> dia;
		cout << "mes" << endl;
		cin >> mes;
		cout << "año" << endl;
		cin >> a;
		fecha.dia = dia;
		fecha.mes = mes;
		fecha.anio = a;
		maestro.setDatosPersona(carnet, nombre, apellido, fecha, turno);
		cout << "horas trabajadas" << endl;
		cin >> hora;
		cout << "pargo por hora" << endl;
		cin >> salarioHora;
		cout << "materia" << endl;
		cin >> materia;
		maestro.setHora(hora);
		maestro.setSalarioHora(salarioHora);
		maestro.setMateria(materia);
		maestro.imprimir();

		cout << "Si desea salir presion {s}" << endl;
		cin >> repetir;

	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
