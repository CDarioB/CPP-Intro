#include <iostream>
#include <cstring>
#include "..\\include\\cadena1.h"

using namespace std;

// Constructor
Cadena1::Cadena1(int tam) : longitud(tam)
{
    cad = new char[longitud];
    cad[longitud] = '\0';
}

// Destructor
Cadena1::~Cadena1()
{
    delete[] cad;
    cout<<"Memoria Liberada -> Cadena 1"<<endl;
}


void Cadena1::establecer(const char * texto)
{
    strncpy(cad, texto, longitud);
    cad[longitud+1] = '\0';
}

void Cadena1::imprimir() const 
{
    cout << cad << endl;
}