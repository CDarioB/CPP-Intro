#include <iostream>
#include "..\\include\\alumno.h"

using namespace std;

int main()
{
    Persona* p1 = new Persona("Carlos", 40);
    Persona* p2 = new Alumno("Ana", 20, 1234, "Ingenieria Electronica");

    p1->mostrar();
    cout << endl;

    p2->mostrar();   // POLIMORFISMO
    cout << endl;

    delete p1;
    delete p2;  // correcto gracias a destructor virtual

    return 0;
}