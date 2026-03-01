#include <iostream>
#include "..\\include\\cadena.h"

using std::cout;
using std::endl;

// Constructor
Cadena::Cadena(int tam) : longitud(tam)
{
    cad = new char[longitud];
    cad[longitud + 1] = '\0';
}

// Destructor
Cadena::~Cadena() 
{
    delete[] cad;
    cout<<"Memoria Liberada -> Cadena"<<endl;
}


void Cadena::establecer(const char * texto)
{
    for(int i = 0; i < longitud ; i ++) 
    { 
        cad[i] = texto[i];
    }
}

void Cadena::imprimir() const 
{
    cout << cad << endl;
}