#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

class Persona {
protected:
    char* nombre;
    int edad;

public:
    Persona(const char*, int);
    Persona(const Persona&);
    Persona& operator=(const Persona&);
    virtual ~Persona();   // CLAVE: virtual

    virtual void mostrar() const;
};

#endif