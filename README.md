# 🧾 Código Fuente (.c, .cpp, .h)
Instrucciones de alto nivel escritas por el programador.

# 🧾 Código de Máquina (.exe, .out)
 Instrucciones binarias (0 y 1) que entiende
 el procesador directamente.

# 📜 Código Objeto (.o, .obj)
Paso intermedio en lenguaje máquina, pero sin enlazar las bibliotecas.

# 🛠️⚙️ Etapas del Compilador
 <table>
<tr>
<td valign="top">

<pre>
🧾 Código Fuente (.c, .cpp, .h)
          │ 
          │          
1️⃣ Preprocesamiento
          │ 
          │
   2️⃣ Compilación
          │ 
          │
   3️⃣ Ensamblado
          │ 
          │
   4️⃣ Enlazado (Linking)
          │ 
          │
      Ejecutable
</pre>

</td>

<td valign="top">


**1️⃣ Preprocesamiento**
- **Descripción:** El preprocesador expande macros, incluye headers (`#include`) y prepara el código para compilar.
- **Entrada:** `main.cpp` (código fuente)
- **Salida:** `main.i` (código fuente expandido)
- **Comando:** `g++ -E main.cpp -o main.i`

**2️⃣ Compilación**
- **Descripción:** Traduce el código fuente en instrucciones de ensamblador.
- **Entrada:** `main.i` (código fuente preprocesado)
- **Salida:** `main.s` (código ensamblador, texto legible por humanos)
- **Comando:** `g++ -S main.i -o main.s`

**3️⃣ Ensamblado**
- **Descripción:** Convierte el ensamblador en código objeto, binario pero no ejecutable.
- **Entrada:** `main.s` (código ensamblador)
- **Salida:** `main.o` (código objeto, binario, no ejecutable)
- **Comando:** `g++ -c main.s -o main.o`
</td>
</tr>
</table>

**4️⃣ Enlazado (Linking)**
- **Descripción:** Combina todos los objetos y bibliotecas en un único ejecutable que puede correr en la computadora. (Archivo final listo para correr en la CPU - Contiene código máquina completo)
- **Entrada:** `main.o` (código objeto) + bibliotecas
- **Salida:** `main` (archivo ejecutable, código máquina listo)
- **Comando:** `g++ main.o -o main`
