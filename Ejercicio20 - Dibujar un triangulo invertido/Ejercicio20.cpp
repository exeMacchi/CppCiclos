#include <iostream>
#include <iomanip>
#include <locale.h>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "es_ES");

	int longitud{};
	char simbolo;

	cout << "Ingrese la longitud del tri�ngulo: "; cin >> longitud;
	cout << "Ingrese el s�mbolo para dibujar el tri�ngulo: "; cin >> simbolo;
	cout << "\n";

	for (int i{ longitud }; i >= 1; i--)
	{
		for (int j{ 0 }; j < i; j++)
		{
			cout << std::setw(2) << simbolo;
		}
		cout << "\n";
	}

	
	/* Prueba uni�n tri�ngulo normal e invertido.

		for (int x{ 0 }; x < 10; x++)
		{
			for (int i{ 1 }; i <= longitud; i++)
			{
				for (int j{ 0 }; j < i; j++)
				{
					cout << std::setw(2) << simbolo;
				}
				cout << "\n";
			}

			for (int i{ longitud }; i >= 1; i--)
			{
				for (int j{ 0 }; j < i; j++)
				{
					cout << std::setw(2) << simbolo;
				}
				cout << "\n";
			}
		}
	*/
	

	return 0;
}