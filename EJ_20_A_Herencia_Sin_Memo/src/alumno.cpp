#include "..\\include\\alumno.h"

using namespace std; 

Alumno::Alumno(const string& nom, int e,
               int leg, const std::string& fac)
    : Persona(nom, e), legajo(leg), facultad(fac)
{
}

void Alumno::mostrar() const
{
    Persona::mostrar();
    cout << " - Legajo: " << legajo
         << " - Facultad: " << facultad;
}