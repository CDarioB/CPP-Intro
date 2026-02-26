#include <iostream>
// #include <cmath>
#include "..\\include\\complejo.h"
/*
 * using std::cout;
 * using std::endl;
 * using std::abs;
 * 
 * Reemplazamos etas lineas por la siguiente: using namespace std;
*/

using namespace std;

// Hora::Hora() : hora(0), minuto(0), segundo(0) {}
Complejo::Complejo(double r, double i)
{
    parteReal = r;
    parteImg = i;
}

void Complejo::setParteReal(double r) // Para fijar solo el campo 'hora'
{
    parteReal = r;
}  

void Complejo::setParteImaginaria(double i) // Para fijar solo el campo 'minuto'
{
    parteImg = i;
}


double Complejo::getParteReal() const
{
    return parteReal; 
}

double Complejo::getParteImaginaria() const
{
    return parteImg;
}

// Imprimir
void Complejo::imprimir() const
{
    cout <<  "("   <<  parteReal
         <<  ", "  <<  parteImg
         <<  ")";
    /*
    if (parteImg < 0)
        cout <<  " -> "  <<  parteReal << " - " << abs(parteImg) << 'i';
    else
        cout <<  " -> "  <<  parteReal << " + " << parteImg << 'i';
    */
}