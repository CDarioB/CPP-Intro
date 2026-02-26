#include <iostream>
using namespace std;

int resta(int, int);
float resta(float, float);

int main()
{
  int aEnt, bEnt;
  cout << "Ingrese dos enteros (separados por espacio): ";
  cin >> aEnt >> bEnt;
  cout << "La diferencia de (" << aEnt << " - " << bEnt
       << ") es igual a " << resta(aEnt, bEnt) << endl
       << endl;

  float aFloat, bFloat;
  cout << "Ingrese dos floats (separados por espacio): ";
  cin >> aFloat >> bFloat;
  cout << "La diferencia de (" << aFloat << " - " << bFloat
       << ") es igual a " << resta(aFloat, bFloat) << endl;
  return 0;
}

int resta(int a, int b)
{
  return (a - b);
}

float resta(float a, float b)
{
  return (a - b);
}