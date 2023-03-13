// 2. Realice un programa que lea de la entrada estándar números hasta que se 
//    introduzca un cero. En ese momento, el programa debe terminar y mostrar en
//    la salida estándar el número de valores mayores que cero leídos.

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{}, NP{};

    std::cout << "Ingrese un número: "; std::cin >> N;
    while (N != 0) 
    {
        if (N > 0)
        {
            NP++;
        }
        std::cout << "Ingrese otro número o '0' para finalizar el proceso: "; 
        std::cin >> N;
    }

    std::cout << "\nCantidad de números positivos leídos: " << NP << "\n";
    return 0;
}