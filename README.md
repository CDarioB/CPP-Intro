# Repositorio C++ 

## Objetivo:
Aprender conceptos basicos de C++

## Environment:
Para el armado del entorno de trabajo, se recomienda leer:
* **Windows:** [**README-ENV-WIN.md (→)**](README-ENV-WIN.md)
* **Linux:** [**README-ENV-LINUX.md (→)**](README-ENV-LINUX.md)  - **PENDIENTE**

## 📁 Estructura del proyecto:
Cada banch sera un proyecto diferente que tendra la siguiente estructura:
<table>
<tr>
<td valign="top">

<pre>
📦 MiProyecto
├── 📁 build
├── 📁 include
│   └── 📄 MiClase.h
│── 📁 libs
├── 📁 src
│   ├── 📄 MiClase.cpp
│   └── 📄 main.cpp
└── 📜 Makefile
</pre>

</td>

<td valign="top">

| Archivo / Carpeta | Descripción |
|----------|------------|
| 📦 MiProyecto | Nombre del proyecto |
| 📁 build | Archivos compilados |
| 📁 include | Archivos de cabecera (.h) |
| 📄 MiClase.h | Declaración de la clase |
| 📁 libs | Librerías externas |
| 📁 src | Código fuente |
| 📄 MiClase.cpp | Implementación de la clase |
| 📄 main.cpp | Punto de entrada del programa |
| 📜 Makefile | Sistema de compilación con GNU Make |



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