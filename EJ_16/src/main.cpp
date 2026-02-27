#include <iostream>
#include "..\\include\\complejo4.h"

using namespace std;

int main()
{
    cout << "Ingrese un nro complejo (c1): ";
    Complejo c1;
    cin >> c1;

    cout << "Ingrese un nro complejo (c2): ";
    Complejo c2;
    cin >> c2;
    cout << endl;

    cout << "Luego de 'resul = c1 + c2'" << endl;
    Complejo resul;
    resul = c1 + c2;
    cout << "c1 = " << c1 << endl
         << "c2 = " << c2 << endl
         << "resul = " << resul << endl
         << endl;

    cout << "Luego de 'resul = c1 - c2'" << endl;
    resul = c1 - c2;
    cout << "c1 = " << c1 << endl
         << "c2 = " << c2 << endl
         << "resul = " << resul << endl
         << endl;

    cout << "Luego de 'c2 += c1'" << endl;
    c2 += c1;
    cout << "c1 = " << c1 << endl
         << "c2 = " << c2 << endl
         << endl;

    cout << "\n";

    return 0;
}