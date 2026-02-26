#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int iNum;
	float fNum;
	double dNum;
    cout << "Ingrese un numero entero: ";
	cin >> iNum;
	
	cout << "Ingrese un numero decimal (float): ";
    cin >> fNum; // Entrada de float

    cout << "Ingrese un numero decimal preciso (double): ";
    cin >> dNum; // Entrada de double

	cout << "Int: " << iNum << endl;
    cout << "Float: " << fNum << endl;
    cout << "Double: " << dNum << endl;
    
	cout << "\n";
	
	cout << "Introduce un Int, float y un double: ";
    // Ingreso en una sola línea
    cin >> iNum >> fNum >> dNum;

    cout << "Int: " << iNum << ", Float: " << fNum << ", Double: " << d5Num << endl;
    
    return 0;
}