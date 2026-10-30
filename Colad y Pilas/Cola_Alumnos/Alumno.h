#include <iostream>
#include <sstream>

using namespace std;

class Alumno
{
private:
	//Propiedades y/o Atributos
	string codigo;
	string nombre;
	string carrera;

public:
	//Constructores
	Alumno(string codigo, string nombre, string carrera)
		: codigo(codigo), nombre(nombre),carrera(carrera){}

	//Métodos Setter / Getter
	//. . .
	//Métodos de Servicio
	string toString()
	{
		ostringstream ss;
		ss << codigo;
		ss << " | ";
		ss << nombre;
		ss << " | ";
		ss << carrera; // codigo | nombre | carrera

		return (ss.str());
	}

};
