#include <iostream>
#include <string>

#include "MiClase.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
using std::cout;
using std::cin;
using std::endl;
using std::string;

Se pueden reemplazar con la linea " using namespace std; "
*/

int main()
{
    string nombre;
    int edad;

    cout << "Proyecto General - Ejemplo\n\n";
    
    cout << "Utilizando constructor por defecto (sin parametros) (nombre = "" y edad = 0):" << endl;

    MiClase alumno1;
    alumno1.imprimir();

    cout <<"\nUsando metodos set y get:\n";

    cout << "Ingrese el nombre del alumno 1: ";
    cin >> nombre;
    
    cout << "Ingrese la edad del alumno 1: ";
    cin >> edad;
    
    alumno1.setNombre(nombre);
    alumno1.setEdad(edad);

    cout << alumno1.getNombre() 
            << " tiene " << alumno1.getEdad() << " años" << endl;

    cout <<"Metodo imprimir() con precarga metodos set:\n";

    alumno1.imprimir();
    
    cout << "\n\nUtilizando constructor con parametos:" << endl;

    cout << "Ingrese el nombre del alumno 2: ";
    cin >> nombre;

    cout << "Ingrese la edad del alumno 2: ";
    cin >> edad;

    MiClase alumno2(nombre, edad);
    alumno2.imprimir();

    cout <<"Impreción con metodos get despues de inciarlizar con el constructor (sin usar metodos set):\n";

    cout << alumno1.getNombre() 
            << " tiene " << alumno1.getEdad() << " años" << endl;
   
    return 0;
}