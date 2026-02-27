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
    1. El programa debe solicitarle al usuario el valor del dividendo y del divisor.
    1. Si el divisor es 0 debe mostrar un mensaje de error y salir.
    1. La división la debe realizar una función cuyo prototipo sea:
```cpp
int divisionEntera(int &a, int &b, int &res);
```
La cual devuelve -1 si el divisor es 0, o 0 en caso contrario. La interacción del programa con el usuario debe ser la que se muestra a continuación:
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
*  **A.** El constructor debe inicializar los datos miembros de la clase a cero.
* **B.** La función miembro `establecer()` permite fijar el valor de la hora ($h$, $m$ y $s$) luego de verificar que los valores pasados como argumentos sean correctos ($0 \leq h < 24$; y $0 \leq m,s < 59$).
* **C.**La función miembro `imprimir()` debe imprimir la hora en el formato de 24hs (p.e.: 01:10:22 o  23:59:59).

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

6. Modificar la implementación de la clase Hora del ejercicio anterior de forma tal que internamente la hora este almacenada como la cantidad de segundos desde la medianoche. La interfaz de la clase debe ser la misma. Para ello:
    <ol type="A">
        <li>
            Codificar los archivos hora2.h y hora2.cpp con la nueva implementación.
        </li>
        <li>
            Probar la clase utilizando el mismo código fuente de prueba que el ejercicio anterior.
        </li>
    </ol>

[**Código Ej.6 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_6)


7. Modificar la implementación de la clase Hora del 5 (guardar como hora3.h y hora3.cpp) donde se incluyan también funciones miembros set y get. Los prototipos de las funciones se muestran a continuación:
```cpp
void establecerHora(int );  // Para fijar solo el campo 'hora'
void establecerMinuto(int ); // Para fijar solo el campo 'minuto'
void establecerSegundo(int ); // Para fijar solo el campo 'segundo'
int obtenerHora();
int obtenerMinuto();
int obtenerSegundo();
```

[**Código Ej.7 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_7)

8. Agregar el calificador const a las funciones miembros de la clase Hora del ejercicio anterior según corresponda.

[**Código Ej.8 = Ej.7 con "const" (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_7)

9. Modificar la clase Hora del ejercicio anterior para que las funciones miembros puedan ser llamadas en cascada como se muestra en el Listado~\ref{lst:cascada} (utilizar el puntero this).
```cpp
Hora h;
h.establecer(17,30,0).imprimir();
h.establecerHora(17).establecerMinuto(30).establecerSegundo(0);
```

[**Código Ej.9 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_9)

10. Escribir una clase `Complejo` (nombres de archivos `complejo1.h` y `complejo1.cpp`) que permita realizar aritmética básica con números complejos, junto a un programa que verifique el correcto funcionamiento. <br> **Nota:** los números complejos son de la forma $a + ib$, donde $i=\sqrt{-1}$.
    1. Utilizar variables `double` para los datos miembros (`private`) de la clase.
    1. Codificar un constructor que permita inicializar un objeto de la clase, el cual debe tener valores predeterminados si no se proporcionan argumentos.
    1. Codifique funciones miembro `public` para:
        1. Sumar dos números complejos.
        1. Restar dos números complejos.
        1. Imprimir un número complejo de la forma (`parteReal, parteImaginaria`). 
        <br>
        P.e.: el complejo $2+3i$ se imprime `(2, 3)`.
        
[**Código Ej.10 - complejo1.cpp (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_10)

11. Escribir un programa que, utilizando la clase Complejo del ejercicio anterior, defina e inicialice dos números complejos, los sume y reste, y muestre los resultados.

[**Código Ej.11 - main.cpp (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_10)

12. Agregarle a la implementación de la clase Complejo del ejercicio 10 funciones get para obtener la parte real y la parte imaginaria.

[**Código Ej.12 - Ej.10 con metodos set/get clase complejo (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_10)

13. Modificar el programa del ejercicio 11 para que las **operaciones de suma y resta** de los números complejos **sean realizadas por sendas funciones definidas en la propia aplicación**. Estas funciones deben ser funciones **al estilo de C, o sea, funciones no miembros de la clase**. En su implementación, estas funciones deben utilizar las funciones miembros get de la clase para obtener el valor de complejo.

[**Código Ej.13 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_13)

14. Escribir un programa que asigne y libere memoria dinámica utilizando los operadores `new` y `delete` de C++. El programa debe:
    1. reservar memoria para almacenar un valor entero y uno en punto flotante, y asignarle valores,
    1. reservar memoria para un arreglo unidimensional de enteros e inicializarlos a cero,
    1. imprimir cada una de las variables antes generadas y
    1. liberar la memoria reservada.

[**Código Ej.14 (→)**](https://github.com/CDarioB/CPP-Intro/tree/CPP-EJERCICIOS/EJ_14)

15. Modificar la clase Complejo del ejercicio 10 para que las operaciones aritméticas se realicen mediante **sobrecarga de operadores**. **Sobrecargar los operadores +, -, += y -=** (nombres de archivos complejo.h y complejo.cpp).

[**Código Ej.15 (→)**](EJ_15/)

<br><br><br>

16. Modificar la clase Complejo del ejercicio 15 para sobrecargar los operadores de inserción y extracción de flujo (<< y >>). Para el ingreso de un número complejo por le entrada estándar se deben ingresar la parte real e imaginaria separada por un espacio (nombres de archivos complejo4.h y complejo4.cpp). A continuación se muestra el código fuente del programa para evaluar la clase implementada.
```cpp
#include <iostream>
#include "complejo4.h"
using namespace std;

int main()
{
  cout << "Ingrese un nro complejo (c1): ";
  Complejo c1;
  cin >> c1;

  cout << "Ingrese un nro complejo (c2): ";
  Complejo c2;
  cin >> c2;
  cout << endl;

  cout << "Luego de 'resul = c1 + c2'" << endl;
  Complejo resul;
  resul = c1 + c2;
  cout << "c1 = " << c1 << endl << "c2 = " << c2 << endl
    << "resul = " << resul << endl << endl;

  cout << "Luego de 'resul = c1 - c2'" << endl;
  resul = c1 - c2;
  cout << "c1 = " << c1 << endl << "c2 = " << c2 << endl
    << "resul = " << resul << endl << endl;

  cout << "Luego de 'c2 += c1'" << endl;
  c2 += c1;
  cout << "c1 = " << c1 << endl << "c2 = " << c2 << endl
    << "resul = " << resul << endl << endl;

  return 0;
}
```


<br><br><br>

17. Agregarle a la clase Complejo del ejercicio 16 los operadores de igualdad == y desigualdad !=, y el constructor de copia (nombres de archivos complejo5.h y complejo5.cpp).

<br><br><br>

18. A partir de la declaración de la clase Cadena en el archivo cadena.h y del programa mostrados a continuación, codificar el archivo cadena.cpp donde se implementen las funciones miembros de la clase. Utilizar asignación dinámica de memoria (con new y delete) para reservar espacio para almacenar la cadena.
```cpp
#ifndef CADENA_H
#define CADENA_H

class Cadena {
  public:
    Cadena(int = 20); // Constructor
    ~Cadena();        // Destructor

    void establecer(const char * );
    void imprimir() const;

  private:
    const int longitud;
    char *cad;
};
#endif
```

```cpp
#include <iostream>
#include <cstring>
#include "cadena.h"

int main() {
  Cadena cad1;
  cad1.establecer("Hola");
  cad1.imprimir();

  Cadena cad2(27);
  cad2.establecer(
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  cad2.imprimir();

  return 0;
}
```

19. Escribir una clase Cadena (nombre de archivos cadena2.h y cadena2.cpp) similar a la del ejercicio anterior en la cual la asignación y la impresión por pantalla de la cadena se realice mediante sobrecarga de operadores. A continuación se muestra el código fuente para evaluar la implementación de la clase.
```cpp
#include <iostream>
#include "cadena2.h"

using namespace std;

int main()
{
  Cadena cad1;
  cad1 << "Prueba1";
  cout << cad1 << endl;

  Cadena cad2(8);
  cad2 << "Prueba2";
  cout << cad2 << endl;

  cad2 << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << cad2 << endl;

  return 0;
}
```
