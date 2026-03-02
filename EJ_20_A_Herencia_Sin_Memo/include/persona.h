#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(const string&, int);
    virtual ~Persona() = default;

    virtual void mostrar() const;
};

#endif