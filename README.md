# 🧾 Código Fuente (.c, .cpp, .h)
Instrucciones de alto nivel escritas por el programador.

# 🧾 Código de Máquina (.exe, .out)
 Instrucciones binarias (0 y 1) que entiende
 el procesador directamente.

# 📜 Código Objeto (.o, .obj)
Paso intermedio en lenguaje máquina, pero sin enlazar las bibliotecas.

# Etapas del Compilador

💻 **1️⃣ Preprocesamiento**
- **Comando:** `g++ -E main.cpp -o main.i`
- **Entrada:** `main.cpp` (código fuente)
- **Salida:** `main.i` (código fuente expandido)
- **Descripción:** 

📝 **2️⃣ Compilación**
- **Comando:** `g++ -S main.i -o main.s`
- **Entrada:** `main.i` (código fuente preprocesado)
- **Salida:** `main.s` (código ensamblador, texto legible por humanos)
- **Descripción:** Traduce el código fuente en instrucciones de ensamblador.

⚙️ **3️⃣ Ensamblado**
- **Comando:** `g++ -c main.s -o main.o`
- **Entrada:** `main.s` (código ensamblador)
- **Salida:** `main.o` (código objeto, binario, no ejecutable)
- **Descripción:** Convierte el ensamblador en código objeto, binario pero no ejecutable.

🖥️ **4️⃣ Enlazado (Linking)**
- **Comando:** `g++ main.o -o main`
- **Entrada:** `main.o` (código objeto) + bibliotecas
- **Salida:** `main` (archivo ejecutable, código máquina listo)
- **Descripción:** Combina todos los objetos y bibliotecas en un único ejecutable que puede correr en la computadora.


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

| Etapa | Descripción | Entrada | Salida | Comando |
|----------|------------| ------------ | ------------ | --------------- |
| **1️⃣ Preprocesamiento** | El preprocesador expande macros, incluye headers (#include) y prepara el código para compilar. | código Fuente (**.c**, **.cpp**, **.h**) | código fuente expandido (**.i**, **.ii**) | `g++ -E main.cpp -o main.i` |

</td>
</tr>
</table>

Al mismo nivel de la carpeta **MiProyecto** se encuentran los archivos **README.md** y **.gitignore**:
<table>
<tr>
<td valign="top">

<pre>
📦 MiProyecto
🧾 .gitignore
📘 README-EJ.md
📘 README-ENV-LINUX.md
📘 README-ENV-WIN.md
📘 README-TEM.md
📘 README.md
</pre>

</td>

<td valign="top">

| Archivo / Carpeta | Descripción |
|----------|------------|
| 🧾 .gitignore | Archivo git de exclusión para archivos/carpetas no deseadas en el repositorio|
| 📘 README-EJ.md | Enunciado del progragama a desarrollar |
| 📘 README-ENV-WIN.md | Doc. armado de entorno Linux|
| 📘 README-ENV-WIN.md | Doc. de armado de entorno Windows|
| 📘 README-TEM.md | Indice de temas a desarrollar |
| 📘 README.md | Doc. principal del proyecto |

</td>
</tr>
</table>

**NOTA:** Se creará un branch por cada tema o proyecto a desarrollar. En cada branch se respetará la **arquitectura** definida previamente en la **rama MASTER**. Lo único que variará es:
| Archivo / Carpeta | Descripción |
|----------|------------|
| 📘 README-EJ.md | Enunciado del progragama a desarrollar |
| 📘 README-ENV-WIN.md | Se elimina archivo |
| 📘 README-ENV-WIN.md | Se elimina archivo |
| 📘 README-TEM.md | Se elimina archivo |
| 📘 README.md | Marco Teórico |

</td>
</tr>
</table>


## ⚡ Ejecución con MAKE
1. Abre una **terminal** (**powershell**) en **Visual Code** y entra a tu proyecto (donde se encuentra el archivo **Makefile**):
```console
C:\CPP-INTRO> cd MiProyecto
C:\CPP-INTRO\MiProyecto> 
```

2. En la **terminal PowerShell** de **Visual Studio Code**, ejecuta el comando **"chcp 65001"** para cambiar la codificación de caracteres. Esto permitirá que letras especiales, como la **ñ**, se muestren correctamente al ejecutar tu programa.
```console
C:\CPP-INTRO\MiProyecto> chcp 65001
```

3. Dentro del proyecto (**MiProyecto**) ejecuta los siquientes comandos según necesites:

<table>
<tr>
<td valign="top">

| Comando | Descripción |
|----------|------------|
| ⚡ **make clean** | **Borra build**(📁) |
| ⚡ **make** | **Compila** |
| ⚡ **make run** | **Compila y Ejecuta** |

</td>
</tr>
</table>

**Ejemplo:**
```console
C:\CPP-INTRO\MiProyecto> make clean
C:\CPP-INTRO\MiProyecto> make run
```
**Otra forma: Ejecución manual** (una vez compilado el proyecto)
```console
C:\CPP-INTRO\MiProyecto> ./build/MiPrograma
```
NOTA: el nombre **MiPrograma** es el nombre que le dimos al ejecutable dentro del archivo **Makefile**.

## Temas a desarrollar:
* **Haz clik en** [**Índice (→)**](README-TEM.md)