// ProjectoPersona_Maestro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#pragma warning(suppress : 4996)
#include <string.h>
#include <iostream>
using namespace std;
#include "Persona.h"
#include "Maestro.h"
#include "Alumno.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	char* nombre = new char[30],
		* apellido = new char[30],
		* carnet = new char[30],
		* turno = new char[30],
		* materia = new char[30],
		* seccion = new char[30],
		* grado = new char[30];
	
	Fecha fecha;
	fecha.anio = 0, fecha.mes = 0, fecha.dia = 0;

	int op = 0, contadorPersona = 0, contadoMaestros = 0, contadorAlumnos = 0;
	double salariohora = 0, horastrabajadas = 0, nota1 = 0, nota2 = 0, nota3 = 0,restaRegistro = 0;

	char rp;

	Persona per[5];
	Maestro mas[5];
	Alumno alum[5];

	while (op != 7)
	{
		system("cls");
		cout << "\n1 - Ingresar Persona" << endl;
		cout << "\n2 - Listar Personas" << endl;
		cout << "\n3 - Ingresar Maestro" << endl;
		cout << "\n4 - Listar Maestro" << endl;
		cout << "\n5 - Ingresar Alumno" << endl;
		cout << "\n6 - Listar Alumno" << endl;
		cout << "\n7 - Salir" << endl;
		cout << "\nOpcion Ingresada: "; cin >> op;
		switch (op)
		{
		case 1:
			if (contadorPersona > 4)
			{
				system("cls");
				cout << "\nYa no puedes ingresar mas registros" << endl;
				cout << "\nDesea eliminar el ultimo registro si {s}, no {n} ?"; cin >> rp;
				if (rp == 's')
				{
					--contadorPersona;
					per[contadorPersona].~Persona();
					
				}
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();

			}
			else
			{
				system("cls");
				cin.clear();
				cin.ignore();
				cout << "Ingrese los datos siguiente" << endl;
				cout << "\nCarnet: "; cin.getline(carnet, 20);
				cin.ignore();
				cout << "\nNombre: "; cin.getline(nombre, 20);
				cin.ignore();
				cout << "\nApellido: "; cin.getline(apellido, 20);
				cin.ignore();
				cout << "\nTurno: "; cin.getline(turno, 15);
				cin.ignore();
				cout << "\nIngrese Fecha de nacimineto " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nIngrese Dia: "; cin >> fecha.dia;
				if (fecha.dia < 1 || fecha.dia > 31)
				{
					cout << "\nIngrese un dia valido 1 - 31" << endl;
					while (fecha.dia < 1 || fecha.dia > 31)
					{
						cout << "\nIngrese Mes: "; cin >> fecha.dia;
						cin.ignore();
					}
				}

				cout << "\nIngrese Mes: "; cin >> fecha.mes;
				cin.ignore();
				if (fecha.mes < 1 || fecha.mes > 12)
				{
					cout << "\nIngrese un mes valido 1 - 12" << endl;
					while (fecha.mes < 1 || fecha.mes > 12)
					{
						cout << "\nIngrese Mes: "; cin >> fecha.mes;
						cin.ignore();
					}
				}
				cout << "\nIngrese Anio: "; cin >> fecha.anio;
				cin.ignore();
				if (fecha.anio > 2020 || fecha.anio < 1900)
				{
					cout << "\nIngrese un anio valido 1900 - 2020" << endl;
					while (fecha.anio > 2020 || fecha.anio < 1950)
					{
						cout << "\nIngrese Anio: "; cin >> fecha.anio;
					}

				}
				per[contadorPersona].SetPersona(carnet, nombre, apellido, turno, fecha);
				contadorPersona++;
				cout << "\nRegistro agregado con exito" << endl;
				cout << "\nRegistro restantes: " << 5 - contadorPersona << endl;
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			
			break;
		case 2:
			if (contadorPersona < 1)
			{
				system("cls");
				cout << "Todavia no hay registros" << endl;
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			else
			{
				system("cls");
				for (int i = 0; i < contadorPersona; i++)
				{
					cout << "\nDatos De La Persona" << endl;
					cout << "***********************************************" << endl;
					per[i].imprimir();
					cout << "***********************************************" << endl;
				}
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			
			break;
		case 3:
			if (contadoMaestros > 4)
			{
				system("cls");
				cout << "\nYa no puedes ingresar mas registros" << endl;
				cout << "\nDesea eliminar el ultimo registro si {s}, no {n} ?"; cin >> rp;
				if (rp == 's')
				{
					--contadoMaestros;
					mas[contadoMaestros].~Maestro();

				}
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();

			}
			else
			{
				system("cls");
				cin.clear();
				cin.ignore();
				cout << "Ingrese los datos siguiente" << endl;
				cout << "\nCarnet: "; cin.getline(carnet, 20);
				cin.ignore();
				cout << "\nNombre: "; cin.getline(nombre, 20);
				cin.ignore();
				cout << "\nApellido: "; cin.getline(apellido, 20);
				cin.ignore();
				cout << "\nTurno: "; cin.getline(turno, 15, '\n');
				cin.ignore();
				cout << "\nIngrese Fecha de nacimineto " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nIngrese Dia: "; cin >> fecha.dia;
				if (fecha.dia < 1 || fecha.dia > 31)
				{
					cout << "\nIngrese un dia valido 1 - 31" << endl;
					while (fecha.dia < 1 || fecha.dia > 31)
					{
						cout << "\nIngrese Mes: "; cin >> fecha.dia;
						cin.ignore();
					}
				}

				cout << "\nIngrese Mes: "; cin >> fecha.mes;
				cin.ignore();
				if (fecha.mes < 1 || fecha.mes > 12)
				{
					cout << "\nIngrese un mes valido 1 - 12" << endl;
					while (fecha.mes < 1 || fecha.mes > 12)
					{
						cout << "\nIngrese Mes: "; cin >> fecha.mes;
						cin.ignore();
					}
				}
				cout << "\nIngrese Anio: "; cin >> fecha.anio;
				cin.ignore();
				if (fecha.anio > 2020 || fecha.anio < 1900)
				{
					cout << "\nIngrese un anio valido 1900 - 2020" << endl;
					while (fecha.anio > 2020 || fecha.anio < 1950)
					{
						cout << "\nIngrese Anio: "; cin >> fecha.anio;
					}

				}

				cout << "\nMateria: "; cin.getline(materia, 20);
				cin.ignore();
				cout << "\nSalario por hora: "; cin >> salariohora;
				if (salariohora < 1)
				{
					cout << "\nIngrese un salario mayor a 0" << endl;
					while (salariohora < 1)
					{
						cout << "\nSalario por hora: "; cin >> salariohora;
					}
				}
				cin.ignore();
				cout << "\nHoras trabajadas a la semana: "; cin >> horastrabajadas;
				if (horastrabajadas < 1)
				{
					cout << "\nIngrese horas de trabajo mayor a 0 y menor 169" << endl;
					while (horastrabajadas < 1 || horastrabajadas > 168)
					{
						cout << "\nSalario por hora: "; cin >> horastrabajadas;
					}
				}
				cin.ignore();
				mas[contadoMaestros].SetPersona(carnet, nombre, apellido, turno, fecha);
				mas[contadoMaestros].SetMaestro(horastrabajadas, salariohora, materia);
				contadoMaestros++;
				cout << "\nRegistro agregado con exito" << endl; 
				cout << "\nRegistro restantes: " << 5 - contadoMaestros << endl;
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			
			break;
		case 4 :
			if (contadoMaestros < 1)
			{
				system("cls");
				cout << "Todavia no hay registros" << endl;
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			else
			{
				system("cls");
				for (int i = 0; i < contadoMaestros; i++)
				{
					cout << "Datos Del Maestro" << endl;
					cout << "***********************************************" << endl;
					mas[i].Imprimir();
					cout << "***********************************************" << endl;
				}
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}		
			break;
		case 5:

			if (contadorAlumnos > 4)
			{
				system("cls");
				cout << "\nYa no puedes ingresar mas registros" << endl;
				cout << "\nDesea eliminar el ultimo registro si {s}, no {n} ?"; cin >> rp;
				if (rp == 's')
				{
					--contadorAlumnos;
					alum[contadorAlumnos].~Alumno();

				}
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();

			}
			else
			{
				system("cls");
				system("cls");
				cin.clear();
				cin.ignore();
				cout << "Ingrese los datos siguiente" << endl;
				cout << "\nCarnet: "; cin.getline(carnet, 20);
				cin.ignore();
				cout << "\nNombre: "; cin.getline(nombre, 20);
				cin.ignore();
				cout << "\nApellido: "; cin.getline(apellido, 20);
				cin.ignore();
				cout << "\nTurno: "; cin.getline(turno, 15);
				cin.ignore();
				cout << "\nIngrese Fecha de nacimineto " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nIngrese Dia: "; cin >> fecha.dia;
				if (fecha.dia < 1 || fecha.dia > 31)
				{
					cout << "\nIngrese un dia valido 1 - 31" << endl;
					while (fecha.dia < 1 || fecha.dia > 31)
					{
						cout << "\nIngrese Mes: "; cin >> fecha.dia;
						cin.ignore();
					}
				}

				cout << "\nIngrese Mes: "; cin >> fecha.mes;
				cin.ignore();
				if (fecha.mes < 1 || fecha.mes > 12)
				{
					cout << "\nIngrese un mes valido 1 - 12" << endl;
					while (fecha.mes < 1 || fecha.mes > 12)
					{
						cout << "\nIngrese Mes: "; cin >> fecha.mes;
						cin.ignore();
					}
				}
				cout << "\nIngrese Anio: "; cin >> fecha.anio;
				cin.ignore();
				if (fecha.anio > 2020 || fecha.anio < 1900)
				{
					cout << "\nIngrese un anio valido 1900 - 2020" << endl;
					while (fecha.anio > 2020 || fecha.anio < 1950)
					{
						cout << "\nIngrese Anio: "; cin >> fecha.anio;
					}
				}
				cout << "\nIngrese la Primer Nota: "; cin >> nota1;
				if (nota1 < 0 || nota1 > 10)
				{
					cout << "Ingrese una nota de 0 hasta 10" << endl;
					while (nota1 < 0 || nota1 > 10)
					{
						cout << "\nIngrese la Primer Nota: "; cin >> nota1;
					}
				}
				cout << "\nIngrese la Segunda Nota: "; cin >> nota2;
				if (nota2 < 0 || nota2 > 10)
				{
					cout << "Ingrese una nota de 0 hasta 10" << endl;
					while (nota2 < 0 || nota2 > 10)
					{
						cout << "\nIngrese la Segunda Nota: "; cin >> nota2;
					}
				}
				cout << "\nIngrese la Tercer Nota: "; cin >> nota3;
				if (nota3 < 0 || nota3 > 10)
				{
					cout << "Ingrese una nota de 0 hasta 10" << endl;
					while (nota3 < 0 || nota3 > 10)
					{
						cout << "\nIngrese la Tercer Nota: "; cin >> nota3;
					}
				}

				alum[contadorAlumnos].SetPersona(carnet, nombre, apellido, turno, fecha);
				alum[contadorAlumnos].SetAlumno(materia, grado, seccion, nota1, nota2, nota3);
				contadorAlumnos++;
				cout << "\nRegistro agregado con exito" << endl;
				cout << "\nRegistro restantes: " << 5 - contadorAlumnos << endl;
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			
			break;
		case 6:

			if (contadorAlumnos < 1)
			{
				system("cls");
				cout << "Todavia no hay registros" << endl;
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}
			else
			{
				system("cls");
				for (size_t i = 0; i < contadorAlumnos; i++)
				{
					cout << "Datos del alumno" << endl;
					cout << "************************************************" << endl;
					alum[i].Imprimir();
					cout << "************************************************" << endl;
				}
				cout << "\nPresione cualquier letra para volver al menu " << endl;
				_getch();
			}		
			break;
		default:
			cout << "Ingrese una opcion valida" << endl;
			break;
		}
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
