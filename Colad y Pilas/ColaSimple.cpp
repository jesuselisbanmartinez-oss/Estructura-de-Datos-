#include <iostream>
#include <queue>
using namespace std;

int main()
{
	//Declarando las variables
	queue<int> cola;
	//Encolando datos
	cola.push(10);
	cola.push(20);
	cola.push(30);
	cola.push(40);
	cout << "Nro. de elementos de la cola: " << cola.size() << endl;
	cout << "El 1er elemento de la cola es: " << cola.front() << endl;
	cout << "El ultimo elemento de la cola es: " << cola.back() << endl;
	cola.pop();
	cout << "Nro. de elementos de la cola: " << cola.size() << endl;
	cola.push(50);
	cout << "El 1er elemento de la cola es: " << cola.front() << endl;
	cola.pop();
	cola.pop();
	cola.pop();

	if (cola.empty())
		cout << "La cola no tiene elementos" << endl;
	else
		cout << "La cola tiene elementos, el primer elemento es: " << cola.front() << endl;

	return 0;

}
