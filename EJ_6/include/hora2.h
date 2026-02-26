#ifndef HORA2_H
#define HORA2_H

class Hora {
  public:
    Hora(); // Constructor
    void establecer(int , int , int );
    void imprimir(); // Formato: 13:15:00

  private:
    int totalSegundos;
};

#endif