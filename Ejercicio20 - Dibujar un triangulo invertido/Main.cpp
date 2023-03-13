#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");

	int longitud{};
	char simbolo{};

	do
	{
		std::cout << "Ingrese la longitud del tri�ngulo: "; std::cin >> longitud;
		if (longitud <= 0)
		{
			std::cout << "La longitud no puede ser menor o igual a cero.\n";
		}
	} while (longitud <= 0);

	std::cout << "Ingrese el s�mbolo para dibujar el tri�ngulo: "; 
	std::cin >> simbolo;
	std::cout << "\n";

	for (int i{ longitud }; i >= 1; i--)
	{
		for (int j{ 0 }; j < i; j++)
		{
			std::cout << std::setw(2) << simbolo;
		}
		std::cout << "\n";
	}
	
	// Prueba uni�n tri�ngulos rect�ngulos normal e invertido. 
	#if 0
		// Esto se repite diez veces
		for (int x{ 0 }; x < 10; x++)
		{
			for (int i{ 1 }; i <= longitud; i++)
			{
				for (int j{ 0 }; j < i; j++)
				{
					std::cout << std::setw(2) << simbolo;
				}
				std::cout << "\n";
			}

			for (int i{ longitud }; i >= 1; i--)
			{
				for (int j{ 0 }; j < i; j++)
				{
					std::cout << std::setw(2) << simbolo;
				}
				std::cout << "\n";
			}
		}
	#endif

	return 0;
}