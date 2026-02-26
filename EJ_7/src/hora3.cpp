#include <iostream>
#include "..\\include\\hora3.h"

using std::cout;
using std::endl;

Hora::Hora()
{
    hora = 0;    // 0 - 23
    minuto = 0;  // 0 - 59
    segundo = 0; // 0 - 59
}

void Hora::establecer(int h, int m, int s) 
{
    if ( h >= 0 && h < 24)
        hora = h;
    
    if (0 <= m && m < 60)
        minuto = m;
    

    if (0 <= s && s < 60)
        segundo = s;
}

void Hora::establecerHora(int h) // Para fijar solo el campo 'hora'
{
    hora = h;
}  

void Hora::establecerMinuto(int m) // Para fijar solo el campo 'minuto'
{
    minuto = m;
}

void Hora::establecerSegundo(int s) // Para fijar solo el campo 'segundo'
{
    segundo = s;
}

int  Hora::obtenerHora()
{
    return hora;
}

int  Hora::obtenerMinuto()
{
    return minuto;
}

int  Hora::obtenerSegundo()
{
    return segundo;
}

void Hora::imprimir() // Formato: 13:15:00
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
} 