// 4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas.
//    Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float Temperatura, temp_Max, temp_Min, temp_Total = 0, temp_Promedio;
    int Horas = 0;

    for (int i = 0; i < 6; i++) {
        cout << "Ingrese la temperatuara actual (" << Horas << " hs): "; cin >> Temperatura;

        Horas += 4;

        temp_Total += Temperatura;

        if (i == 0) {
            temp_Max = Temperatura;
            temp_Min = Temperatura;
        }

        if (Temperatura > temp_Max) {
            temp_Max = Temperatura;
        }

        if (Temperatura < temp_Min) {
            temp_Min = Temperatura;
        }
    }
    temp_Promedio = temp_Total / 6;

    cout.precision(2);
    cout << "\nTemperatura media del dia: " << temp_Promedio;
    cout << "\nTemperatura maxima: " << temp_Max;
    cout << "\nTemperatura minima: " << temp_Min << endl;
    return 0;
}
