#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
/*
 - using std::istream;     // ... para operador " >> " ( operador de extracción de flujo ).
 - using std::ostream;     // ... para operador " << " ( operador de inserciónn de flujo ).
*/
using namespace std;

class Complejo
{
  public:
    Complejo(double = 0.0, double = 0.0); // Constructor

    void setReal(double);
    void setImaginario(double);
    
    double getReal() const;
    double getImaginario() const;
    
    // Sobrecarga de operadores binarios
    Complejo operator+(const Complejo& otro) const;
    Complejo operator-(const Complejo& otro) const;

    // Sobrecarga de operadores compuestos
    Complejo& operator+=(const Complejo& otro);
    Complejo& operator-=(const Complejo& otro);

    // Sobrecarga de operadores de flujo
    // Funciones amigas ... no son funciones miembros... por eso no se pone Complejo::operator
    friend ostream& operator<<(ostream& os, const Complejo& c);
    friend istream& operator>>(istream& is, Complejo& c);
    
    void imprimir() const;

  private:
    double parteReal;  
    double parteImg;
};
#endif