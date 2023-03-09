#include "testsConsulta.h"

void testsMostrarConsulta() {
    cout << "- Inicio Pruebas Mostrar Consulta -" << endl;
    Paciente *p = new Paciente("Paciente", "2", "00000000A", Femenino, 40);
    Medico *m = new Medico("Medico", "2", "Huesos");
    FechaYHora fechaYHora1(10, 12, 2024, 15, 56);
    Consulta c1(p, m, Urgente, fechaYHora1);
    c1.mostrar();
    FechaYHora fechaYHora2(11, 1, 2025, 15, 56);
    Consulta c2(p, m, Pendiente, fechaYHora2);
    c2.mostrar();
    FechaYHora fechaYHora3(12, 2, 2026, 15, 56);
    Consulta c3(p, m, Externa, fechaYHora3);
    c3.mostrar();
    cout << "- Fin Pruebas Mostrar Consulta -" << endl;

    delete p;
    delete m;
}

void testsOperatorsConsulta() {
    cout << "- Inicio Pruebas Operadores Consulta -" << endl;
    Paciente *p = new Paciente("Paciente", "2", "00000000A", Femenino, 40);
    Medico *m = new Medico("Medico", "2", "Huesos");
    FechaYHora fechaYHora1(10, 12, 2024, 15, 56);
    Consulta c1(p, m, Urgente, fechaYHora1);
    FechaYHora fechaYHora2(11, 1, 2025, 15, 56);
    Consulta c2(p, m, Pendiente, fechaYHora2);
    Consulta c3(p, m, Externa, fechaYHora1);
    if(!(c1 < c2))
        cerr << "Error en el operador <" << endl;
    if(!(c2 > c3))
        cerr << "Error en el operador >" << endl;
    if(!(c1 == c3))
        cerr << "Error en el operador ==" << endl;
    cout << "- Fin Pruebas Operadores Consulta -" << endl;

    delete p;
    delete m;
}

void testsConsulta() {
    cout << "--- INICIO Pruebas Consulta ---" << endl;
    testsMostrarConsulta();
    testsOperatorsConsulta();
    cout << "--- FIN Pruebas Consulta ---" << endl;
}