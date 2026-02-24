# 📦 Makefile dentro de MiProyecto
 
[**Marco Teorico (👈)**](README.md)
<br>
[**Ejercicios (👈)**](README-EJ.md)

- Compilación: **-std=c++17**
-   Detecta automáticamente los archivos `.cpp`
-   Compila cada archivo en su correspondiente `.o`
-   Genera el ejecutable final en una carpeta separada
-   Permite limpiar el proyecto fácilmente
-   Permite compilar y ejecutar con un solo comando

<br><br>


# 📁 Estructura del Proyecto

    .
    ├── include/        # Archivos .h
    ├── src/            # Archivos .cpp
    ├── build/          # Archivos generados (.o y ejecutable)
    └── Makefile
<br><br>

# ⚙️ Configuración del Makefile

## 🔧 Compilador y Flags

    CXX = g++
    CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

-   `g++` → Compilador C++
-   `-Wall` → Activa advertencias comunes
-   `-Wextra` → Advertencias adicionales
-   `-std=c++17` → Usa el estándar C++17
-   `-Iinclude` → Agrega la carpeta `include/` al path de headers
<br>

## 📁 Directorios y ejecutable

    SRC_DIR = src
    BUILD_DIR = build
    TARGET = $(BUILD_DIR)/MiPrograma

-   `SRC_DIR` → Carpeta donde están los `.cpp`
-   `BUILD_DIR` → Carpeta donde se generan `.o` y el ejecutable
-   `TARGET` → Ejecutable final (`build/MiPrograma`)
<br>

## 📄 Detección automática de archivos

    SRCS = $(wildcard $(SRC_DIR)/*.cpp)
    OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

-   `wildcard` detecta automáticamente todos los `.cpp` en `src/`
-   Se transforman automáticamente en `.o` dentro de `build/`

### Ejemplo:

    src/main.cpp  → build/main.o
    src/utils.cpp → build/utils.o

No es necesario modificar el Makefile al agregar nuevos archivos `.cpp`.
<br>

# 🏗 Reglas del Makefile

## ✨ Regla principal

    all: $(BUILD_DIR) $(TARGET)

Es el objetivo por defecto.

Al ejecutar:

    make

Se realizan dos acciones:

1.  Crear la carpeta `build/`
2.  Generar el ejecutable
<br>

## ✨ Creación del directorio build

    $(BUILD_DIR):
        mkdir -p $(BUILD_DIR)

Crea la carpeta `build/` si no existe.
<br>

## ✨ Enlace del ejecutable

    $(TARGET): $(OBJS)
        $(CXX) $(CXXFLAGS) $^ -o $@

-   `$^` → Todos los archivos objeto
-   `$@` → Nombre del ejecutable

Comando equivalente:

    g++ -Wall -Wextra -std=c++17 -Iinclude build/*.o -o build/MiPrograma
<br>

## ✨ Regla patrón para compilar objetos

    $(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
        $(CXX) $(CXXFLAGS) -c $< -o $@

Significa:

> Para generar `build/archivo.o`, compilar `src/archivo.cpp`

-   `$<` → Archivo fuente
-   `$@` → Archivo objeto generado
<br>

## ✨ Limpieza del proyecto

    clean:
        rm -rf $(BUILD_DIR)

Se ejecuta con:

    make clean

Elimina completamente la carpeta `build/`.
<br>

## ✨ Ejecutar el programa

    run: all
        ./$(TARGET)

Se ejecuta con:

    make run

Primero compila si es necesario y luego ejecuta el programa.
<br>

## ✨ Uso de .PHONY

    .PHONY: all clean run

Declara que estos targets no representan archivos reales, sino acciones.

Evita conflictos si existiera un archivo llamado `clean`, `all` o `run`.
<br><br>

# ⚙ Cómo funciona internamente

`make`:
-   Construye un grafo de dependencias.
-   Verifica fechas de modificación.
-   Solo recompila lo que cambió.
-   Ejecuta los comandos necesarios para actualizar el ejecutable.

Esto permite compilaciones incrementales eficientes.
<br><br>

# ⚡ Comandos disponibles

| Comando        | Acción |
|---------------|--------|
| `make`        | Compila el proyecto |
| `make clean`  | Borra la carpeta `build/` |
| `make run`    | Compila (si es necesario) y ejecuta |

<br><br>

[**Marco Teorico (👈)**](README.md)
<br>
[**Ejercicios (👈)**](README-EJ.md)