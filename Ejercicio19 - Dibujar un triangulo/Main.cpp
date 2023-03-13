#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");

	int longitud{};
	char simbolo{};

	std::cout << "Ingrese la longitud del triángulo: "; std::cin >> longitud;
	std::cout << "Ingrese el símbolo para dibujar el triángulo: "; 
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