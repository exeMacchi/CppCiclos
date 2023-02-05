// 17. Pedir un n�mero por pantalla y mostrarlo dado al rev�s.

#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "es_ES");
	int numero, alReves{ 0 };

	cout << "Ingrese un n�mero: "; cin >> numero;

	while (numero != 0)
	{
		alReves *= 10;
		alReves += numero % 10;
		numero /= 10;
	}

	cout << "El n�mero al rev�s: " << alReves << "\n";

	return 0;
}