#include <iostream>
// #include <cmath>
#include "..\\include\\complejo1.h"
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

void Complejo::establecerParteReal(double r) // Para fijar solo el campo 'hora'
{
    parteReal = r;
}  

void Complejo::establecerParteImaginaria(double i) // Para fijar solo el campo 'minuto'
{
    parteImg = i;
}


double Complejo::obtenerParteReal() const
{
    return parteReal; 
}

double Complejo::obtenerParteImaginaria() const
{
    return parteImg;
}

// Suma
Complejo Complejo::sumar(const Complejo& otro) const
{
    return Complejo(
        parteReal + otro.obtenerParteReal(),
        parteImg + otro.obtenerParteImaginaria()
    );
}


// Resta
Complejo Complejo::restar(const Complejo& otro) const
{
    return Complejo(
        parteReal - otro.obtenerParteReal(),
        parteImg - otro.obtenerParteImaginaria()
    );
}

// Imprimir
void Complejo::imprimir() const
{
    cout <<  "("   <<  parteReal
         <<  ", "  <<  parteImg
         <<  ")"   <<  " -> "  <<  parteReal;
    /*
    if (parteImg < 0)
        cout << " - " << abs(parteImg) << 'i';
    else
        cout << " + " << parteImg << 'i';
    */
}