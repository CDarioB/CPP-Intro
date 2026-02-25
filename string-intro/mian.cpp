#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strCadena;
    strCadena = "Hola Mundo";

    cout << "Esta cadena es: \n"
         << strCadena << endl;

    cout << "Esta cadena tiene " << strCadena.length() << " caracteres." << endl;

    /*
     * Internamente una cadena es similar a un vector char. Cada caractere tiene una posisción.
     * Se puede acceder a cada caractere (individualmente) con el operador [].
     * La posición dentro de la cadena strCadena se numera desde 0 hasta strCadena.length() - 1.
     */
    cout << "Primer caractere es  " << strCadena[0] << endl;

    if (strCadena[4] == ' ')
    {
        cout << "El caractere del medio es un ESPACIO" << endl;
    }
    else
    {
        cout << "El caractere del medio es " << strCadena[4] << endl;
    }

    cout << "Ultimo caractere es  " << strCadena[strCadena.length() - 1] << endl;

    // Comparación entre cadenas
    cout << "\n";
    string cadena1 = "Hola";
    string cadena2 = "Mundo";
    string cadena3 = "hola";

    cout << "cadena1 -> " << cadena1 << endl;
    cout << "cadena2 -> " << cadena2 << endl;
    cout << "cadena3 -> " << cadena3 << endl;

    cout << "\n";
    cout << "Comparaciones con ( == )" << endl;
    cout << "cadena1 == cadena2: " << (cadena1 == cadena2 ? "true" : "false") << endl;
    cout << "cadena1 == cadena3: " << (cadena1 == cadena3 ? "true" : "false") << endl;
    cout << "cadena1 == \"Hola\": " << (cadena1 == "Hola" ? "true" : "false") << endl;

    cout << "\n";
    cout << "Comparaciones con ( != )" << endl;
    cout << "cadena1 != cadena2: " << (cadena1 != cadena2 ? "true" : "false") << endl;
    cout << "cadena1 != cadena3: " << (cadena1 != cadena3 ? "true" : "false") << endl;
    cout << "cadena1 != \"Hola\": " << (cadena1 != "Hola" ? "true" : "false") << endl;

    // Concatenación de cadenas
    cout << "\n";
    string prefijo = "Ing.";
    string especialidad = " Electrónica";

    string titulo = prefijo + especialidad; // Concatena las dos cadenas
    titulo += " / UTN-FRC";                 // Añade otra cadena
    titulo += ".";                          // Añade un caracter

    cout << prefijo << especialidad << endl;
    cout << titulo << endl;

    cout << "\n";

    /*
     * Búsqueda en cadenas
     * string.find(key, pos) busca key en el string.
     *          * Key puede se un caracter o una cadena de texto.
     *          * pos es la posiscion de inicio, es opcional,
     *            si no se usa la función asume que es 0.
     *
     * Devuelve la posición (índice) donde comienza la coincidencia.
     * Si no encuentra nada, devuelve: string::npos que indica que no se encontró key
     */
    string sentence = "All the world's a stage, And all the men and women merely players";

    int firstMe = sentence.find("me");
    int secondMe = sentence.find("me", firstMe + 1);
    int thirdMe = sentence.find("me", secondMe + 1);
    int gPos = sentence.find('g');
    int zPos = sentence.find('z'); // Returns string::npos

    cout << "Primer 'me' - posicón inicial: " << firstMe << endl;
    cout << "Segundo 'me' - posicón inicial: " << secondMe << endl;
    cout << "Tercer 'me' - posicón inicial: " << thirdMe << endl;

    cout << "Está 'g' en la cadena? ";
    cout << (gPos != string::npos ? "Si!" : "No!") << endl;
    cout << "Está 'z' en la cadena? ";
    cout << (zPos != string::npos ? "Si!" : "No!") << endl;

    cout << "\n";

    return 0;
}