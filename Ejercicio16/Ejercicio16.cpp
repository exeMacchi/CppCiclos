// 16. Realice un programa que calcule la descomposición en factores primos de un número entero. 
//     Por ejemplo: 20 = 2 * 2 * 5.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero: "; cin >> N;
    cout << "\n" << N << " = ";

    for (int i = 2; N > 1; i++) {
        while (N % i == 0) {
            cout << i << " * ";
            N /= i;
        }
    }
    cout << "1" << endl;
    cout << endl;
    return 0;
}
