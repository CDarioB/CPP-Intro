#include <iostream>
#include "..\\include\\complejo.h"

using std::cout;
using std::endl;

// Función estilo C para sumar
Complejo sumar(const Complejo& c1, const Complejo& c2)
{
    return Complejo(
        c1.getParteReal() + c2.getParteReal(),
        c1.getParteImaginaria() + c2.getParteImaginaria()
    );
}

// Función estilo C para restar
Complejo restar(const Complejo& c1, const Complejo& c2)
{
    return Complejo(
        c1.getParteReal() - c2.getParteReal(),
        c1.getParteImaginaria() - c2.getParteImaginaria()
    );
}

int main()
{
    Complejo c1(2, 3);
    Complejo c2(4, -1);

    Complejo suma = sumar(c1, c2);
    Complejo resta = restar(c1, c2);

    cout << "\nPrimer  complejo: ";
    c1.imprimir();
    cout << endl;

    cout << "Segundo complejo: ";
    c2.imprimir();
    cout << endl;

    cout << "\nSuma: ";
    suma.imprimir();
    cout << endl;

    cout << "\nResta: ";
    resta.imprimir();
    cout << endl;

    cout << "\n";
    return 0;
}