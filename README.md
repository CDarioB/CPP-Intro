### [**Índice (←)**](https://github.com/CDarioB/CPP-Intro/blob/master/README-TEM.md)

# Proyectos C++ con MAKE 
## **MAKE:** 
* Es una herramienta para la construcción (re-construcción) de software. (herramienta de automatización de compilación)

* Utilizada en C++ para gestionar proyectos complejos, compilando automáticamente solo los archivos fuente que han cambiado tras la última compilación. (**Minimiza el tiempo de construcción**) 

* Trabaja con dependencias.
 
* Utiliza un archivo **Makefile** con reglas y dependencias para orquestar la compilación y el enlazado eficiente de código.

## **Archivo Makefile**
Un archivo **Makefile** es un archivo de texto que contiene reglas que le indican a **make** qué construir y cómo.

Su estructura vacía es:
```makefile
target: dependency dependency [...]
    command
    command
    [...]
```
* `target`: lo que se debe construir (**objetivo**).

* `dependency` (dependencias): archivos necesarios para construir el target (**prerrequisito**).

* `command`: Una lista de comandos a ejecutar para construir el objetivo (**receta**)

Cuando se ejecuta, **make** busca los archivos `GNUmakefile`, `makefile`, y `Makefile`, en ese orden.


### [**Índice (←)**](https://github.com/CDarioB/CPP-Intro/blob/master/README-TEM.md)