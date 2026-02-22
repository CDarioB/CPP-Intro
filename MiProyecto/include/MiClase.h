#ifndef MILIB_H
#define MILIB_H

#include<string>
using std::string;

class MiClase {
    private:
        string nombre;
        int edad;
    
    public:
        MiClase(string = "", int = 0);
        void setNombre(string n);
        void setEdad(int e);
        string getNombre() const;
        int getEdad() const;
        void imprimir() const;
};

#endif