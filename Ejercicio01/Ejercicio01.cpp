// 1. Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar
//    su tabla de multiplicar.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero del 1 al 10: "; cin >> N;
    if (N > 10 || N < 1) {
        cout << "\nError: numero fuera de rango." << endl;
        return 0;
    }
    cout << "\nLa tabla de multiplicar del numero " << N <<":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }
    return 0;
}
