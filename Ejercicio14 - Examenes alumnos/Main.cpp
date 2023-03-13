/* 
    14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
        determinar el número de:
            a) Alumnos que aprobaron todos los exámenes.
			b) Alumnos que aprobaron al menos un examen.
			c) Alumnos que aprobaron únicamente el último examen.
*/

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_ES");

    float N1{}, N2{}, N3{};
    int todosExamenes{ 0 }, unExamen{ 0 }, ultimoExamen{ 0 };

    for (int i{ 1 }; i <= 5; i++)
    {
        std::cout << "Ingrese las notas del alumno " << i << ":" << "\n";
        std::cout << "Examen 1: "; std::cin >> N1;
        std::cout << "Examen 2: "; std::cin >> N2;
        std::cout << "Examen 3: "; std::cin >> N3;
        std::cout << "\n";

        if (N1 >= 7 && N2 >= 7 && N3 >= 7) 
        {
            todosExamenes++;
        }
        if (N1 >= 7 || N2 >= 7 || N3 >= 7) 
        {
            unExamen++;
        }
        if (N1 < 7 && N2 < 7 && N3 >= 7) 
        {
            ultimoExamen++;
        }
    }

    std::cout << "----------------------------------------------------" << "\n";
    std::cout << "Estudiantes que aprobaron todos los examenes: " 
              << todosExamenes << "\n";
    std::cout << "Estudiantes que aprobaron al menos un examen: " 
              << unExamen << "\n";
    std::cout << "Estudiantes que aprobaron solo el último examen: " 
              << ultimoExamen << "\n";
    std::cout << "----------------------------------------------------" << "\n";
    return 0;
}