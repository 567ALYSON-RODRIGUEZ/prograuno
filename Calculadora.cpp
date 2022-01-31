#include <iostream>
using namespace std;

int main()
{
    int Valor1, Valor2, resultado;
    cout << "Introduce el primer valor que deseas sumar:";
    cin >> Valor1;
    cout << endl << "Introduce el segundo valor que deseas sumar:";
    cin >> Valor2;
    resultado = Valor1 + Valor2;
    cout << endl << "La suma de los valores es:" << resultado << endl;

    return 0;
}
