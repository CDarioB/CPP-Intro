#include <iostream>
#include <cstring>
#include "..\\include\\cadena2.h"

using namespace std;

// Constructor
Cadena::Cadena(int tam) : longitud(tam)
{
    cad = new char[longitud];
    cad[longitud] = '\0';
}

// Destructor
Cadena::~Cadena()
{
    delete[] cad;
    cout<<"Memoria Liberada -> Cadena"<<endl;
}

void Cadena::establecer(const char * texto)
{
    strncpy(cad, texto, longitud);
    cad[longitud] = '\0';
}

void Cadena::imprimir() const 
{
    cout << cad << endl;
}

/*
// Operador de asignación
Cadena& Cadena::operator=(const Cadena& otra)
{
    if (this != &otra)
    {
        int i = 0;
        while (otra.cad[i] != '\0' && i < longitud)
        {
            cad[i] = otra.cad[i];
            i++;
        }
        cad[i] = '\0';
    }
    return *this;
}
*/

// Sobrecarga << para asignar texto
Cadena& Cadena::operator<<(const char* texto)
{
    for(int i =0; i < longitud; i++)
    {
        cad[i] = texto[i];
    }
    
    return *this;
}

// Sobrecarga << para imprimir
ostream& operator<<(ostream& os, const Cadena& c)
{
    os << c.cad;
    return os;
}