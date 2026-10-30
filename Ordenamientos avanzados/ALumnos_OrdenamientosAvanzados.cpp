#include <iostream>
#include <string>

using namespace std;
class Alumno {
private:
    string nombre;
    string apellidos;
    int edad;

public:
    Alumno() {
        this->nombre = "";
        this->apellidos = "";
        this->edad = 0;
    }

    Alumno(string nombre, string apellidos, int edad) {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->edad = edad;
    }

    string getNombre() { return nombre;}
    string getApellidos() { return apellidos;}
    int getEdad() { return edad;}

    void mostrar() {
        cout << apellidos << ", "
            << nombre << " - Edad: "
            << edad << endl;
    }
};


// Comparador

bool comparar(Alumno a, Alumno b, int criterio) {

    switch (criterio) {
    case 1:
        return a.getApellidos() < b.getApellidos();
    case 2:
        return a.getNombre() < b.getNombre();
    case 3:
        return a.getEdad() < b.getEdad();
    default:
        return false;

    }

}

// Merge
void Merge(Alumno* Vector1,Alumno* Vector2, Alumno* Vector, int n, int criterio)
{
    int i = 0, j = 0, k = 0;
    int mitad = n / 2;
    while (i < mitad && j < (n - mitad))
    {
        if (comparar(Vector1[i], Vector2[j], criterio))
        {
            Vector[k] = Vector1[i];
            i++;
        }
        else
        {
            Vector[k] = Vector2[j];
            j++;
        }
        k++;
    }
    while (i < mitad)
    {
        Vector[k] = Vector1[i];
        i++;
        k++;
    }

    while (j < (n - mitad))
    {
        Vector[k] = Vector2[j];
        j++;
        k++;
    }
}

// MergeSort

void MergeSort(Alumno* Vector, int n, int criterio)
{
    if (n > 1)
    {
        int mitad = n / 2;
        Alumno* Vector1 = new Alumno[mitad];
        Alumno* Vector2 = new Alumno[n - mitad];
        for (int i = 0; i < mitad; i++)
            Vector1[i] = Vector[i];
        for (int i = mitad; i < n; i++)
            Vector2[i - mitad] = Vector[i];

        MergeSort(Vector1, mitad, criterio);
        MergeSort(Vector2, n - mitad, criterio);
        Merge(Vector1, Vector2, Vector, n, criterio);
    }
}

void mostrarAlumnos(Alumno* alumnos, int n)
{
    cout << "\nLISTA DE ALUMNOS\n";
    for (int i = 0; i < n; i++)
    {
        alumnos[i].mostrar();
    }
}
int main()
{
    int n = 0,N = 10;
    Alumno* alumnos = new Alumno[N];
    string nombre, apellidos;
    int edad;
    int opcion;
    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Ingresar Alumno.\n";
        cout << "2. Mostrar alumnos.\n";
        cout << "3. Ordenar por Apellido.\n";
        cout << "4. Ordenar por Nombre.\n";
        cout << "5. Ordenar por Edad.\n";
        cout << "6. Salir\n";
        cout << endl;
        cout << "Ingrese una Opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:cout << "====REGISTRAR ALUMNOS====\n";
            cout << "Ingrese Nombre: "; cin >> nombre;
            cout << "Ingrese Apellidos: "; cin >> apellidos;
            cout << "Ingrese edad: "; cin >> edad;
            alumnos[n] = Alumno(nombre, apellidos, edad);
            n++;
            system("pause");
            system("cls");
            break;
        case 2:
            mostrarAlumnos(alumnos, n);
            system("pause");
            system("cls");
            break;
        case 3:
            MergeSort(alumnos, n, 1);
            cout << "\nOrdenado por apellido.\n";
            mostrarAlumnos(alumnos, n);
            system("pause");
            system("cls");
            break;
        case 4:
            MergeSort(alumnos, n, 2);
            cout << "\nOrdenado por nombre.\n";
            mostrarAlumnos(alumnos, n);
            system("pause");
            system("cls");
            break;
        case 5:
            MergeSort(alumnos, n, 3);
            cout << "\nOrdenado por edad.\n";
            mostrarAlumnos(alumnos, n);
            system("pause");
            system("cls");
            break;

        case 6:
            cout << "\nFin del programa.\n";
            exit(0);
            break;
        default:
            cout << "\nOpcion incorrecta.\n";
        }
    } while (opcion != 6);


    return 0;
}