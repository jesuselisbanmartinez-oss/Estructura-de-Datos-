#include <iostream>
#include "HashEntidad.h"

class HashTable
{
private:
	HashEntidad** tabla;
	int numElementos;
	int TABLE_SIZE;

public:
	HashTable(int TABLE_SIZE = 128)
	{
		this->TABLE_SIZE = TABLE_SIZE;
		tabla = new HashEntidad * [TABLE_SIZE];
		for (int i = 0; i < TABLE_SIZE; i++)
		{
			tabla[i] = nullptr;
		}
		numElementos = 0;
	}

	~HashTable()
	{
		for (int i = 0; i < TABLE_SIZE; i++)
		{
			if (tabla[i] != nullptr)
				delete tabla[i];
		}
		delete[] tabla;
	}

	void Insertar(int key, int value)
	{
		int base, step, hash;
		//validar si la tabla esta llena
		if (numElementos == TABLE_SIZE) return;

		//Funcion Hash 1
		base = key % TABLE_SIZE;
		hash = base;

		//Constante para Hash 2
		step = 0;
		while (tabla[hash] != nullptr)
		{
			//Función Hash 2
			hash = (base + step) % TABLE_SIZE;
			step++;
		}
		//Almacenamos en la tabla
		tabla[hash] = new HashEntidad(key, value);
		numElementos++;
	}

	int size()
	{
		return TABLE_SIZE;
	}

	int sizeActual()
	{
		return numElementos;
	}

	int buscar(int key)
	{
		int step = 0;
		int i, base;
		//hash1 = hash2 cuando step=0
		i = base = key % TABLE_SIZE;
		while (true)
		{
			if (tabla[i] == nullptr) return -1;
			else if (tabla[i]->getKey() == key)
				return i;
			else
				step++;
			i = (base + step) % TABLE_SIZE;
		}
	}
};