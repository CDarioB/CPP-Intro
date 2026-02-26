#include <iostream>
#include "..\\include\\complejo.h"

using std::cout;
using std::endl;

int main()
{
    Complejo c1(2, 3);
    Complejo c2(1, -4);
    cout << "\nComplejo c1 -> ";
    c1.imprimir(); 
    cout << endl;
    cout << "Complejo c2 -> ";
    c2.imprimir();
    cout << endl;

    Complejo suma = c1 + c2;
    Complejo resta = c1 - c2;
    cout << "\nsuma.imprimir() -> ";
    suma.imprimir(); // (3, -1)
    cout << endl;   
    cout << "\nresta.imprimir() -> ";
    resta.imprimir(); // (1, 7)
    cout << endl; 

    c1 += c2;
    cout << "\nc1 += c2; -> ";
    c1.imprimir(); // (3, -1)
    cout << endl; 

    c1 -= c2;
    cout << "\nc1 -= c2; -> ";
    c1.imprimir(); // (2, 3)
    cout << endl; 

    cout << "\n"; 

    return 0;
}