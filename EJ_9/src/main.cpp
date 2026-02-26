#include <iostream>
#include "..\\include\\hora4.h"

using std::cout;
using std::endl;

int main()
{
  Hora h; // Instancia el objeto h de la clase Hora
  
  cout << "\nh.establecer(17, 30, 0).imprimir()"<<endl;
  h.establecer(17, 30, 0).imprimir();
  
  cout << "\nh.establecerHora(18).establecerMinuto(25).establecerSegundo(5)"<<endl;
  h.establecerHora(18).establecerMinuto(25).establecerSegundo(5);
  
  h.imprimir();

  cout << "\n";

  return 0;
}