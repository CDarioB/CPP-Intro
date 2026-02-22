# 🏃🥇 Ejercicios

 [**Marco Teorico (👈)**](README.md)

**📌 Nota:** Se simplificara la estructura del proyecto para estas practicas.

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
**📌 NOTA:** Cuando se usa -E con más de un archivo fuente, no puedes usar **-o** porque **g++** no sabe a qué archivo asignar la salida; la opción **-o** solo funciona si preprocesas un solo archivo.

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

**📌 NOTA 📌** Recordar que para Windws genera un archivo .exe y para Linux un archivo .out

Ejecución manual del programa:
```bash
$ ./programa
```

### 5️⃣ - Ejercicios sobre abreviación del proceso de compilación
1. Vuelva a la estructura del ejercicio 1️⃣, es decir borra todos los archivos generados por la compilación de **g++**. (Solo quedate con los archivos **.cpp** y **.h**).

2. Ejecute comando `g++ -S main.cpp MiClase.cpp`
```bash
$ g++ -S main.cpp MiClase.cpp
$ ls -l
-rw-r--r-- 1 Dario 197121   620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121   383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 46638 Feb 22 18:49 MiClase.s
-rw-r--r-- 1 Dario 197121  1501 Feb 22 14:53 main.cpp
-rw-r--r-- 1 Dario 197121 55618 Feb 22 18:49 main.s
```
**📌 Observe 📌** que sean generado los archivos **main.s** y **MiClase.s**. En estos casos, el compilador ejecuta internamente las etapas previas necesarias, pero solo deja visible el archivo correspondiente a la etapa final solicitada. Los archivos intermedios generados durante el proceso no se conservan por defecto. **(Ver Marco Teórico).**

3. Vuelva a borrar todos los archivos menos los que tengan extensión  **.cpp** y **.h**.

2. Ejecute comando `g++ -S --save-temps  main.cpp MiClase.cpp`
```bash
$ ls -l
-rw-r--r-- 1 Dario 197121  620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121  383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1501 Feb 22 14:53 main.cpp

$ g++ -S --save-temps  main.cpp MiClase.cpp
$ ls -l
-rw-r--r-- 1 Dario 197121     620 Feb 22 14:53 MiClase.cpp
-rw-r--r-- 1 Dario 197121     383 Feb 21 18:55 MiClase.h
-rw-r--r-- 1 Dario 197121 1058303 Feb 22 18:58 MiClase.ii
-rw-r--r-- 1 Dario 197121   46638 Feb 22 18:58 MiClase.s
-rw-r--r-- 1 Dario 197121    1501 Feb 22 14:53 main.cpp
-rw-r--r-- 1 Dario 197121 1059121 Feb 22 18:58 main.ii
-rw-r--r-- 1 Dario 197121   55618 Feb 22 18:58 main.s
```

**📌 Observe 📌** que al utilizar la opción `--save-temps`, se le indica al compilador que **no elimine los archivos intermedios que se generan durante el proceso de compilación**.

En otras palabras, esta opción permite conservar los archivos correspondientes a las etapas anteriores (como el preprocesado y el ensamblador), en lugar de eliminarlos automáticamente al finalizar cada fase.

<br>

#### **📌 Ahora es tu turno, práctica. 📌** 
#### **🔥 Desafío:** ejecuta cada comando y verifica qué archivos se generan en cada etapa.