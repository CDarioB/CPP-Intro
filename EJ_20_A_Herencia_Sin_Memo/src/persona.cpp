#include "..\\include\\persona.h"

using namespace std;

Persona::Persona(const string& nom, int e)
    : nombre(nom), edad(e)
{
}

void Persona::mostrar() const
{
    std::cout << "Nombre: " << nombre
              << " - Edad: " << edad;
}