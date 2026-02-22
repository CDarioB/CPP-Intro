# 🏃🥇 Ejercicios

 [**Marco Teorico (👈)**](README.md)

**Nota:** Se simplificara la estructura del proyecto para estas practicas.

### 1️⃣ - Crea un proyecto con las siguiente estructura: (puede utilizar la que se encuentra en este brach).
<pre>
📦 MiProyecto
├── 📄 MiClase.h
├── 📄 MiClase.cpp
└── 📄 main.cpp
</pre>

### 2️⃣ - Etapa 1: Preprocesamiento.
1. Ingrese a la carpeta MiPproyecto y ejecute `ls -l`.
```bash
$ cd MiProyecto/
$ ls -l
total 6
-rw-r--r-- 1 Dario 197121  620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121  383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1501 Feb 22 14:53 main.cpp
```

2. Ejecute el comando:
```bash
$ g++ -E MiClase.cpp -o MiClase.i
$ g++ -E main.cpp -o main.i
$ ls -l
-rw-r--r-- 1 Dario 197121     620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121     383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1058303 Feb 22 16:52 MiClase.i
-rw-r--r-- 1 Dario 197121    1501 Feb 22 14:53 main.cpp
-rw-r--r-- 1 Dario 197121 1059121 Feb 22 16:53 main.i
```
**NOTA:** Cuando se usa -E con más de un archivo fuente, no puedes usar **-o** porque **g++** no sabe a qué archivo asignar la salida; la opción **-o** solo funciona si preprocesas un solo archivo.

### 3️⃣ - Etapa 2: Compilación.
```bash
$ g++ -S MiClase.i -o MiClase.s
$ g++ -S -S main.i -o main.s
$ ls -l
-rw-r--r-- 1 Dario 197121     620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121     383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1058303 Feb 22 16:56 MiClase.i
-rw-r--r-- 1 Dario 197121   46638 Feb 22 16:56 MiClase.s
-rw-r--r-- 1 Dario 197121    1501 Feb 22 14:53 main.cpp
-rw-r--r-- 1 Dario 197121 1059121 Feb 22 16:56 main.i
-rw-r--r-- 1 Dario 197121   55618 Feb 22 16:56 main.s
```

### 4️ - Etapa 3: Ensamblado.
```bash
$ g++ -c MiClase.s -o MiClase.o
$ g++ -c main.s -o main.o
$ ls -l
-rw-r--r-- 1 Dario 197121     620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121     383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1058303 Feb 22 16:56 MiClase.i
-rw-r--r-- 1 Dario 197121   35714 Feb 22 17:05 MiClase.o
-rw-r--r-- 1 Dario 197121   46638 Feb 22 16:56 MiClase.s
-rw-r--r-- 1 Dario 197121    1501 Feb 22 14:53 main.cpp
-rw-r--r-- 1 Dario 197121 1059121 Feb 22 16:56 main.i
-rw-r--r-- 1 Dario 197121   42945 Feb 22 17:05 main.o
-rw-r--r-- 1 Dario 197121   55618 Feb 22 16:56 main.s
```
### 5️⃣ - Etapa 4: Enlance. (Genera el ejecutable)
```bash
$ g++ MiClase.o main.o -o programa
$ ls -l
-rw-r--r-- 1 Dario 197121     620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121     383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1058303 Feb 22 16:56 MiClase.i
-rw-r--r-- 1 Dario 197121   35714 Feb 22 17:05 MiClase.o
-rw-r--r-- 1 Dario 197121   46638 Feb 22 16:56 MiClase.s
-rw-r--r-- 1 Dario 197121    1501 Feb 22 14:53 main.cpp
-rw-r--r-- 1 Dario 197121 1059121 Feb 22 16:56 main.i
-rw-r--r-- 1 Dario 197121   42945 Feb 22 17:05 main.o
-rw-r--r-- 1 Dario 197121   55618 Feb 22 16:56 main.s
-rwxr-xr-x 1 Dario 197121  169938 Feb 22 17:11 programa.exe*
```

**NOTA:** Recordarque para Windws genera un archivo .exe y para Linux un archivo .out

Ejecución manual del programa:
```bash
$ ./programa
```

