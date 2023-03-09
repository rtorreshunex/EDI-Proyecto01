#include "testsMedico.h"

void testsMostrarMedico() {
    cout << "- Inicio Pruebas Mostrar Medico -" << endl;
    Medico m1("Emilia", "Suárez Pérez", "Huesos");
    m1.mostrar();
    Medico m2("Juan", "Suárez Pérez", "Cabeza");
    m2.mostrar();
    Medico m3("Bon", "Hanssen", "Pies");
    m3.mostrar();
    cout << "- Fin Pruebas Mostrar Medico -" << endl;
}

void testsOperatorsMedico() {
    cout << "- Inicio Pruebas Operadores Medico -" << endl;
    Medico m1("Emilia", "Suárez Pérez", "Huesos");
    Medico m2("Juan", "Suárez Pérez", "Cabeza");
    Medico m3("Bon", "Hanssen", "Pies");
    if(!(m3 < m1))
        cerr << "Error en el operador <" << endl;
    if(!(m2 > m3))
        cerr << "Error en el operador >" << endl;
    if(!(m1 == m2))
        cerr << "Error en el operador ==" << endl;
    cout << "- Fin Pruebas Operadores Medico -" << endl;
}

void testsMedico() {
    cout << "--- INICIO Pruebas Medico ---" << endl;
    testsMostrarMedico();
    testsOperatorsMedico();
    cout << "--- FIN Pruebas Medico ---" << endl;
}