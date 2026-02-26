#ifndef HORA3_H
#define HORA3_H

class Hora
{
  public:
    Hora(); // Constructor
    void establecer(int, int, int);
    void establecerHora(int);    // Para fijar solo el campo 'hora'
    void establecerMinuto(int);  // Para fijar solo el campo 'minuto'
    void establecerSegundo(int); // Para fijar solo el campo 'segundo'
    int obtenerHora() const;
    int obtenerMinuto() const;
    int obtenerSegundo() const;
    void imprimir() const; // Formato: 13:15:00

  private:
    int hora;    // 0 - 23
    int minuto;  // 0 - 59
    int segundo; // 0 - 59
};

#endif
