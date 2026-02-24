### [**Índice (←)**](https://github.com/CDarioB/CPP-Intro/blob/master/README-TEM.md)

# Proyectos C++ con MAKE 
## **MAKE:** 
* Es una herramienta para la construcción (re-construcción) de software. (herramienta de automatización de compilación)

* Utilizada en C++ para gestionar proyectos complejos, compilando automáticamente solo los archivos fuente que han cambiado tras la última compilación. (**Minimiza el tiempo de construcción**) 

* Trabaja con dependencias.
 
* Utiliza un archivo **Makefile** con reglas y dependencias para orquestar la compilación y el enlazado eficiente de código.

## **Archivo Makefile**
Un archivo **Makefile** es un archivo de texto que contiene reglas que le indican a **make** qué construir y cómo.

Su estructura basica es (regla implícita):
```makefile
target: dependency dependency [...]
    <tab> command
    <tab> command
    <tab> [...]
```
* `target`: lo que se debe construir (**objetivo**).

* `dependency` (dependencias): archivos necesarios para construir el target (**prerequisito**).

* `command`: Una lista de comandos a ejecutar para construir el objetivo (**receta**)

Cuando se ejecuta, **make** busca los archivos `GNUmakefile`, `makefile`, y `Makefile`, en ese orden.

#### ✔️ **Ejemplo 1:**
```makefile
holaApp: main.c hola.c hola.h
	gcc -c main.c
	gcc -c hola.c
	gcc main.o hola.o -o holaApp
```
* `target`  → **holaApp** - (**Objetivo**, que se construya un programa con nombre **holaApp**).

* `dependency`  →  `main.c` `hola.c` `hola.h`. - (archivos necesarios para construir el target)

* `command`: (Una lista de comandos a ejecutar para construir el objetivo.)
  - gcc -c main.c
  - gcc -c hola.c
  - gcc main.o hola.o -o holaApp

**Ejecutemos el comando make y luego el ejecutable creado**
```bash
$ make
g++ -c main.cpp
g++ -c hola.cpp
g++ main.o hola.o -o holaApp

$ ls -l
total 152
-rw-r--r-- 1 Dario 197121    100 Feb 23 19:24 Makefile
-rw-r--r-- 1 Dario 197121    112 Feb 23 18:45 hola.cpp
-rw-r--r-- 1 Dario 197121     74 Feb 23 18:44 hola.h
-rw-r--r-- 1 Dario 197121    865 Feb 23 19:45 hola.o
-rwxr-xr-x 1 Dario 197121 139357 Feb 23 19:46 holaApp.exe*
-rw-r--r-- 1 Dario 197121     76 Feb 23 18:46 main.cpp
-rw-r--r-- 1 Dario 197121    893 Feb 23 19:45 main.o

$ ./holaApp
Hola, mundo!
```

**Ahora, modificar el archivo fuente main.c y reconstruir.**
```bash
$ make
g++ -c main.cpp
g++ -c hola.cpp
g++ main.o hola.o -o holaApp

$ ls -l
total 152
total 152
-rw-r--r-- 1 Dario 197121    100 Feb 23 19:24 Makefile
-rw-r--r-- 1 Dario 197121    112 Feb 23 18:45 hola.cpp
-rw-r--r-- 1 Dario 197121     74 Feb 23 18:44 hola.h
-rw-r--r-- 1 Dario 197121    865 Feb 23 20:01 hola.o
-rwxr-xr-x 1 Dario 197121 139357 Feb 23 20:01 holaApp.exe*
-rw-r--r-- 1 Dario 197121     76 Feb 23 20:01 main.cpp
-rw-r--r-- 1 Dario 197121    893 Feb 23 20:01 main.o

$ ./holaApp
Hola, Dario ...!
```

📌 **Observe** 📌 que los unicos archivos que cambiaron fueron los `.o` y el **ejecutable** (se puede aprteciar por el horario).


## **Archivo Makefile con variables.**

Puedes definir variables para evitar repetir texto:
```makefile
CC = g++
CXXFLAGS = -Wall 
OBJS = main.o utils.o
```

#### ✔️ **Ejemplo 2:**
```makefile
CC = gcc
CFLAGS = -Wall

hola: main.o hola.o
	$(CC) -o hola main.o hola.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

hola.o: hola.c
	$(CC) $(CFLAGS) -c hola.c

clean: 
	rm -f hola hola.o main.o
```
* `target` por defecto → `hola`

* `hola` **depende** de: `main.o` `hola.o`

* Verifica si existen main.o hola.o
  - Si no existen:
    - **ejecuta regla** `main.o`
    - **ejecuta regla** `hola.o`

* Ejecuta regla `hola`

* La recla clean solo se ejecuta si se lo indicamos por comando: `make clean`.

## **Reglas comunes**
### 👉 `all`
Define qué se construye por defecto (muy útil):
```makefile
all: programa
```

### 👉 `clean`
Define qué se construye por defecto (muy útil):
```makefile
clean:
	rm -f *.o programa
```
### 👉 `Variables automáticas`
| Variable | Significado             |
| -------- | ----------------------- |
| `$@`     | nombre del target       |
| `$<`     | primer prerequisito     |
| `$^`     | todos los prerequisitos |

```makefile
main.o: main.cpp
	g++ -c $< -o $@
```
* `$<` es el nombre del `.cpp` `main.cpp`
* `$@` es el `.o` que va a producir. `main.o`

#### ✔️✔️ **Ejemplo completo de Makefile (simple)** ✔️✔️

```makefile
# Variables
CXX = g++
CXXFLAGS = -Wall -g

# Objetivo por defecto
all: main

# Regla principal
main: main.o utils.o
	$(CXX) $(CXXFLAGS) main.o utils.o -o main

# Cómo compilar .o desde .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f *.o main
```
## **Comandos (algunos)**

| Comando | Descripción |
|----------|------------|
| ⚡ **make** | **Construye hola**.(siempre y cuando este declarado dentro del archivo Makefile) |
| ⚡ **make hola** | **Construye hola**.(siempre y cuando este declarado dentro del archivo Makefile) |
| ⚡ **make main.o** | **Compila solo main.o**.(siempre y cuando este declarado dentro del archivo Makefile) |
| ⚡ **make clean** | **Ejecuta la regla clean**. (siempre y cuando este declarado dentro del archivo Makefile) |

#### 📌✨✨✨ En la carpeta **ejmplos_make** (facilitado por la catedra de Informatica II de la facultad UTN FRC) pude ver ejemplos de paso a paso de los archivos **Makefile**. ✨✨✨📌

#### 📌✨✨✨ Para nuestros proyectos en windows usaremos el archivo **Makefile** personalizado, que se encuentra dentro de la arquitectura base propuesta en la rama **MASTER**. ✨✨✨📌

<br>

## 🏃🥇  [**Ejercicios (👉)**](README-EJ.md)

<br><br>

# 📚 Referencias Oficiales

La explicación de este sistema se basa en la documentación oficial de:

GNU Make — Manual oficial del proyecto
https://www.gnu.org/software/make/manual/

GNU Project — Documentación general del sistema
https://www.gnu.org/software/make/

GCC — Documentación oficial del compilador g++
https://gcc.gnu.org/onlinedocs/

POSIX — Especificación estándar del comportamiento de make
https://pubs.opengroup.org/onlinepubs/9699919799/utilities/make.html

<br>

### [**Índice (←)**](https://github.com/CDarioB/CPP-Intro/blob/master/README-TEM.md)