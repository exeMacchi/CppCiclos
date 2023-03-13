/* 
    15. Realice un programa que solicite al usuario que piense un n�mero entero 
        entre el 1 y el 100. El programa debe generar un numero aleatorio en ese 
        mismo rango [1-100], e indicarle al usuario si el numero que d�gito es 
        menor o mayor al numero aleatorio, as� hasta que lo adivine. 
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

    std::cout << "Ingrese un n�mero: "; std::cin >> Num;
    Contador++;

    std::srand(std::time(NULL));
    num_Aleatorio = 1 + rand() % (100);

    while (Num != num_Aleatorio) 
    {
        if (Num > num_Aleatorio) 
        {
            std::cout << "Ingrese un n�mero menor: "; std::cin >> Num;
            Contador++;
        }
        else 
        {
            std::cout << "Ingrese un n�mero mayor: "; std::cin >> Num;
            Contador++;
        }
    }

    std::cout << "\n--------------------------------------------------" << "\n";
    std::cout << "Felicidades! Logr� adivinar el n�mero " << num_Aleatorio <<"!" 
              << "\n";
    std::cout << "Cantidad de intentos: " << Contador;
    std::cout << "\n--------------------------------------------------" << "\n";
    return 0;
}
