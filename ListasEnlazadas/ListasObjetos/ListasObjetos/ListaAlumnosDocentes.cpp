#include <iostream>
#include "Alumno.h"
#include "Docente.h"
#include "Lista.h"

using namespace std;
Lista<Alumno*>* lst_alumnos = new Lista<Alumno*>();
Lista<Docente*>* lst_docente = new Lista<Docente*>();

void IngresarAlumno(int i)
{
	string cod, dni, nom, ape, dir, tel, email, cel, gen, carr;
	cout << "\n";
	cout << "=========REGISTRAR ALUMNO=========" << endl;
	cout << "Ingrese Código		: "; cin >> cod;
	cout << "Ingrese Dni		: "; cin >> dni;
	cout << "Ingrese Nombres	: "; cin >> nom;
	cout << "Ingrese Apellidos	: "; cin >> ape;
	cout << "Ingrese Direccion	: "; cin >> dir;
	cout << "Ingrese Telefono	: "; cin >> tel;
	cout << "Ingrese Email		: "; cin >> email;
	cout << "Ingrese Celular	: "; cin >> cel;
	cout << "Ingrese Genero		: "; cin >> gen;
	cout << "Ingrese Carrera	: "; cin >> carr;

	Alumno* alumno = new Alumno(cod, carr, dni, nom, ape, dir, tel, email, cel, gen);
	lst_alumnos->agregaPos(alumno, i);
}
void IngresarDocente(int i)
{
	string cod, dni, nom, ape, dir, tel, email, cel, gen, area, fac;
	cout << "\n";
	cout << "=========REGISTRAR DOCENTE=========" << endl;
	cout << "Ingrese Código		: "; cin >> cod;
	cout << "Ingrese Dni		: "; cin >> dni;
	cout << "Ingrese Nombres	: "; cin >> nom;
	cout << "Ingrese Apellidos	: "; cin >> ape;
	cout << "Ingrese Direccion	: "; cin >> dir;
	cout << "Ingrese Telefono	: "; cin >> tel;
	cout << "Ingrese Email		: "; cin >> email;
	cout << "Ingrese Celular	: "; cin >> cel;
	cout << "Ingrese Genero		: "; cin >> gen;
	cout << "Ingrese Area		: "; cin >> area;
	cout << "Ingrese Facultad	: "; cin >> fac;

	Docente* docente = new Docente(cod, area, fac, dni, nom, ape, dir, tel, email, cel, gen);
	lst_docente->agregaPos(docente, i);
}
void ListarAlumnos()
{
	for (int i = 0; i < lst_alumnos->longitud(); i++)
	{
		cout << "\nAlumno " << i + 1 << ": " << endl;
		lst_alumnos->obtenerPos(i)->mostrarAlumno();
	}
}
void ListarDocentes()
{
	for (int i = 0; i < lst_docente->longitud(); i++)
	{
		cout << "\nDocente " << i + 1 << ": " << endl;
		lst_docente->obtenerPos(i)->mostrarDocente();
	}
}
void ListarAlumnosSoftware()
{
	for (int i = 0; i < lst_alumnos->longitud(); i++)
	{
		if (lst_alumnos->obtenerPos(i)->getCarnreraProfesional() == "Software")
		{
			lst_alumnos->obtenerPos(i)->mostrarAlumno();
		}
	}
}
int Menu()
{
	cout << "\n";
	cout << "=============MENU DE OPCIONES=============" << endl;
	cout << "\t<1> Ingresar Alumno." << endl;
	cout << "\t<2> Ingresar Docente." << endl;
	cout << "\t<3> Listar Alumnos." << endl;
	cout << "\t<4> Listar Docentes." << endl;
	cout << "\t<5> Listar Alumnos de software." << endl;
	cout << "\t<6> Salir." << endl;
	cout << endl;
	cout << "Ingrese un opcion: ";
	int opcion;
	do {
		cin >> opcion;
		if (opcion < 0 || opcion>6)
			cout << "Ingrese una opcion valida...";
	} while (opcion < 0 || opcion>6);

	return opcion;
}

int main()
{
	int nro_alumnos = 0, nro_docentes = 0;
	while (true)
	{
		int opcion = Menu();
		if (opcion == 6)
		{
			cout << "Programa Terminado...";
			break;
		}
		switch (opcion)
		{
		case 1: IngresarAlumno(nro_alumnos); 
			nro_alumnos++;
			break;
		case 2: IngresarDocente(nro_docentes);
			nro_docentes++;
			break;
		case 3: ListarAlumnos(); break;
		case 4: ListarDocentes(); break;
		case 5: ListarAlumnosSoftware(); break;
		case 6: break;
		}
	}
	return 0;
}

