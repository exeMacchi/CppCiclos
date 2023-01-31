// 13. Hacer un programa que realice la serie fibonacci -- 1 1 2 3 5 8 13...n

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int R1 = 0, R2 = 1, R3 = 0, N;

    cout << "Ingrese la cantidad total de numeros de Fibonacci: "; cin >> N;

    for (int i = 0; i < N; i++) {
        cout << R1 << " ";

        R3 = R1 + R2;
        R1 = R2;
        R2 = R3;
    }

    return 0;
}
