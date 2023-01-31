// 10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Suma = 0, Factorial = 1;

    cout << "Ingrese la cantidad de factoriales: "; cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int x = 1; x <= i; x++) {
            Factorial *= x;
        }
        Suma += Factorial;
        Factorial = 1;
    }

    cout << "\nEl resultado es: " << Suma << endl;

    return 0;
}
