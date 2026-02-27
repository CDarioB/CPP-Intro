#include <iostream>
#include "..\\include\\complejo5.h"

using namespace std;

int main()
{
     cout << "\n===== PRUEBA COMPLEJO5 =====\n\n";

     // Constructor por defecto
     Complejo c1;
     cout << "c1 (Constructor por defecto): " << c1 << endl;

     // Constructor parametrizado
     Complejo c2(5, -6);
     cout << "c2 (Constructor parametrizado): " << c2 << endl;

     // Constructor de copia
     Complejo c3(c2);
     cout << "c3 (Constructor copia - copia de c2): " << c3 << endl;


     cout << "\n===== OPERADORES ARITMETICOS =====\n\n";
     // Operador +
     Complejo suma = c2 + c3;
     cout << "c2 + c3 = " << suma << endl;

     // Operador -
     Complejo resta = c2 - c3;
     cout << "c2 - c3 = " << resta << endl;

     // Operador +=
     Complejo c4(2, 3);
     cout << "\nc4 inicial: " << c4 << endl;
     c4 += c2;
     cout << "Luego de c4 += c2: " << c4 << endl;

     // Operador -=
     c4 -= c2;
     cout << "Luego de c4 -= c2: " << c4 << endl;

     cout << "\n===== OPERADORES DE COMPARACION =====\n\n";
     if (c2 == c3)
          cout << "c2 es igual a c3\n";
     else
          cout << "c2 NO es igual a c3\n";

     if (c2 != c4)
          cout << "c2 es distinto de c4\n";
     else
          cout << "c2 NO es distinto de c4\n";

     cout << "\n===== OPERADOR DE EXTRACCION (>>) =====\n\n";
     Complejo c5;
     cout << "Ingrese parte real e imaginaria (ej: 4 7): ";
     cin >> c5;
     cout << "c5 ingresado: " << c5 << endl;


     cout << "\n===== PRUEBA ENCADENAMIENTO =====\n\n";
     Complejo c6(1, 1), c7(2, 2);
     cout << "c6: " << c6 << endl << "c7: " << c7 << endl << "c2: " << c2 << endl;

     c6 += c7 += c2; // prueba retorno por referencia
     cout << "Luego de c6 += c7 += c2:\n";
     cout << "c6: " << c6 << endl;
     cout << "c7: " << c7 << endl;

     cout << "\n===== FIN DE PRUEBAS =====\n";
     return 0;
}