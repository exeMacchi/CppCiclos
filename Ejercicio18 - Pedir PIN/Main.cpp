#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");

	constexpr int PIN{ 2727 };
	int pinUsuario{}, cantidadIntentos{ 3 };
	bool acceso{ false };

	while (!acceso && cantidadIntentos > 0)
	{
		std::cout << "Ingrese el pin (" << cantidadIntentos 
			      << " intentos disponibles): "; 
		std::cin >> pinUsuario;

		if (pinUsuario != PIN)
		{
			std::cout << "\nError: el pin ingresado es incorrecto." << "\n";
			cantidadIntentos--;
		}
		else
		{
			acceso = true;
		}
	}

	if (acceso)
	{
		std::cout << "\nLe damos la bienvenida!" << "\n";
	}
	else
	{
		std::cout << "Cuenta bloqueada. Por favor, habla con la administración "
				  << "para resolver esta situación." << "\n";
	}

	return 0;
}