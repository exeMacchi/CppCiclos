// 7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>

int main()
{
    int Suma{ 0 }, N{};

    std::cout << "Ingrese la cantidad de elementos: "; std::cin >> N;

    for (int i{ 1 }; i <= N; i++)
    {
        Suma += i;
    }

    std::cout << "\nEl resultado es: " << Suma << "\n";
    return 0;
}