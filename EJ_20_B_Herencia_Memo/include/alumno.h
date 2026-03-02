#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"

class Alumno : public Persona {
private:
    int legajo;
    char* facultad;

public:
    Alumno(const char*, int, int, const char*);
    ~Alumno();

    void mostrar() const override;
};

#endif