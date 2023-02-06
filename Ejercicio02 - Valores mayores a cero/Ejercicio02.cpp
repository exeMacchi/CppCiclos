// 2. Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento,
//    el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, NP = 0;

    cout << "Ingrese un numero: "; cin >> N;

    while (N != 0) {
        if (N > 0) {
            NP++;
        }
        cout << "Ingrese otro numero (presione '0' para finalizar el proceso): "; cin >> N;
    }

    cout << "\nCantidad de numeros positivos leidos: " << NP << endl;
    return 0;
}
