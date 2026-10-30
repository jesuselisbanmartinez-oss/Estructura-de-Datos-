#include <iostream>
#include "Cola.h"
#include "Punto.h"
using namespace std;

int main()
{
	Cola<Punto*>* cola;
	cola = new Cola <Punto*> ();
	//Encolamos objetos de la clase Punto
	cola->encolar(new Punto(6, 3));
	cola->encolar(new Punto(2, 5));
	cola->encolar(new Punto(3, 3));
	cola->encolar(new Punto(1, 4));

	Punto* elem;
	do {
		elem = cola->desencolar();
		cout << elem->toString() << endl;
	} while (!cola->esVacia());

	return 0;
}

