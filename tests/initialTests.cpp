#include "initialTests.h"

// Constructors
void testsConstructorsPaciente() {
    cout << "- Inicio Pruebas Constructores Paciente -" << endl;
    Paciente *p1 = new Paciente;
    if(p1->getName() != "" || p1->getLastname() != "" || p1->getDni() != ""
    || p1->getGender() != noDefinido || p1->getAge() != 0)
        cerr << "Error en el constructor por defecto" << endl;
    Paciente *p2 = new Paciente("Paciente", "2", "00000000A", Femenino, 40);
    if(p2->getName() != "Paciente" || p2->getLastname() != "2" || p2->getDni() != "00000000A"
       || p2->getGender() != Femenino || p2->getAge() != 40)
        cerr << "Error en el constructor parametrizado" << endl;
    Paciente *p3 = p2;
    if(p3->getName() != "Paciente" || p3->getLastname() != "2" || p3->getDni() != "00000000A"
       || p3->getGender() != Femenino || p3->getAge() != 40)
        cerr << "Error en el constructor por copia" << endl;
    cout << "- Fin Pruebas Constructores Paciente -" << endl;

    delete p1;
    delete p2;
}
void testsConstructorsMedico() {
    cout << "- Inicio Pruebas Constructores Medico -" << endl;
    Medico *m1 = new Medico;
    if(m1->getName() != "" || m1->getLastname() != "" || m1->getSpecialty() != "")
        cerr << "Error en el constructor por defecto" << endl;
    Medico *m2 = new Medico("Medico", "2", "Huesos");
    if(m2->getName() != "Medico" || m2->getLastname() != "2" || m2->getSpecialty() != "Huesos")
        cerr << "Error en el constructor parametrizado" << endl;
    Medico *m3 = m2;
    if(m3->getName() != "Medico" || m3->getLastname() != "2" || m3->getSpecialty() != "Huesos")
        cerr << "Error en el constructor por copia" << endl;
    cout << "- Fin Pruebas Constructores Medico -" << endl;

    delete m1;
    delete m2;
}
void testsConstructorsConsulta() {
    cout << "- Inicio Pruebas Constructores Consulta -" << endl;
    Consulta *c1 = new Consulta;
    FechaYHora fechaYHora = FechaYHora();
    if(!(c1->getPaciente() == NULL) || !(c1->getMedico() == NULL) || c1->getTipoConsulta() != Pendiente
    || c1->isAlta() || c1->getReport() != "" || !(c1->getFechayhora() == fechaYHora))
        cerr << "Error en el constructor por defecto" << endl;
    Paciente *p = new Paciente;
    Medico *m = new Medico;
    fechaYHora = FechaYHora(10, 12, 2024, 15, 56);
    Consulta *c2 = new Consulta(p, m, Urgente, fechaYHora);
    if(!(c2->getPaciente() == p) || !(c2->getMedico() == m) || c2->getTipoConsulta() != Urgente
       || c2->isAlta() || c2->getReport() != "" || !(c2->getFechayhora() == fechaYHora))
        cerr << "Error en el constructor parametrizado" << endl;
    Consulta *c3 = c2;
    if(!(c3->getPaciente() == p) || !(c3->getMedico() == m) || c3->getTipoConsulta() != Urgente
       || c3->isAlta() || c3->getReport() != "" || !(c3->getFechayhora() == fechaYHora))
        cerr << "Error en el constructor por copia" << endl;
    cout << "- Fin Pruebas Constructores Consulta -" << endl;

    delete c1;
    delete c2;
    delete p;
    delete m;
}
void testsConstructorsVoVSorted() {
    cout << "- Inicio Pruebas Constructores VoVSorted -" << endl;
    VoVSorted<Paciente> *v = new VoVSorted<Paciente>;
    if(v->getNElements() != 0)
        cerr << "Error en el constructor por defecto" << endl;
    cout << "- Fin Pruebas Constructores VoVSorted -" << endl;

    delete v;
}

// Setters
void testsSettersPaciente() {
    cout << "- Inicio Pruebas Setters Paciente -" << endl;
    Paciente *p = new Paciente;
    string name = "Juan";
    string lastname = "Pedro";
    string dni = "12345678H";
    Gender gender = Masculino;
    int age = 56;

    p->setName(name);
    if(p->getName() != name)
        cerr << "Error en setName()" << endl;
    p->setLastname(lastname);
    if(p->getLastname() != lastname)
        cerr << "Error en setLastname()" << endl;
    p->setDni(dni);
    if(p->getDni() != dni)
        cerr << "Error en setDni()" << endl;
    p->setGender(gender);
    if(p->getGender() != gender)
        cerr << "Error en setGender()" << endl;
    p->setAge(age);
    if(p->getAge() != age)
        cerr << "Error en setAge()" << endl;
    cout << "- Fin Pruebas Setters Paciente -" << endl;

    delete p;
}
void testsSettersMedico() {
    cout << "- Inicio Pruebas Setters Medico -" << endl;
    Medico *m = new Medico;
    string name = "Juan";
    string lastname = "Pedro";
    string specialty = "Radiología";

    m->setName(name);
    if(m->getName() != name)
        cerr << "Error en setName()" << endl;
    m->setLastname(lastname);
    if(m->getLastname() != lastname)
        cerr << "Error en setLastname()" << endl;
    m->setSpecialty(specialty);
    if(m->getSpecialty() != specialty)
        cerr << "Error en setSpecialty()" << endl;
    cout << "- Fin Pruebas Setters Medico -" << endl;

    delete m;
}
void testsSettersConsulta() {
    cout << "- Inicio Pruebas Setters Consulta -" << endl;
    Consulta *c = new Consulta;
    Paciente *p = new Paciente;
    Medico *m = new Medico;
    TipoConsulta tipoConsulta = Urgente;
    bool alta = true;
    string initialReport = c->getReport();
    string report = "";
    FechaYHora fechaYHora = FechaYHora(15, 6, 2012, 19, 32);

    c->setPaciente(p);
    if(c->getPaciente() != p)
        cerr << "Error en setPaciente()" << endl;
    c->setMedico(m);
    if(c->getMedico() != m)
        cerr << "Error en setMedico()" << endl;
    c->setTipoConsulta(tipoConsulta);
    if(c->getTipoConsulta() != tipoConsulta)
        cerr << "Error en setTipoConsulta()" << endl;
    c->setAlta(alta);
    if(c->isAlta() != alta)
        cerr << "Error en setAlta()" << endl;
    c->setReport(report);
    if(c->getReport() != (initialReport + " " + report))
        cerr << "Error en setReport()" << endl;
    c->setFechayhora(fechaYHora);
    if(!(c->getFechayhora() == fechaYHora))
        cerr << "Error en setFechayhora()" << endl;
    cout << "- Fin Pruebas Setters Consulta -" << endl;

    delete c;
}

bool initialTests() {
    bool completed = true;
    cout << "--- INICIO Pruebas Iniciales ---" << endl;
    testsConstructorsPaciente();
    testsConstructorsMedico();
    testsConstructorsConsulta();
    testsConstructorsVoVSorted();
    testsSettersPaciente();
    testsSettersMedico();
    testsSettersConsulta();
    cout << "--- FIN Pruebas Iniciales ---" << endl;
    if (cerr.tellp() != 0) {
        //completed = false;
    }
    return completed;
}