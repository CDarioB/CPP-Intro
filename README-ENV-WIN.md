# Armado de entorno de trabajo para (windows):

* Instalar compilador C/C++
    - Instalar MinGW-x64 on Windows: [MinGW-x64 Download](https://www.msys2.org/)

    - Instalar C/C++ . A traves de **MinGW-x64** . [Instructivo](https://code.visualstudio.com/docs/languages/cpp#_example-install-mingwx64-on-windows)
    
        - Instale las opciones: de **gcc** (compilador c), **g++** (compilador C++) y **gdb** (depurador de codigo). (Tambien se puede instalar el **GNU Make**)

        - Desde la consola de comando de **MSYS2** , si no se quiere utilizar el menu, que se abre con el comando
        ```console
        $ pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
        ```
        Puede utilizar los comandos:
        ```console
        $ pacman -S mingw-w64-x86_64-gcc
        $ pacman -S mingw-w64-x86_64-gdb
        $ pacman -S mingw-w64-x86_64-make
        (otra opcion para el make: $ pacman -S make)
           
        o sino ejecutar todo junto:
        $ pacman -S mingw-w64-x86_64-{gcc,gdb,make}
        ``` 
        - Agregar en **Variables de entorno del sistema** las rutas **BIN**:
        
        1. Presiona Win + R
        2. Escribe: **sysdm.cpl** (presione enter / aceptar)
        3. Ir a → **Opciones avanzadas**
        4. Click en Variables de entorno
        5. En **“Variables del sistema”** busca **Path** , seleciona Path con el mause y haz Click en Editar.
        6. Agrega estas rutas (según instalación típica):
        ```
        C:\msys64\mingw64\bin
        C:\msys64\usr\bin
        ```
        - Comprobación de la instalación:
        1. Cierras las consolas abiertas que tengas, abre una nueva consola de sistema(cmd).
        2. Ejecuta los siguientes comandos:
        ```
        C:\> gcc --version
        C:\> g++ --version
        C:\> gdb --version
        C:\> make --version
        ```

* Instalar **Visual Studio Code**

* Instalar  **Microsoft C/C++ extension** en **Visual Studio Code**. [Instructivo y Configuración](https://code.visualstudio.com/docs/languages/cpp) . **En lugar de instalar** <span style="color:blue">**Microsoft C/C++ extension**</span> **pude instalarse** <span style="color:blue">**C/C++ Extension Pack**</span> .

**NOTAS:** Tambien se puede instalar direrentes extenciones de git y otras herramientas utiles. Se recomienta realizar una busqueda por internet para mayo información. **Ej.:** **GitLens**, **Git History Diff**.
<br><br><br>
[**(←) README.md**](README.md)
