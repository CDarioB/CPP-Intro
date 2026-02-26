#include <iostream>

using namespace std;

/*
    La función:
    - Devuelve -1 si el divisor es 0.
    - Devuelve 0 si la operación fue exitosa.
    - El resultado de la división se guarda en 'res' (por referencia).
*/
int divisionEntera(int &a, int &b, int &res) {
    if (b == 0) {
        return -1;  // error
    }

    res = a / b;
    return 0;       // éxito
}

int main() {
    int dividendo;
    int divisor;
    int resultado;

    cout << "Ingrese el dividendo (entero): ";
    cin >> dividendo;

    cout << "Ingrese el divisor (entero): ";
    cin >> divisor;

    int estado = divisionEntera(dividendo, divisor, resultado);

    if (estado == -1) {
        cout << "ERROR: division por cero" << endl;
    } else {
        cout << dividendo << " / " << divisor << " = " << resultado << endl;
    }

    return 0;
}