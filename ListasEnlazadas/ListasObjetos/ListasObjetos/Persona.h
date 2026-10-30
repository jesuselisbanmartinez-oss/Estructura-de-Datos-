#include <iostream>
using namespace std;
class Persona
{
private:
	//Propiedades o Atributos
	string dni;
	string nombres;
	string apellidos;
	string direccion;
	string telefono;
	string email;
	string celular;
	string genero;
public:
	//Constructores y Destructores
	Persona()
	{
		this->dni = "";
		this->nombres = "";
		this->apellidos = "";
		this->direccion = "";
		this->telefono = "";
		this->email = "";
		this->celular = "";
		this->genero = "";
	}
	Persona(string pdni, string pnombres, string papellidos, string pdireccion,
	string ptelefono, string pemail, string pcelular, string pgenero)
	{
		this->dni = pdni;
		this->nombres = pnombres;
		this->apellidos = papellidos;
		this->direccion = pdireccion;
		this->telefono = ptelefono;
		this->email = pemail;
		this->celular = pcelular;
		this->genero = pgenero;
	}
	~Persona(){}

	//Métodos Setter / Getter
	void setDni(string pDni) { this->dni = pDni; }
	string getDni() { return this->dni; }
	void setNombres(string pNombres) { this->nombres = pNombres; }
	string getNombres() { return this->nombres; }
	void setApellidos(string pApellidos) { this->apellidos = pApellidos; }
	string getApellidos() { return this->apellidos; }
	void setDireccion(string pDireccion) { this->direccion = pDireccion; }
	string getDireccion() { return this->direccion; }
	void setTelefono(string pTelefono) { this->telefono = pTelefono; }
	string getTelefono() { return this->telefono; }
	void setEmail(string pEmail) { this->email = pEmail; }
	string getEmail() { return this->email; }
	void setCelular(string pCelular) { this->celular = pCelular; }
	string getCelular() { return this->celular; }
	void setGenero(string pGenero) { this->genero = pGenero; }
	string getGenero() { return this->genero; }

	//Métodos de Servicio
	void MostrarPersona()
	{
		cout << "DNI: " << this->dni << endl;
		cout << "NOMBRES: " << this->nombres << endl;
		cout << "APELLIDOS: " << this->apellidos << endl;
		cout << "DIRECCION: " << this->direccion << endl;
		cout << "TELEFONO: " << this->telefono << endl;
		cout << "EMAIL: " << this->email << endl;
		cout << "CELULAR: " << this->celular << endl;
		cout << "GENERO: " << this->genero << endl;
	}
};
