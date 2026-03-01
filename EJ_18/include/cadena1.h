#ifndef CADENA1_H
#define CADENA1_H

class Cadena1 {
  public:
    Cadena1(int = 20); // Constructor
    ~Cadena1();        // Destructor

    void establecer(const char * );
    void imprimir() const;

  private:
    const int longitud;
    char *cad;
};
#endif