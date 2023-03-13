// 9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>

int main()
{
    int N{}, Multiplicacion{ 1 };

    std::cout << "Ingrese la cantidad de elementos: "; std::cin >> N;

    for (int i{ 1 }; i <= N; i++)
    {
        Multiplicacion *= i;
    }

    std::cout << "\nEl resultado es: " << Multiplicacion << "\n";

    return 0;
}