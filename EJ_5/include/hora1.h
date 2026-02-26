#ifndef HORA1_H
#define HORA1_H

class Hora {
  public:
    Hora(); // Constructor
    void establecer(int , int , int );
    void imprimir(); // Formato: 13:15:00

  private:
    int hora;    // 0 - 23
    int minuto;  // 0 - 59
    int segundo; // 0 - 59
};

#endif