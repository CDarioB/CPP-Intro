#ifndef HORA4_H
#define HORA4_H

class Hora
{
  public:
    Hora(); // Constructor

    // 🔹 Ahora retornan Hora&
    Hora &establecer(int, int, int);
    Hora &establecerHora(int);
    Hora &establecerMinuto(int);
    Hora &establecerSegundo(int);

    int obtenerHora() const;
    int obtenerMinuto() const;
    int obtenerSegundo() const;

    const Hora& imprimir() const;

  private:
    int hora;    // 0 - 23
    int minuto;  // 0 - 59
    int segundo; // 0 - 59
};
#endif