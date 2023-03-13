// 12. Hacer un programa que calcule el resultado de la siguiente expresion: 
//     1-2+3-4+5-6...n

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{}, paresNegativos{ 0 }, imparesPositivos{ 0 };

    do
    {
		std::cout << "Ingrese la cantidad de números: "; std::cin >> N;
        if (N <= 0)
        {
            std::cout << "La cantidad no puede ser negativa o cero" << "\n";
        }
    } while (N <= 0);

    for (int i{ 1 }; i <= N; i++)
    {
        // Si el número es par positivo, invierto su signo y lo acumulo
        if (i % 2 == 0) 
        {
            int Negativos{ i * -1 };
            paresNegativos += Negativos;
        }
        // Si el número es impar solo lo acumulo
        else 
        {
            imparesPositivos += i;
        }
    }

    // El resultado va ser la suma de los pares negativos + los impares positivos
    std::cout << "\nLa suma total es: " << paresNegativos + imparesPositivos 
              << "\n";
    return 0;
}