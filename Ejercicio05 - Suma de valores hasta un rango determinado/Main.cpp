/* 
    5. Escriba un programa que lea valores enteros hasta que se introduzca un 
       valor en el rango [20-30] o se introduzca el valor 0. 
       El programa debe entregar la suma de los valores mayores a 0 introducidos.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    int N{}, Suma{ 0 };

    std::cout << "Ingrese un número: "; std::cin >> N;

    while (N != 0 && (N > 30 || N < 20)) 
    {
        if (N > 0) 
        {
            Suma += N;
        }
        std::cout << "Ingrese otro número o '0' para finalizar el proceso: ";
        std::cin >> N;
    }

    /* 
       Este código también cuenta los números entre 20 a 30.
        do 
        {
            std::cout << "Ingrese un número: "; std::cin >> N;
            if(N > 0)
            {
                Suma += N;
            }
        } while ((N < 20 || N > 30) && N != 0);
    */

    std::cout << "\nLa suma total: " << Suma << "\n";
    return 0;
}