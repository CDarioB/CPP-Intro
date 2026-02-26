#ifndef COMPLEJO_H
#define COMPLEJO_H

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
    
    void imprimir() const;

  private:
    double parteReal;  
    double parteImg;
};
#endif