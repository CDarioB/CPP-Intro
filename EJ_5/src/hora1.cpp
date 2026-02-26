#include <iostream>
#include "..\\include\\hora1.h"

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

void Hora::imprimir() // Formato: 13:15:00
{
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