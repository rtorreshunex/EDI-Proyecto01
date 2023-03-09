#include "testsPaciente.h"

void testsMostrarPaciente() {

}

void testsOperatorsPaciente() {

}

void testsPaciente(){
    cout << "--- INICIO Pruebas Paciente ---" << endl;
    // Caso 1
    Paciente p1;
    p1.setName("Maria");
    p1.setLastname("Perez Perez");
    if(p1.getName() != "Maria")
        cout << "Error en el set/get de nombre" << endl;

    // Caso 2
    Paciente p2("Juan", "Perez Perez", "12345678A", Masculino, 67);
    p1.mostrar();
    p2.mostrar();
    cout << "--- FIN Pruebas Paciente ---" << endl;
}