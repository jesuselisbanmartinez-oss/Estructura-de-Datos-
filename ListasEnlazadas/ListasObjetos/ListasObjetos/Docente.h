//#include "Persona.h"
class Docente : public Persona
{
private:

	//Propiedades o Atributos
	string coddocente;
	string area;
	string facultad;

public:
	//Constructores y Destructores
	Docente() : Persona()
	{
		this->coddocente = "";
		this->area = "";
		this->facultad = "";
	}

	Docente(string pcoddocente, string parea, string pfacultad, string pdni, string pnombres, string papellidos, string pdireccion,
		string ptelefono, string pemail, string pcelular, string pgenero)
		:Persona(pdni, pnombres, papellidos, pdireccion, ptelefono, pemail, pcelular, pgenero)
	{
		this->coddocente = pcoddocente;
		this->area = parea;
		this->facultad = pfacultad;
	}

	~Docente() {}

	//Métodos Setter / Getter
	void setCoddocente(string pCoddocente) { this->coddocente = pCoddocente; }
	string getCoddocente() { return this->coddocente; }
	void setArea(string pArea) { this->area = pArea; }
	string getArea() { return this->area; }
	void setFacultad(string pFacultad) { this->facultad = pFacultad; }
	string getFacultad() { return this->facultad; }

	//Metodos de Servicio
	void mostrarDocente()
	{
		cout << "\n";
		cout << "===========DATOS DE DOCENTE=========" << endl;
		cout << "CODIGO: " << this->coddocente << endl;
		cout << "AREA: " << this->area << endl;
		cout << "FACULTAD: " << this->facultad << endl;
		MostrarPersona();
	}

};