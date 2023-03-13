#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "es_ES");
	
	int numeroFinal{};

	std::cout << "Escriba un número entero final: "; std::cin >> numeroFinal;

	for (int contador{ 1 }; contador <= numeroFinal; contador++)
	{
		if (contador < 10)
		{
			std::cout << "0";
		}
		
		std::cout << contador << " ";
		
		if (contador % 10 == 0)
		{
			std::cout << "\n";
		}
	}
	return 0;
}