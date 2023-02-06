// 9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Multiplicacion = 1;

    cout << "Ingrese la cantidad de elementos: "; cin >> N;

    for (int i = 1; i <= N; i++) {
        Multiplicacion *= i;
    }

    cout << "\nEl resultado es: " << Multiplicacion << endl;

    return 0;
}
