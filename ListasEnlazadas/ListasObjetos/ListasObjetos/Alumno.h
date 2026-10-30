#include "Persona.h"

class Alumno : public Persona
{
private:

	//Propiedades o Atributos
	string codalumno;
	string carreraProfesional;

public:
	//Constructores y Destructores
	Alumno() : Persona()
	{
		this->codalumno = "";
		this->carreraProfesional = "";
	}

	Alumno(string pcodalumno, string pcarreraProfesional, string pdni, string pnombres, string papellidos, string pdireccion,
		string ptelefono, string pemail, string pcelular, string pgenero)
		:Persona(pdni, pnombres, papellidos, pdireccion, ptelefono, pemail, pcelular, pgenero)
	{
		this->codalumno = pcodalumno;
		this->carreraProfesional = pcarreraProfesional;
	}

	~Alumno() {}

	//Métodos Setter / Getter
	void setCodalumno(string pCodalumno) { this->codalumno = pCodalumno; }
	string getCodalumno() { return this->codalumno; }
	void setCarreraProfesional(string pCarreraprofesional) { this->carreraProfesional = pCarreraprofesional; }
	string getCarnreraProfesional() { return this->carreraProfesional; }

	//Metodos de Servicio
	void mostrarAlumno()
	{
		cout << "\n";
		cout << "===========DATOS DE ALUMNO=========" << endl;
		cout << "CODIGO: " << this->codalumno << endl;
		cout << "CARRERA: " << this->carreraProfesional << endl;
		MostrarPersona();
	}







};