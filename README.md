# Repositorio C++ 

## Objetivo:
Aprender conceptos basicos de C++

## Environment:
Para el armado del entorno de trabajo, se recomienda leer:
* **Windows:** [README-ENV-WIN.md (→)](README-ENV-WIN.md)
* **Linux:** [README-ENV-LINUX.md (→)](README-ENV-LINUX.md)  - 
<font color="red"> **PENDIENTE** </font>

## 📁 Estructura del proyecto:
Cada banch sera un proyecto diferente que tendra la siguiente estructura:
<table>
<tr>
<td valign="top">

<pre>
📦 MiProyecto
├── 📁 build
├── 📁 include
│   └── 📘 MiClase.h
│── 📁 libs
├── 📁 src
│   ├── 📗 MiClase.cpp
│   └── 📗 main.cpp
├── 🛠️ Makefile
└── 📘 README.md
</pre>

</td>

<td valign="top">

| Archivo / Carpeta | Descripción |
|----------|------------|
| 📦 MiProyecto | Nombre del proyecto |
| 📁 build | 📦 Archivos compilados |
| 📁 include | 📚 Archivos de cabecera (.h) |
| 📘 MiClase.h | 🧩 Declaración de la clase |
| 📁 libs | 🔗 Librerías externas |
| 📁 src | 💻 Código fuente |
| 📗 MiClase.cpp | ⚙️ Implementación de la clase |
| 📗 main.cpp | 🚀 Punto de entrada del programa |
| ⚙️ Makefile | 🛠️ Sistema de compilación con GNU Make |
| 📘 README.md | 📖 Marco Teorico y Ejercicio |


</td>
</tr>
</table>

Al mismo nivel se de MiProyecto se encuentran los archivos README.md principales:
<table>
<tr>
<td valign="top">

<pre>
📦 MiProyecto
📘 .gitignore
📘 README-ENV-LINUX.md
📘 README-ENV-WIN.md
📘 README.md
</pre>

</td>

<td valign="top">

| Archivo / Carpeta | Descripción |
|----------|------------|
| 📘 .gitignore | 📖 Archivo git de exclusión para archivos/carpetas no deseadas en el repositorio|
| 📘 README-ENV-WIN.md | 📖 Doc. armado de entorno Linux|
| 📘 README-ENV-WIN.md | 📖 Doc. de armado de entorno Windows|
| 📘 README.md | 📖 Documentación principal del proyecto |

</td>
</tr>
</table>
