#include "Nodo.h"
using namespace std;

template <class T>
class Pila
{
private:
	Nodo<T>* tope;
public:
	Pila()
	{
		tope = NULL;
	}

	void apilar(T v);
	T desapilar();
	bool esVacia();
};
//IMPLEMENTACION
template <class T>
bool Pila<T>::esVacia()
{
	return (tope == NULL);
}

template <class T>
void Pila<T>::apilar(T v)
{
	if (esVacia())
	{
		tope = new Nodo<T>(v);
	}
	else
		tope = new Nodo<T>(v, tope);
}
template <class T>
T Pila<T>::desapilar()
{
	if (esVacia())
		//Pila vacia
		return NULL;
	else
	{
		T elemento = (T)(tope->dato);
		tope = (Nodo<T>*)tope->siguiente;
		return elemento;
	}
}