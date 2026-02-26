#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // Reservar memoria para un entero
    int* pEntero = new int;
    *pEntero = 10;

    // Reservar memoria para un float
    float* pFlotante = new float;
    *pFlotante = 3.14f;

    // Reservar memoria para un arreglo dinámico (inicializaciòn en cero)
    int tam = 5;
    int* arreglo_1 = new int[tam]();

    int* arreglo_2 = new int[tam]{1, 2};
    // Resultado: 1 2 0 0 0

    int* arreglo_3 = new int[]{5, 4, 3, 2, 1, 0};

    // Imprimir valores
    cout << "\nEntero: " << *pEntero << endl;
    cout << "\nFlotante: " << *pFlotante << endl;

    cout << "\nArreglo_1:  int* arreglo_1 = new int[5]();" << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << arreglo_1[i] << " ";
    }
    cout << endl;

    cout << "\nArreglo_2:  int* arreglo_2 = new int[tam]{1, 2};" << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << arreglo_2[i] << " ";
    }
    cout << endl << "\n";

    cout << "\nArreglo_3:  int* arreglo_3 = new int[]{5, 4, 3, 2, 1, 0}; -> tamaño: " << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << arreglo_3[i] << " ";
    }
    cout << endl;

    // Liberar memoria
    delete pEntero;
    delete pFlotante;
    delete[] arreglo_1;
    delete[] arreglo_2;
    delete[] arreglo_3;
    
    cout << "\n";
    return 0;
}