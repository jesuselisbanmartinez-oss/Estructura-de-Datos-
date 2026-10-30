#include <iostream>
#include "Pila.h"
#include "Punto.h"

using namespace std;

int main()
{
	//Creamos el objeto de la clase Pila
	Pila<Punto*>* pila;
	pila = new Pila<Punto*>();
	//Apilando los Puntos
	pila->apilar(new Punto(7, 8));
	pila->apilar(new Punto(4, 5));
	pila->apilar(new Punto(2, 2));
	pila->apilar(new Punto(5, 6));

	Punto* elem;
	do {
		elem = pila->desapilar();
		if (elem != NULL)
			cout << elem->toString() << endl;
	} while (!pila->esVacia());

	return 0;
}
