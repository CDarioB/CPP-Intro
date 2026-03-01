#ifndef CADENA_H
#define CADENA_H

class Cadena {
  public:
    Cadena(int = 20); // Constructor
    ~Cadena();        // Destructor

    void establecer(const char * );
    void imprimir() const;

  private:
    const int longitud;
    char *cad;
};
#endif