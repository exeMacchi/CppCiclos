// 10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! 
//     (suma de factoriales).

#include <iostream>

int main()
{
    int N{}, Suma{ 0 }, Factorial{ 1 };

    std::cout << "Ingrese la cantidad de factoriales: "; std::cin >> N;

    // Número factorial
    for (int i{ 1 }; i <= N; i++)
    {
        // Factorial
        for (int x{ 1 }; x <= i; x++) 
        {
            Factorial *= x;
        }
        Suma += Factorial;
        Factorial = 1;
    }

    std::cout << "\nEl resultado es: " << Suma << "\n";

    return 0;
}