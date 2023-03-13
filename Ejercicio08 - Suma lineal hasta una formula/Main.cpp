// 8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>

int main()
{
    int Suma{ 0 }, N{};

    std::cout << "Ingrese la cantidad de elementos: "; std::cin >> N;

    N = (2 * N) - 1;

    for (int i{ 1 }; i <= N; i += 2)
    {
        Suma += i;
    }

    std::cout << "\nLa suma total: " << Suma << "\n";
    return 0;
}