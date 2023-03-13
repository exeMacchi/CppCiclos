/* 
    4. Escriba un programa que tome cada 4 horas la temperatura exterior, 
       ley�ndola durante un per�odo de 24 horas. Es decir, debe leer 6 
       temperaturas. 
	   Calcule la temperatura media del d�a, la temperatura m�s alta y la 
       m�s baja.
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
    std::cout << "\nTemperatura media del d�a: " << temp_Promedio;
    std::cout << "\nTemperatura m�xima: " << temp_Max;
    std::cout << "\nTemperatura m�nima: " << temp_Min << "\n";
    return 0;
}