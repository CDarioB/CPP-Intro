#include "..\\include\\alumno.h"

using namespace std; 

// Constructor
Alumno::Alumno(const char* nom, int e, int leg, const char* fac)
    : Persona(nom, e), legajo(leg)
{
    int i = 0;
    while (fac[i] != '\0') i++;

    facultad = new char[i + 1];

    for (int j = 0; j <= i; j++)
        facultad[j] = fac[j];
}

// Destructor
Alumno::~Alumno()
{
    delete[] facultad;
}

// Polimorfismo
void Alumno::mostrar() const
{
    Persona::mostrar();
    cout << " - Legajo: " << legajo
         << " - Facultad: " << facultad;
}