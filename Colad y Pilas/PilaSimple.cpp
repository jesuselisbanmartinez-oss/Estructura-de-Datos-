#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //Declarando las variables
    stack<int> pila;
    //Apilando números
    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.push(40);

    cout << "El nro. de elementos de la pila es: " << pila.size() << endl;
    cout << "El elemento de la cima es: " << pila.top() << endl;
    pila.pop();
    cout << "El nro. de elementos de la pila es: " << pila.size() << endl;
    cout << "El elemento de la cima es: " << pila.top() << endl;
    pila.push(50);
    cout << "El elemento de la cima es: " << pila.top() << endl;
    pila.pop();
    pila.pop();
    pila.pop();

    if (pila.empty())
        cout << "La pila no tiene elementos" << endl;
    else
        cout << "La pila tiene elementos, la cima es: " << pila.top();

    return 0;
}

