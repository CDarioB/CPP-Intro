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

// Constructor
Complejo::Complejo(double r, double i)
{
    parteReal = r;
    parteImg = i;
}

void Complejo::setReal(double r) // Para fijar solo el campo 'hora'
{
    parteReal = r;
}  

void Complejo::setImaginario(double i) // Para fijar solo el campo 'minuto'
{
    parteImg = i;
}


double Complejo::getReal() const
{
    return parteReal; 
}

double Complejo::getImaginario() const
{
    return parteImg;
}

// Operador +
Complejo Complejo::operator+(const Complejo& otro) const
{
    return Complejo(parteReal + otro.parteReal,
                    parteImg + otro.parteImg);
}

// Operador -
Complejo Complejo::operator-(const Complejo& otro) const
{
    return Complejo(parteReal - otro.parteReal,
                    parteImg - otro.parteImg);
}

// Operador +=
Complejo& Complejo::operator+=(const Complejo& otro)
{
    parteReal += otro.parteReal;
    parteImg += otro.parteImg;
    return *this;
}

// Operador -=
Complejo& Complejo::operator-=(const Complejo& otro)
{
    parteReal -= otro.parteReal;
    parteImg -= otro.parteImg;
    return *this;
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