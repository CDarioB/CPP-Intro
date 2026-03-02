#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
using namespace std;

class Alumno : public Persona {
private:
    int legajo;
    string facultad;

public:
    Alumno(const string&, int, int, const string&);
    void mostrar() const override;
};

#endif