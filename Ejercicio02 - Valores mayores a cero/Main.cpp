// 2. Realice un programa que lea de la entrada est�ndar n�meros hasta que se 
//    introduzca un cero. En ese momento, el programa debe terminar y mostrar en
//    la salida est�ndar el n�mero de valores mayores que cero le�dos.

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{}, NP{};

    std::cout << "Ingrese un n�mero: "; std::cin >> N;
    while (N != 0) 
    {
        if (N > 0)
        {
            NP++;
        }
        std::cout << "Ingrese otro n�mero o '0' para finalizar el proceso: "; 
        std::cin >> N;
    }

    std::cout << "\nCantidad de n�meros positivos le�dos: " << NP << "\n";
    return 0;
}