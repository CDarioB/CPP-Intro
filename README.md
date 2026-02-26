# Ejercicios de repaso de C++

1. Escribir un programa "Hola mundo" en lenguaje C++ (utilizar cout definido en el archivo de cabecera iostream).

**Ejecute el programa:**
```bash
> g++ hola_mundo.cpp
> ./a.out
HOLA MUNDO
```
[**Código Ej.1 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_1)

2. Escribir un programa que solicite al usuario un valor int, uno float y uno double y luego los imprima en pantalla (utilizar cout y cin). 

[**Código Ej.2 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_2)


3. Escribir un programa que realice una división entera utilizando una función con paso de parámetros por referencia:
    <ol type="A">
        <li>
            El programa debe solicitarle al usuario el valor del dividendo y del divisor.
        </li>
        <li>
            Si el divisor es 0 debe mostrar un mensaje de error y salir.
        </li>
        <li>
            La división la debe realizar una función cuyo prototipo sea:.
        </li>
    </ol>
    
        ```cpp
        int divisionEntera(int &a, int &b, int &res);
        ```
        la cual devuelve -1 si el divisor es 0, o 0 en caso contrario. La interacción del programa con el usuario debe ser la que se muestra a continuación:
        
        ```bash
        > ./a.out
        Ingrese el dividendo (entero): 10 
        Ingrese el divisor (entero): 2
        10 / 2 = 5
        > ./a.out
        Ingrese el dividendo (entero): 10 
        Ingrese el divisor (entero): 0
        ERROR: división por cero
        ```
    **Nota:** en este caso la función no devuelve el valor de la operación sino que el valor de retorno se utiliza para indicar si la operación se realizó con éxito o no.

[**Código Ej.3 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_3)
    
4. Escribir funciones sobrecargadas para realizar la resta entre valores enteros y de punto flotante, y un programa que verifique su funcionamiento.

**Ejecute el programa:**
```bash
> g++ sobrecarga_resta.cpp 
> ./a.out 
Ingrese dos enteros (separados por espacio): 23 13
La diferencia de (23 - 13) es igual a 10

Ingrese dos floats (separados por espacio): 5.35 4.16
La diferencia de (5.35 - 4.16) es igual a 1.19
```

[**Código Ej.4 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_4)

5. Escribir el archivo fuente hora1.cpp donde se implemente la clase de C++ cuya definición se encuentra en el archivo hora1.h mostrado a continuación:
```cpp
#ifndef HORA1_H
#define HORA1_H

class Hora {
  public:
    Hora(); // Constructor
    void establecer(int , int , int );
    void imprimir(); // Formato: 13:15:00

  private:
    int hora;    // 0 - 23
    int minuto;  // 0 - 59
    int segundo; // 0 - 59
};
#endif
```
El comportamiento de la clase es el siguiente:
    <ol type="A">
        <li>
            El constructor debe inicializar los datos miembros de la clase a cero.
        </li>
        <li>
            La función miembro `establecer()` permite fijar el valor de la hora ($h$, $m$ y $s$) luego de verificar que los valores pasados como argumentos sean correctos ($0 \leq h < 24$; y $0 \leq m,s < 59$).
        </li>
        <li>
           La función miembro `imprimir()` debe imprimir la hora en el formato de 24hs (p.e.: 01:10:22 o  23:59:59).
        </li>
    </ol>

A continuación se muestra el código fuente del programa para evaluar la clase `Hora` implementada:
```cpp
    #include <iostream>
    #include "hora1.h"
    
    using namespace std;
    
    int main()
    {
      Hora h;     // Instancia el objeto h de la clase Hora
    
      cout << "La hora por defecto es: ";
      h.imprimir();
        
      h.establecer(13, 27, 6);
      cout << "\nLa hora después de estableceres: ";
      h.imprimir();
    
      // Intenta establecer un valor inválido de Hora
      h.establecer(99, 99, 99);    
      cout << "\nDespués de intentar establecer un valor inválido: ";
      h.imprimir();
      cout << endl;

      return 0;
    }
```

**Nota:** recordar que para compilar ambos archivos fuentes se debe utilizar g++ (dentro de la carpeta donde se encuentran los cpp), o bien puedes empezar a usar make (make clean; make ; maqke run)

```bash
EJ_5/src $> g++ hora1.cpp ejr05.cpp
ó
EJ_5 $> make clean
EJ_5 $> make run
```

[**Código Ej.5 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_5)