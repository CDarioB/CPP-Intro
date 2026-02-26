#include <iostream>
#include "..\\include\\hora4.h"

using std::cout;
using std::endl;

// Hora::Hora() : hora(0), minuto(0), segundo(0) {}
Hora::Hora()
{
    hora = 0;    // 0 - 23
    minuto = 0;  // 0 - 59
    segundo = 0; // 0 - 59
}

Hora& Hora::establecer(int h, int m, int s) 
{
    if ( h >= 0 && h < 24)
        hora = h;
    
    if (0 <= m && m < 60)
        minuto = m;
    

    if (0 <= s && s < 60)
        segundo = s;
    
    return *this;  // clave para cascada
}

Hora& Hora::establecerHora(int h) // Para fijar solo el campo 'hora'
{
    hora = h;
    return *this;  // clave para cascada
}  

Hora& Hora::establecerMinuto(int m) // Para fijar solo el campo 'minuto'
{
    minuto = m;
    return *this;  // clave para cascada
}

Hora& Hora::establecerSegundo(int s) // Para fijar solo el campo 'segundo'
{
    segundo = s;
    return *this;  // clave para cascada
}

int  Hora::obtenerHora() const
{
    return hora; 
}

int  Hora::obtenerMinuto() const
{
    return minuto;
}

int  Hora::obtenerSegundo() const
{
    return segundo;
}

const Hora& Hora::imprimir() const // Formato: 13:15:00
{
    if (hora < 10)
        cout << "0" << hora << ':';
    else if(hora < 24)
        cout << hora << ":";
    else 
        cout << "00:";

    if (minuto < 10)
        cout << "0" << minuto << ':';
    else if(minuto < 60)
        cout << minuto << ":";
    else 
        cout << "00:";

    if (segundo < 10)
        cout << "0" << segundo << endl;
    else if(segundo < 60)
        cout << segundo << endl;
    else 
        cout << "00" << endl;
    
    return *this;
} 