// 6. Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int X, Y, Resultado;

    cout << "Ingrese el valor: "; cin >> X;
    if (X < 1) {
        cout << "\nError: el valor no puede ser 0 o menor que 0." << endl;
        return 0;
    }
    else {
        Resultado = X;
    }
    cout << "Ingrese el exponente: "; cin >> Y;
    if (Y < 0) {
        cout << "\nError: el exponente no puede ser menor que 0." << endl;
        return 0;
    }

    if (Y == 0) {
        X = 1;
        cout << "\nEl resultado es: " << X << endl;
    }
    else if (Y == 1) {
        cout << "\nEl resultado es: " << X << endl;
    }
    else {
        for (int i = 0; i < (Y - 1); i++) {
            Resultado *= X;
        }
        cout << "\nEl resultado es: " << Resultado << endl;
    }

    return 0;
}
