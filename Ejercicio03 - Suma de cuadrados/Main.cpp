// 3. Realice un programa que calcule y muestre en la salida estándar la suma 
//    de los cuadrados de los 10 primeros enteros mayores que cero.

#include <iostream>

int main()
{
    int Suma{};

    for (int i{ 1 }; i <= 10; i++)
    {
        Suma += pow(i, 2);
    }

    std::cout << "La suma total es: " << Suma << "\n";
    return 0;
}