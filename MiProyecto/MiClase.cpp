#include <iostream>
#include "MiClase.h"

using std::cout;
using std::endl;

/*
    #include<string>
    using std::string;
    
    No haria falta agregarlo porque esta incluido en MiClase.h

*/

MiClase::MiClase(string n, int e)
{
    nombre = n;
    edad = e;
}
 
void MiClase::setNombre(string n)
{
    nombre = n;
}

void MiClase::setEdad(int e)
{
    edad = e;
}
string MiClase::getNombre() const
{
    return nombre;
}

int MiClase::getEdad() const
{
    return edad;
}

void MiClase::imprimir() const
{
    cout << nombre << "tiene " << edad << " años" << endl;
}


