// 15. Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. 
//     El programa debe generar un numero aleatorio en ese mismo rango[1-100], e indicarle al usuario si el numero
//     que dígito es menor o mayor al numero aleatorio, así hasta que lo adivine. Por ultimo, mostrarle el numero
//     de intentos que le llevo.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Num, num_Aleatorio, Contador = 0;

    cout << "Ingrese un numero: "; cin >> Num;
    Contador++;

    srand(time(NULL));
    num_Aleatorio = 1 + rand() % (100);

    while (Num != num_Aleatorio) {
        if (Num > num_Aleatorio) {
            cout << "Ingrese un numero menor: "; cin >> Num;
            Contador++;
        }
        else {
            cout << "Ingrese un numero mayor: "; cin >> Num;
            Contador++;
        }
    }

    cout << "\n---------------------------------------------" << endl;
    cout << "Felicidades! Logro adivinar el numero " << num_Aleatorio <<"!" << endl;
    cout << "Cantidad de intentos: " << Contador;
    cout << "\n---------------------------------------------" << endl;
    return 0;
}
