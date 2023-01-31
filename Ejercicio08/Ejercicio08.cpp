// 8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Suma = 0, N;

    cout << "Ingrese la cantidad de elementos: "; cin >> N;

    N = (2 * N) - 1;

    for (int i = 1; i <= N; i += 2) {
        Suma += i;
    }

    cout << "\nLa suma total: " << Suma << endl;
    return 0;
}
