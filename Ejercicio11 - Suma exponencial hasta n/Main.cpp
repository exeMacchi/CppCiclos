// 11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>

int main()
{
    int X{ 2 }, Y{}, Resultado{ X }, Suma{ 0 }; 

    std::cout << "Ingrese la cantidad de exponentes: "; std::cin >> Y;

    if (Y < 0) 
    {
        std::cout << "\nError: la cantidad de exponentes no puede ser menor que 0." 
                  << "\n";
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
        // Ejercicio sin funcion pow()
        for (int i{ 1 }; i <= Y; i++)
        {
            for (int x{ 1 }; x < i; x++) 
            {
                Resultado *= X;
            }
            Suma += Resultado;
            Resultado = X;
        }

        /*
            Ejercicio con funcion pow()
               int Elevacion{ 0 };
               for (int i{ 1 }; i <= Y; i++)
               {
                  Elevacion = pow(2, i);
                  Suma += Elevacion;
               }
        */

        std::cout << "\nEl resultado es: " << Suma << "\n";
    }

    return 0;
}