#include <iostream>
#include <locale>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "es_ES");

	int altura{}, anchura{};
	char simbolo{};

	std::cout << "Ingrese la altura del rectángulo: "; std::cin >> altura;
	std::cout << "Ingrese la anchura del rectángulo: "; std::cin >> anchura;
	std::cout << "Ingrese un símbolo para dibujar el rectángulo: "; 
	std::cin >> simbolo;
	std::cout << "\n";

	for (int i{ 0 }; i < altura; i++)
	{
		for (int j{ 0 }; j < anchura; j++)
		{
			std::cout << std::setw(2) << simbolo;
		}
		std::cout << "\n";
	}

	return 0;
}