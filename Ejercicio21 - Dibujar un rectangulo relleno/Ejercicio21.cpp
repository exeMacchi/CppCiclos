#include <iostream>
#include <locale.h>
#include <iomanip>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "es_ES");

	int altura{}, anchura{};
	char simbolo;

	cout << "Ingrese la altura del rectángulo: "; cin >> altura;
	cout << "Ingrese la anchura del rectángulo: "; cin >> anchura;
	cout << "Ingrese un símbolo para dibujar el rectángulo: "; cin >> simbolo;
	cout << "\n";

	for (int i{ 0 }; i < altura; i++)
	{
		for (int j{ 0 }; j < anchura; j++)
		{
			cout << std::setw(2) << simbolo;
		}
		cout << "\n";
	}

	return 0;
}