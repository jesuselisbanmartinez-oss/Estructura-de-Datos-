#include <iostream>
#include "HashTable.h"

using namespace std;

void ImprimirTablaHash(HashTable* ht, int* keys)
{
	cout << "SIZE TABLA: " << ht->size() << endl;
	cout << "SIZE ACTUAL: " << ht->sizeActual() << endl;
	for (int i = 0; i < ht->size(); ++i)
		cout << ht->buscar(keys[i]) << " : " << keys[i] << endl;
}

int main()
{
	HashTable* ht = new HashTable(9);
	int Keys[] = { 6,36,67,92,8,5,3,2,15 };
	ht->Insertar(6, 60);
	ht->Insertar(36, 340);
	ht->Insertar(67, 160);
	ht->Insertar(92, 360);
	ht->Insertar(8, 120);
	ht->Insertar(5, 452);
	ht->Insertar(3, 422);
	ht->Insertar(2, 952);
	ht->Insertar(15, 752);

	ImprimirTablaHash(ht,Keys);
	return 0;
}

