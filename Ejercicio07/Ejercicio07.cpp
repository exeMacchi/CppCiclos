// 7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Suma = 0, N;

    cout << "Ingrese la cantidad de elementos: "; cin >> N;

    for (int i = 0; i <= N; i++) {
        Suma += i;
    }

    cout << "\nEl resultado es: " << Suma << endl;
    return 0;
}
