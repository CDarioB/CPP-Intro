#include <iostream>

using std::cout;
using std::endl;

const unsigned char TAM = 5;

int main()
{
    // Reservar memoria para un entero
    int *ptrEntero = new int(10);
    /*
     - int* ptrEntero = new int;
     - *ptrEntero = 10;
    */

    // Reservar memoria para un float
    float *ptrFloat = new float(3.14);
    /*
     - float *ptrFloat = new float;
     - *ptrFloat = 3.14f;
    */

    // Reservar memoria para un arreglo dinámico (inicializaciòn en cero)
    int* arreglo_1 = new int[TAM]();

    int* arreglo_2 = new int[TAM]{1, 2};
    // Resultado: 1 2 0 0 0

    int* arreglo_3 = new int[]{5, 4, 3, 2, 1, 0};

    int* arreglo_4 = new int[TAM];
    for (int i = 0; i < TAM; i++)
    {
        arreglo_4[i] = 0;
    }

    // Imprimir valores
    cout << "\nEntero: " << *ptrEntero << endl;
    cout << "\nFlotante: " << *ptrFloat << endl;

    cout << "\nArreglo_1:  int* arreglo_1 = new int[5]();" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo_1[i] << " ";
    }
    cout << endl;

    cout << "\nArreglo_2:  int* arreglo_2 = new int[TAM]{1, 2};" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo_2[i] << " ";
    }
    cout << endl << "\n";

    cout << "\nArreglo_3:  int* arreglo_3 = new int[]{5, 4, 3, 2, 1, 0};" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo_3[i] << " ";
    }
    cout << endl;

    cout << "\nArreglo_4:  int* arreglo_4 = new int[TAM]; -> con for -> arreglo_4[i] = 0; " << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo_4[i] << " ";
    }
    cout << endl;

    // Liberar memoria
    delete ptrEntero;
    delete ptrFloat;
    delete[] arreglo_1;
    delete[] arreglo_2;
    delete[] arreglo_3;
    
    cout << "\n";
    return 0;
}