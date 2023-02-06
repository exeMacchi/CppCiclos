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

	cout << "Ingrese la longitud del triángulo: "; cin >> longitud;
	cout << "Ingrese el símbolo para dibujar el triángulo: "; cin >> simbolo;
	cout << "\n";
	
	for (int i{ 1 }; i <= longitud; i++)
	{
		for (int j{ 0 }; j < i; j++)
		{
			cout << std::setw(2) << simbolo;
		}
		cout << "\n";
	}

	return 0;
}