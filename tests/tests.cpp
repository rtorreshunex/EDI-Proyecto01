#include "tests.h"

void tests() {
    cout << "--- INICIO PRUEBAS ---" << endl;
    if(initialTests()){
        testsPaciente();
        testsMedico();
        testsConsulta();
        testsVoVSorted();
        cout << "--- FIN PRUEBAS ---" << endl;
    }
}