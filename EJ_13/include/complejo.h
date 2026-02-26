#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo
{
  public:
    Complejo(double = 0.0, double = 0.0); // Constructor

    void setParteReal(double);
    void setParteImaginaria(double);
    
    double getParteReal() const;
    double getParteImaginaria() const;
    
    void imprimir() const;

  private:
    double parteReal;  
    double parteImg;
};
#endif