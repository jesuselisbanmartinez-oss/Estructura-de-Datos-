#include <iostream>
#include "Cola.h"
#include "Alumno.h"

using namespace std;

int main()
{
	//Creamos la Cola de alumnos
	Cola<Alumno*>* cola_alumnos;
	//Instanciando un objeto de la clases Cola
	cola_alumnos = new Cola<Alumno*>();
	//Encolando objetos de la clase Alumno
	cola_alumnos->encolar(new Alumno("123", "JUAN", "MARKETING"));
	cola_alumnos->encolar(new Alumno("231", "PEDRO", "ADMINISTRACION"));
	cola_alumnos->encolar(new Alumno("345", "TERESA", "ARQUITECTURA"));
	cola_alumnos->encolar(new Alumno("456", "VANESSA", "ECONOMIA"));
	cola_alumnos->encolar(new Alumno("567", "CARLOS", "MEDICINA"));

	//Mostrando y desencolando los alumnos
	Alumno* alumno;

	do {
		alumno = cola_alumnos->desencolar();
		cout << alumno->toString() << endl;

	} while (!cola_alumnos->esVacia());

	return 0;
}