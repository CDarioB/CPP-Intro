#include <iostream>
#include "..\\include\\complejo1.h"

using std::cout;
using std::endl;

int main()
{
  // Definir e inicializar dos complejos
  Complejo c1(2, 3);  // 2 + 3i
  Complejo c2(4, -1); // 4 - i

  // Suma
  Complejo suma = c1.sumar(c2);

  // Resta
  Complejo resta = c1.restar(c2);

  cout << "\nPrimer  complejo: ";
  c1.imprimir();

  cout << "Segundo complejo: ";
  c2.imprimir();

  cout << "\nSuma: ";
  suma.imprimir();

  cout << "\nResta: ";
  resta.imprimir();

  cout << "\n";
  return 0;
}