/* 
    16. Realice un programa que calcule la descomposici�n en factores primos de 
        un n�mero entero. Por ejemplo: 20 = 2 * 2 * 5.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{};

    std::cout << "Ingrese un n�mero: "; std::cin >> N;

    std::cout << "\n" << N << " = ";
    for (int i{ 2 }; N > 1; i++)
    {
        while (N % i == 0) 
        {
            std::cout << i;
            if (N != i)
            {
                std::cout << " * ";
            }
            N /= i;
        }
    }
    std::cout << "\n";
    return 0;
}