// 17. Pedir un número por pantalla y mostrarlo al revés.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "es_ES");
	int numero, alReves{ 0 };

	cout << "Ingrese un número: "; cin >> numero;

	while (numero != 0)
	{
		alReves *= 10;
		alReves += numero % 10;
		numero /= 10;
	}

	cout << "El número al revés: " << alReves << "\n";

	return 0;
}
