/* 
    6. Escriba un programa que calcule x^y, donde tanto x como y son enteros 
       positivos, sin utilizar la función pow.
*/

#include <iostream>

int main()
{
    int X{}, Y{}, Resultado{ 0 };

    std::cout << "Ingrese la base: "; std::cin >> X;
    if (X < 1) 
    {
        std::cout << "\nError: la base no puede ser 0 o menor que 0." << "\n";
        return 0;
    }
    else 
    {
        Resultado = X;
    }

    std::cout << "Ingrese el exponente: "; std::cin >> Y;
    if (Y < 0) 
    {
        std::cout << "\nError: el exponente no puede ser menor que 0." << "\n";
        return 0;
    }

    if (Y == 0) 
    {
        X = 1;
        std::cout << "\nEl resultado es: " << X << "\n";
    }
    else if (Y == 1) 
    {
        std::cout << "\nEl resultado es: " << X << "\n";
    }
    else 
    {
        for (int i{ 0 }; i < (Y - 1); i++)
        {
            Resultado *= X;
        }
        std::cout << "\nEl resultado es: " << Resultado << "\n";
    }

    return 0;
}