// 14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
//        a) Alumnos que aprobaron todos los exámenes.
//        b) Alumnos que aprobaron al menos un examen.
//        c) Alumnos que aprobaron únicamente el último examen.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float N1, N2, N3;
    int todosExamenes = 0, unExamen = 0, ultimoExamen = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Ingrese las notas del alumno " << i << ":" << endl;
        cout << "Examen 1: "; cin >> N1;
        cout << "Examen 2: "; cin >> N2;
        cout << "Examen 3: "; cin >> N3;
        cout << endl;

        if (N1 >= 7 && N2 >= 7 && N3 >= 7) {
            todosExamenes++;
        }
        if (N1 >= 7 || N2 >= 7 || N3 >= 7) {
            unExamen++;
        }
        if (N1 < 7 && N2 < 7 && N3 >= 7) {
            ultimoExamen++;
        }
    }

    cout << "------------------------------------------------------" << endl;
    cout << "Estudiantes que aprobaron todos los examenes: " << todosExamenes << endl;
    cout << "Estudiantes que aprobaron al menos un examen: " << unExamen << endl;
    cout << "Estudiantes que aprobaron solo el ultimo examen: " << ultimoExamen << endl;
    cout << "------------------------------------------------------" << endl;
    return 0;
}
