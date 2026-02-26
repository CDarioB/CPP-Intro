#include <iostream>
#include "..\\include\\hora1.h"

using namespace std;

int main()
{
  Hora h; // Instancia el objeto h de la clase Hora

  cout << "\n";

  cout << "La hora por defecto es: ";
  h.imprimir();

  h.establecer(13, 27, 6);
  cout << "\nLa hora después de estableceres: ";
  h.imprimir();

  // Intenta establecer un valor inválido de Hora
  h.establecer(99, 99, 99);
  cout << "\nDespués de intentar establecer un valor inválido: ";
  h.imprimir();
  cout << endl;

  return 0;
}