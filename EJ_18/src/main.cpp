#include <iostream>
#include "..\\include\\cadena.h"
#include "..\\include\\cadena1.h"

using namespace std;

int main() {
  cout << "\nManejo simple Con Cadena.h: " << endl;
  cout << "\n" << endl;
  Cadena cad1;
  cad1.establecer("Hola");
  cad1.imprimir();

  //Cadena cad2(27);
  Cadena cad2;
  cad2.establecer(
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  cad2.imprimir();

  cout << "\nManejo con Cadena1.cpp -> con libreria cstring: " << endl;
  cout << "\n" << endl;
  Cadena1 cad3;
  cad3.establecer("Hola Cadena1");
  cad3.imprimir();

  //Cadena cad2(27);
  Cadena1 cad4;
  cad4.establecer(
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  cad4.imprimir();
  return 0;
}