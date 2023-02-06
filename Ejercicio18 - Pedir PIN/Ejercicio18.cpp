#include <iostream>
#include <locale.h>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_ALL, "es_ES");

	const int PIN{ 2727 };
	int pinUsuario{}, cantidadIntentos{ 3 };
	bool acceso{ false };

	while (!acceso && cantidadIntentos > 0)
	{
		cout << "Ingrese el pin (" << cantidadIntentos << " intentos disponibles): "; 
		cin >> pinUsuario;

		if (pinUsuario != PIN)
		{
			cout << "\nError: el pin ingresado es incorrecto." << "\n";
			cantidadIntentos--;
		}
		else
		{
			acceso = true;
		}
	}

	if (acceso)
	{
		cout << "\nLe damos la bienvenida!" << "\n";
	}
	else
	{
		cout << "Cuenta bloqueada. Por favor, habla con la administración para resolver esta situación." << "\n";
	}


	return 0;
}