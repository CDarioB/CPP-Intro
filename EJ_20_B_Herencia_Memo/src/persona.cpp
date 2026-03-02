#include "..\\include\\persona.h"

using namespace std;

// Constructor
Persona::Persona(const char* nom, int e) : edad(e)
{
    int i = 0;
    while (nom[i] != '\0') i++;

    nombre = new char[i + 1];

    for (int j = 0; j <= i; j++)
        nombre[j] = nom[j];
}

// Constructor copia
Persona::Persona(const Persona& otra) : edad(otra.edad)
{
    int i = 0;
    while (otra.nombre[i] != '\0') i++;

    nombre = new char[i + 1];

    for (int j = 0; j <= i; j++)
        nombre[j] = otra.nombre[j];
}

// Operador =
Persona& Persona::operator=(const Persona& otra)
{
    if (this != &otra)
    {
        delete[] nombre;

        edad = otra.edad;

        int i = 0;
        while (otra.nombre[i] != '\0') i++;

        nombre = new char[i + 1];

        for (int j = 0; j <= i; j++)
            nombre[j] = otra.nombre[j];
    }
    return *this;
}

// Destructor
Persona::~Persona()
{
    delete[] nombre;
}

// Método virtual
void Persona::mostrar() const
{
    cout << "Nombre: " << nombre
         << " - Edad: " << edad;
}