// 13. Hacer un programa que realice la serie fibonacci - 1 1 2 3 5 8 13...n

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int R1{ 0 }, R2{ 1 }, R3{ 0 }, N{};

    std::cout << "Ingrese la cantidad total de números de Fibonacci: "; 
    std::cin >> N;

    for (int i{ 0 }; i < N; i++)
    {
        std::cout << R1 << " ";

        R3 = R1 + R2;
        R1 = R2;
        R2 = R3;
    }

    return 0;
}