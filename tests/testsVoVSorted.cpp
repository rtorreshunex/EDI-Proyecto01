#include "testsVoVSorted.h"

void testsPushVoVSorted() {
    cout << "- Inicio Pruebas Push VoVSorted -" << endl;
    VoVSorted<Paciente> *v = new VoVSorted<Paciente>;
    Paciente *p;
    Paciente *p1;
    Paciente *p2;
    for(int i = MAX - 1; i >= 0; i--) {
        p = new Paciente("Paciente", to_string(i + 1), to_string(i) + "0000000A", noDefinido, i);
        v->push(p);
    }
    if(v->isEmpty())
        cerr << "Error en push()" << endl;
    if(!v->isFull())
        cerr << "Error en push()" << endl;
    for(int i = 0; i < 200; i++) {
        v->getElement(i, p1);
        v->getElement(i + 1, p2);
        if(*p1 > *p2)
            cerr << "Error en la ordenación de push()" << endl;
    }
    cout << "- Fin Pruebas Push VoVSorted -" << endl;

    delete p;
    delete v;
}
void testsPopVoVSorted() {
    cout << "- Inicio Pruebas Pop VoVSorted -" << endl;
    VoVSorted<Paciente> *v = new VoVSorted<Paciente>;
    Paciente *p;
    for(int i = 0; i < 5; i++) {
        p = new Paciente("Paciente", to_string(i + 1), to_string(i) + "0000000A", noDefinido, i);
        v->push(p);
    }
    for(int i = 0; i < 5; i++)
        v->pop(0);
    if(!v->isEmpty())
        cerr << "Error en pop()" << endl;
    cout << "- Fin Pruebas Pop VoVSorted -" << endl;

    delete p;
    delete v;
}
void testsFindElementByDataTypeVoVSorted() {
    cout << "- Inicio Pruebas FindElementByDataType VoVSorted -" << endl;
    VoVSorted<Paciente> *v = new VoVSorted<Paciente>;
    Paciente *p;
    Paciente *p1;
    Paciente *p2;
    for(int i = 0; i < 5; i++) {
        p = new Paciente("Paciente", to_string(i + 1), to_string(i) + "0000000A", noDefinido, i);
        v->push(p);
    }
    v->getElement(3, p1);
    p2 = new Paciente;
    p2->setDni(p1->getDni());
    v->findElementByDataType(p2);
    if(!(*p1 == *p2))
        cerr << "Error en findElementByDataType()" << endl;
    cout << "- Fin Pruebas FindElementByDataType VoVSorted -" << endl;

    delete p2;
    delete p;
    delete v;
}

void testsVoVSorted() {
    cout << "--- INICIO Pruebas VoVSorted ---" << endl;
    testsPushVoVSorted();
    testsPopVoVSorted();
    testsFindElementByDataTypeVoVSorted();
    cout << "--- FIN Pruebas VoVSorted ---" << endl;
}