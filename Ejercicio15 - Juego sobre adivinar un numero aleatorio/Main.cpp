/* 
    15. Realice un programa que solicite al usuario que piense un número entero 
        entre el 1 y el 100. El programa debe generar un numero aleatorio en ese 
        mismo rango [1-100], e indicarle al usuario si el numero que dígito es 
        menor o mayor al numero aleatorio, así hasta que lo adivine. 
        Por ultimo, mostrarle el numero de intentos que le llevo.
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int Num{}, num_Aleatorio{}, Contador{ 0 };

    std::cout << "Ingrese un número: "; std::cin >> Num;
    Contador++;

    std::srand(std::time(NULL));
    num_Aleatorio = 1 + rand() % (100);

    while (Num != num_Aleatorio) 
    {
        if (Num > num_Aleatorio) 
        {
            std::cout << "Ingrese un número menor: "; std::cin >> Num;
            Contador++;
        }
        else 
        {
            std::cout << "Ingrese un número mayor: "; std::cin >> Num;
            Contador++;
        }
    }

    std::cout << "\n--------------------------------------------------" << "\n";
    std::cout << "Felicidades! Logró adivinar el número " << num_Aleatorio <<"!" 
              << "\n";
    std::cout << "Cantidad de intentos: " << Contador;
    std::cout << "\n--------------------------------------------------" << "\n";
    return 0;
}
