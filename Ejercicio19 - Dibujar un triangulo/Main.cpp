#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");

	int longitud{};
	char simbolo{};

	std::cout << "Ingrese la longitud del tri�ngulo: "; std::cin >> longitud;
	std::cout << "Ingrese el s�mbolo para dibujar el tri�ngulo: "; 
	std::cin >> simbolo;
	
	std::cout << "\n";
	for (int i{ 1 }; i <= longitud; i++)
	{
		for (int j{ 0 }; j < i; j++)
		{
			std::cout << std::setw(2) << simbolo;
		}
		std::cout << "\n";
	}

	return 0;
}