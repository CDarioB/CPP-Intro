/*
 - #include <iostream>
 - using namespace std;
 - 
 - Al incluir la libreria complejo4.h, ya se incorporan las dos lineas anterirores.
 - si ase abre el archivo cabecera (complejo4.h) se podra apreciar que ya se encuentran estas dos lineas.
*/
#include "..\\include\\complejo4.h"

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

// Sobrecarga Operador +
Complejo Complejo::operator+(const Complejo& otro) const
{
    return Complejo(parteReal + otro.parteReal,
                    parteImg + otro.parteImg);
}

// Sobrecarga Operador -
Complejo Complejo::operator-(const Complejo& otro) const
{
    return Complejo(parteReal - otro.parteReal,
                    parteImg - otro.parteImg);
}

// Sobrecarga Operador +=
Complejo& Complejo::operator+=(const Complejo& otro)
{
    parteReal += otro.parteReal;
    parteImg += otro.parteImg;
    return *this;
}

// Sobrecarga Operador -=
Complejo& Complejo::operator-=(const Complejo& otro)
{
    parteReal -= otro.parteReal;
    parteImg -= otro.parteImg;
    return *this;
}

// Sobrecarga Operador << (Funciones amigas ... no son funciones miembros... por eso no se pone Complejo::operator)
ostream& operator<<(ostream& os, const Complejo& c)
{
    os << c.parteReal;

    if (c.parteImg >= 0)
        os << " + " << c.parteImg << "i";
    else
        os << " - " << -c.parteImg << "i";

    return os;
}

// Sobrecarga Operador >> (Funciones amigas ... no son funciones miembros... por eso no se pone Complejo::operator)
istream& operator>>(istream& is, Complejo& c)
{
    // Se ingresan: parteReal parteImaginaria
    is >> c.parteReal >> c.parteImg;
    return is;
}

// Imprimir
void Complejo::imprimir() const
{
    cout <<  "("   <<  parteReal
         <<  ", "  <<  parteImg
         <<  ")";
}