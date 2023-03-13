// 17. Pedir un número por pantalla y mostrarlo al revés.

#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");

	int numero{}, alReves{ 0 };

	std::cout << "Ingrese un número: "; std::cin >> numero;

	while (numero != 0)
	{
		alReves *= 10;
		alReves += numero % 10;
		numero /= 10;
	}

	std::cout << "El número al revés: " << alReves << "\n";

	return 0;
}