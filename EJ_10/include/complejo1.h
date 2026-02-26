#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo
{
  public:
    Complejo(double = 0.0, double = 0.0); // Constructor

    void establecerParteReal(double);
    void establecerParteImaginaria(double);
    
    double obtenerParteReal() const;
    double obtenerParteImaginaria() const;
    
    // Operaciones
    Complejo sumar(const Complejo& otro) const;
    Complejo restar(const Complejo& otro) const;
    
    void imprimir() const;

  private:
    double parteReal;  
    double parteImg;
};
#endif