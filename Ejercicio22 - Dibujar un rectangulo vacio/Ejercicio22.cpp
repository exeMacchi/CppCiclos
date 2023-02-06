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

	cout << "Ingrese la altura del rect�ngulo: "; cin >> altura;
	cout << "Ingrese la anchura del rect�ngulo: "; cin >> anchura;
	cout << "Ingrese un s�mbolo para dibujar el rect�ngulo: "; cin >> simbolo;
	cout << "\n";

	for (int i{ 0 }; i < altura; i++)
	{
		for (int j{ 0 }; j < anchura; j++)
		{
			if (i == 0 || i == altura - 1)
			{
				cout << std::setw(2) << simbolo;
			}
			else 
			{
				if (j == 0 || j == anchura - 1)
				{
					cout << std::setw(2) << simbolo;
				}
				else
				{
					cout << std::setw(2) << " ";
				}
			}
		}
		cout << "\n";
	}

	return 0;
}