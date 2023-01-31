// 3. Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros
//    enteros mayores que cero.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int Suma = 0;

    for (int i = 1; i <= 10; i++) {
        Suma += pow(i, 2);
    }

    cout << "La suma total es: " << Suma << endl;
    return 0;
}
