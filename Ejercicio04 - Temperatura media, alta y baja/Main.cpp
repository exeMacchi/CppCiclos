/* 
    4. Escriba un programa que tome cada 4 horas la temperatura exterior, 
       leyéndola durante un período de 24 horas. Es decir, debe leer 6 
       temperaturas. 
	   Calcule la temperatura media del día, la temperatura más alta y la 
       más baja.
*/    

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    float temperatura{}, temp_Max{}, temp_Min{}, temp_Total{}, temp_Promedio{};
    int Horas{ 0 };

    for (int i{ 0 }; i < 6; i++)
    {
        std::cout << "Ingrese la temperatuara actual (" << Horas << " hs): "; 
        std::cin >> temperatura;

        Horas += 4;

        temp_Total += temperatura;

        if (i == 0) 
        {
            temp_Max = temperatura;
            temp_Min = temperatura;
        }

        if (temperatura > temp_Max) 
        {
            temp_Max = temperatura;
        }

        if (temperatura < temp_Min) 
        {
            temp_Min = temperatura;
        }
    }

    temp_Promedio = temp_Total / 6;

    std::cout.precision(2);
    std::cout << "\nTemperatura media del día: " << temp_Promedio;
    std::cout << "\nTemperatura máxima: " << temp_Max;
    std::cout << "\nTemperatura mínima: " << temp_Min << "\n";
    return 0;
}