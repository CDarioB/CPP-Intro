#ifndef CADENA2_H
#define CADENA2_H

using namespace std;

class Cadena {
  public:
    Cadena(int = 20); // Constructor
    ~Cadena();        // Destructor
        
    // Sobrecarga operador =
    //Cadena& operator=(const Cadena&);
    
    // Sobrecarga para asignación estilo flujo
    Cadena& operator<<(const char*);

    // Sobrecarga para impresión
    friend ostream& operator<<(ostream&, const Cadena&);

    void establecer(const char * );
    void imprimir() const;

  private:
    const int longitud;
    char *cad;
};
#endif