#include <iostream>
#include <vector>

#include "..\\include\\alumno.h"

using namespace std;

int main()
{
    Persona p1("Carlos", 40);
    Alumno a1("Ana", 20, 1234, "Ingenieria");

    p1.mostrar();
    cout << endl;

    a1.mostrar();
    cout << endl;

    cout << "\n--- Polimorfismo ---\n";

    Persona* p = &a1;   // puntero a base
    p->mostrar();       // llama a Alumno::mostrar

    return 0;
}