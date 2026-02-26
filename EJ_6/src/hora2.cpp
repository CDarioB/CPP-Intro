#include <iostream>
#include "..\\include\\hora2.h"

using std::cout;
using std::endl;

Hora::Hora()
{
    totalSegundos = 0;
}

void Hora::establecer(int hora, int minuto, int segundo) 
{
    if ( hora >= 0 && hora < 24 &&
         minuto >= 0 && minuto < 60 &&
         segundo >= 0 && segundo < 60)
    {
        totalSegundos = hora * 3600 + minuto * 60 + segundo;
    }
}

void Hora::imprimir() // Formato: 13:15:00
{
    int hora = totalSegundos / 3600;
    int minuto = (totalSegundos % 3600) / 60;
    int segundo = totalSegundos % 60;

    if (hora < 10)
        cout << "0";

    cout << hora << ":";
        
    if (minuto < 10)
        cout << "0";

    cout << minuto << ":";
    
    if (segundo < 10)
        cout << "0";

    cout << segundo << endl;
} 