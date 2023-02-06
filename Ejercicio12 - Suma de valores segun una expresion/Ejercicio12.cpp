// 12. Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Pares = 0, Impares = 0, Suma = 0, Negativos = 0;

    cout << "Ingrese la cantidad de numeros: "; cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            Negativos = i * -1;
            Pares += Negativos;
        }
        else {
            Impares += i;
        }
    }

    Suma = Pares + Impares;

    cout << "\nLa suma total es: " << Suma << endl;
    return 0;
}
