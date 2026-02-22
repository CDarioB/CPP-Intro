### [**Índice (←)**](https://github.com/CDarioB/CPP-Intro/blob/master/README-TEM.md)

<br>

# 🧾 Código Fuente (.c, .cpp, .h)
Instrucciones de alto nivel escritas por el programador.

# 🧾 Código de Máquina (.exe, .out)
 Instrucciones binarias (0 y 1) que entiende
 el procesador directamente.

# 📜 Código Objeto (.o, .obj)
Paso intermedio en lenguaje máquina, pero sin enlazar las bibliotecas.
(binario, contiene código máquina + metadata)

# 🛠️⚙️ Etapas del Compilador
 <table>
<tr>
<td valign="top">

<pre>
🧾 Código Fuente (.c, .cpp, .h)
          │ 
          │        
1️⃣ Preprocesamiento (.cpp → .i, .ii)
          │ 
          │
   2️⃣ Compilación (.i / .ii  →  .s)
          │ 
          │
   3️⃣ Ensamblado (.s → .o / .obj)
          │ 
          │                    ( .a  / .so )
   4️⃣ Enlazado (Linker)  <────  BIBLIOTECA
          │  ( .o → .exe (para Windows) / .out (para linux) )
          │  
      Ejecutable (Para Windows: .exe, para Linux: a.out)
</pre>

**3️⃣ Ensamblado**
- **Descripción:** Convierte el ensamblador en código objeto, binario pero no ejecutable.
- **Entrada:** `main.s` (código ensamblador)
- **Salida:** `main.o` (código objeto, binario, no ejecutable)
- **Comando:** `g++ -c main.s -o main.o`
</td>

<td valign="top">

**1️⃣ Preprocesamiento**
- **Descripción:** El preprocesador expande macros, incluye headers (`#include`) y prepara el código para compilar.
- **Entrada:** `main.cpp` (código fuente → `.c, .cpp, .h`)
- **Salida:** `main.i` (código fuente expandido → `.i, .ii`)
- **Comando:** `g++ -E main.cpp -o main.i`

**2️⃣ Compilación**
- **Descripción:** Traduce el código fuente en instrucciones de ensamblador.
- **Entrada:** `main.i` (código fuente preprocesado)
- **Salida:** `main.s` (código ensamblador → `.s`, texto legible por humanos)
- **Comando:** `g++ -S main.i -o main.s`
</td>
</tr>
</table>

**4️⃣ Enlazado (Linker)**
- **Descripción:** Combina todos los objetos y bibliotecas en un único ejecutable que puede correr en la computadora. (Archivo final listo para correr en la CPU - Contiene código máquina completo)
- **Entrada:** `main.o` (código objeto) + Bibliotecas
- **Salida:** `main` (archivo ejecutable, código máquina listo)
- **Comando:** `g++ main.o -o main`

**NOTA:** Es importante aclarar que cada vez que se ejecute un comando correspondiente a una etapa, este ejecutará tanto la etapa anterior como la etapa actual. **Es decir:** 

<table>
<tr>
<td valign="top">

| Comando | Descripción |
|----------|------------|
| `g++ -E main.cpp -o main.i` | Preprocesamiento **sin** compilación |
| `g++ -S main.i -o main.s` | Preprocesacmiento y Compilación **sin** Enlazado|
| `g++ -c main.s -o main.o` | Preprocesacmiento, Compilación, Ensamblado **sin** Enlazado |
| `g++ main.o -o main` | Preprocesacmiento, Compilación, Ensamblado y Enlazado ... aqui tambien de enlazan las Bibliotecas. |
</td>
</tr>
</table>

### ❗❗❗ Importante:
`g++` (al igual que `gcc`) permite abreviar el proceso de compilación, ya que cada etapa ejecuta implícitamente las etapas anteriores.

Por este motivo, es posible invocar directamente una fase determinada sin ejecutar manualmente todas las anteriores.
```bash
$ g++ -S  main.cpp MiClase.cpp
$ g++ -c  main.cpp MiClase.cpp
$ g++ MiClase.cpp main.cpp -o app
```
En estos casos, el compilador ejecuta internamente las etapas previas necesarias, pero solo deja visible el archivo correspondiente a la etapa final solicitada:

* `-S` → genera archivos ensamblador (`.s`

* `-c` → genera archivos objeto (`.o`)

* `sin flags` → genera el ejecutable final

Los archivos intermedios generados durante el proceso no se conservan por defecto.

#### 🔍 Visualización de archivos intermedios
Si se desea **conservar y examinar los archivos intermedios** (preprocesado, ensamblador y objeto), se recomienda utilizar la opción `--save-temps`, que instruye al compilador a no eliminar dichos archivos:
```bash
$ g++ -S --save-temps  main.cpp MiClase.cpp
$ g++ -c --save-temps main.cpp MiClase.cpp
$ g++ --save-temps MiClase.cpp main.cpp -o app
```
Esto permitirá observar explícitamente los archivos generados en cada etapa, como:

* `.ii` (preprocesado en C++)

* `.s` (ensamblador)

* `.o` (objeto)

<br><br>

## 🏃🥇  [**Ejercicios (👉)**](README-EJ.md)

<br><br>

# 📚 Bibliotecas
Una **biblioteca (library)** es un conjunto de funciones ya compiladas que pueden reutilizarse en distintos programas sin reescribir el código.

**No son código fuente** (aunque pueden distribuirse junto a headers), **Son código máquina**.

## 1️⃣ Bibliotecas Estáticas (**.a**)
Son archivos que contienen código objeto ya compilado (**codigo de maquina**) y que se incorporan al ejecutable en el momento del enlazado.

**Extensiones:**
* Linux → `.a`
* Windows (MinGW) → `.a`
* Windows (MSVC) →  `.lib`

### ⚙ Cómo funcionan
Durante el linkeo, el enlazador copia dentro del ejecutable las funciones necesarias desde la biblioteca. **Ejemplo:**
```bash
$ g++ main.o -L. -libreria -o app
```

**Si libreria.a es estática, su código se integra dentro de app.**

### 🎯 Resultado
* El ejecutable contiene todo el código.
* No depende de archivos externos para funcionar.
* Es más grande.

## 2️⃣ Bibliotecas Dinámicas (**.so / .dll**)
Son bibliotecas que no se integran completamente en el ejecutable, sino que se cargan en tiempo de ejecución.

**Extensiones:**
* Linux → `.so`
* Windows → `.dll`
* macOS → `.dylib`

### ⚙ Cómo funcionan
En el enlazado solo se guarda una referencia a la biblioteca.

Al ejecutar el programa:
```bash
$ ./app
```
**El sistema operativo carga la biblioteca dinámica en memoria.**

### 🎯 Resultado
* Ejecutable más pequeño.
* Puede compartirse la biblioteca entre varios programas.
* Requiere que la biblioteca esté instalada en el sistema.

## 📌 Resumen
* **Bibliotecas = código ya compilado reutilizable**. 
* 👉 **Pertenecen a la etapa de ENLAZADO (Linking)**.
  - **Biblioteca Estáticas** → se copian dentro del ejecutable.
  - **Biblioteca Dinámicas** → se cargan en tiempo de ejecución.
* **Son código máquina**, no código fuente.
  - Código objeto / código máquina compilado
  - Contienen símbolos y secciones binarias
  - Una `.a` es un archivo contenedor de múltiples `.o`.
  - Una `.so` es un binario enlazable dinámicamente.

<br><br>

### [**Índice (←)**](https://github.com/CDarioB/CPP-Intro/blob/master/README-TEM.md)
