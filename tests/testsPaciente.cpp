#include "testsPaciente.h"

void testsMostrarPaciente() {
    cout << "- Inicio Pruebas Mostrar Paciente -" << endl;
    Paciente p1("Emilia", "Suárez Pérez", "12345678A", Femenino, 67);
    p1.mostrar();
    Paciente p2("Juan", "Pérez Pérez", "12345678B", Masculino, 24);
    p2.mostrar();
    Paciente p3("Bon", "Hanssen", "12345678C", noDefinido, 36);
    p3.mostrar();
    cout << "- Fin Pruebas Mostrar Paciente -" << endl;
}

void testsOperatorsPaciente() {
    cout << "- Inicio Pruebas Operadores Paciente -" << endl;
    Paciente p1("Emilia", "Suárez Pérez", "12345678A", Femenino, 67);
    Paciente p2("Juan", "Pérez Pérez", "12345678B", Masculino, 24);
    Paciente p3("Bon", "Hanssen", "12345678A", noDefinido, 36);
    if(!(p1 < p2))
        cerr << "Error en el operador <" << endl;
    if(!(p2 > p3))
        cerr << "Error en el operador >" << endl;
    if(!(p1 == p3))
        cerr << "Error en el operador ==" << endl;
    cout << "- Fin Pruebas Operadores Paciente -" << endl;
}

void testsPaciente(){
    cout << "--- INICIO Pruebas Paciente ---" << endl;
    testsMostrarPaciente();
    testsOperatorsPaciente();
    cout << "--- FIN Pruebas Paciente ---" << endl;
}