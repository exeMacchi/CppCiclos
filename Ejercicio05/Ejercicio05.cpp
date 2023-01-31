// 5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca
//    el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Suma = 0;

    cout << "Ingrese un numero: "; cin >> N;

    while (N != 0 && (N > 30 || N < 20)) {
        if (N > 0) {
            Suma += N;
        }
        cout << "Ingrese otro numero (presione '0' para finalizar el proceso): "; cin >> N;
    }

    // Con este codigo tambien cuenta los numeros entre 20 a 30.
    //    do {
    //        cout << "Enter a number: "; cin >> N;
    //        if(N > 0){
    //            Suma += N;
    //        }
    //    } while ((N < 20 || N > 30) && N != 0);

    cout << "\nLa suma total: " << Suma << endl;
    return 0;
}
