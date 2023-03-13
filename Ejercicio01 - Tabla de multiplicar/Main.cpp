// 1. Realice un programa que solicite de la entrada estándar un entero del 1 al
//    10 y muestre en la salida estándar su tabla de multiplicar.

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{};
    std::cout << "Ingrese un número del 1 al 10: "; std::cin >> N;
    if (N > 10 || N < 1) 
    {
        std::cout << "\nError: número fuera de rango." << "\n";
        return 0;
    }

    std::cout << "\nLa tabla de multiplicar del número " << N <<":" << "\n";
    for (int i{ 1 }; i <= 10; i++)
    {
        std::cout << N << " * " << i << " = " << N * i << "\n";
    }

    return 0;
}