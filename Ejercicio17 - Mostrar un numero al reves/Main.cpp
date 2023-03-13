// 17. Pedir un n�mero por pantalla y mostrarlo al rev�s.

#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");

	int numero{}, alReves{ 0 };

	std::cout << "Ingrese un n�mero: "; std::cin >> numero;

	while (numero != 0)
	{
		alReves *= 10;
		alReves += numero % 10;
		numero /= 10;
	}

	std::cout << "El n�mero al rev�s: " << alReves << "\n";

	return 0;
}