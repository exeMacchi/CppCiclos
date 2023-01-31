// 11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int X = 2, Y, Resultado = X, Suma = 0, Elevacion = 0;

    cout << "Ingrese la cantidad de exponentes: "; cin >> Y;

    if (Y < 0) {
        cout << "\nError: la cantidad de exponentes no puede ser menor que 0." << endl;
    }

    if (Y == 0) {
        X = 1;
        cout << "\nEl resultado es: " << X << endl;
    }
    else if (Y == 1) {
        cout << "\nEl resultado es: " << X << endl;
    }
    else {

        //Ejercicio sin funcion pow()

        for (int i = 1; i <= Y; i++) {
            for (int x = 1; x < i; x++) {
                Resultado *= X;
            }
            Suma += Resultado;
            Resultado = X;
        }

        /*Ejercicio con funcion pow()
        * 
        for (int i = 1; i <= Y; i++){
            Elevacion = pow(2, i);
            Suma += Elevacion;
        }
        */

        cout << "\nEl resultado es: " << Suma << endl;
    }

    return 0;
}
