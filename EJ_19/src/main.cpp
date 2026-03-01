#include <iostream>
#include "..\\include\\cadena2.h"

using namespace std;

int main() {
  cout << "\nCadena.cpp con Sobrecarga << y >>: " << endl;
  cout << "\n" << endl;
  
  Cadena cad1;
  cad1 << "Prueba1";
  cout << cad1 << endl;

  Cadena cad2(8);
  cad2 << "Prueba2";
  cout << cad2 << endl;

  cad2 << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << cad2 << endl;

  return 0;
}