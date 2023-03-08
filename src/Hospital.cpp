//
// Created by ruben on 27/02/23.
//

#include "Hospital.h"

// Constructors
Hospital::Hospital(const string &name) {
    this->name = name;
    this->pacientes = new VoVSorted<Paciente>;
    this->medicos = new VoVSorted<Medico>;
    this->consultas = new VoVSorted<Consulta>;
    this->loadPacientes();
    this->loadMedicos();
    this->loadConsultas();
}

// Methods
// PRIVATE
void Hospital::loadPacientes(){
    ifstream ifs;
    string name;
    string lastname;
    string dni;
    string gender;
    string age;
    Paciente *p;
    ifs.open("../files/pacientes.csv");
    if (ifs.fail()) {
        cerr << "ERROR: fichero no encontrado." << endl;
    } else {
        while (!ifs.eof() && !this->pacientes->isFull()) {
            getline(ifs, dni, ';');
            if (!ifs.eof()) {
                getline(ifs, name, ';');
                getline(ifs, lastname, ';');
                getline(ifs, gender, ';');
                getline(ifs, age, '\n');
                p = new Paciente(name, lastname, dni, Gender(stoi(gender)), stoi(age));
                this->pacientes->push(p);
            }
        }
        ifs.close();
    }
}

void Hospital::loadMedicos() {
    ifstream ifs;
    string name;
    string lastname;
    string specialty;
    Medico *m;
    ifs.open("../files/medicos.csv");
    if (ifs.fail()) {
        cerr << "ERROR: fichero no encontrado." << endl;
    } else {
        while (!ifs.eof() && !this->medicos->isFull()) {
            getline(ifs, name, ';');
            if (!ifs.eof()) {
                getline(ifs, lastname, ';');
                getline(ifs, specialty, '\n');
                m = new Medico(name, lastname, specialty);
                this->medicos->push(m);
            }
        }
        ifs.close();
    }
}

void Hospital::loadConsultas(){
    ifstream ifs;
    string dni;
    string lastname;
    string tipoConsulta;
    string fechaYHora;
    Consulta *c;
    ifs.open("../files/consultas.csv");
    if (ifs.fail()) {
        cerr << "ERROR: fichero no encontrado." << endl;
    } else {
        while (!ifs.eof() && !this->consultas->isFull()) {
            getline(ifs, dni, ';');
            if (!ifs.eof()) {
                getline(ifs, lastname, ';');
                getline(ifs, tipoConsulta, ';');
                getline(ifs, fechaYHora, '\n');
                Paciente *p = new Paciente;
                p->setDni(dni);
                this->pacientes->findElementByDataType(p);
                Medico *m = new Medico;
                m->setLastname(lastname);
                this->medicos->findElementByDataType(m);
                c = new Consulta(p, m, TipoConsulta(stoi(tipoConsulta)), fechaYHora != "-" ? FechaYHora(fechaYHora) : FechaYHora());
                this->consultas->push(c);
            }
        }
        ifs.close();
    }
}

// PUBLIC
void Hospital::printEstadisticas() {
    cout << "Número de Pacientes: " + to_string(this->pacientes->getNElements()) << endl;
    cout << "Número de Médicos: " + to_string(this->medicos->getNElements()) << endl;
    cout << "Número de Consultas: " + to_string(this->consultas->getNElements()) << endl;
}
void Hospital::printPacientes(){
    Paciente *p;
    for(int i = 0; i < this->pacientes->getNElements(); i++){
        this->pacientes->getElement(i, p);
        cout << "- PACIENTE " + to_string(i + 1) + ":" << endl;
        p->mostrar();
        cout << endl;
    }
}
void Hospital::printMedicos() {
    Medico *m;
    for(int i = 0; i < this->medicos->getNElements(); i++){
        this->medicos->getElement(i, m);
        cout << "- MÉDICO " + to_string(i + 1) + ":" << endl;
        m->mostrar();
        cout << endl;
    }
}
void Hospital::printConsultas(){
    Consulta *c;
    for(int i = 0; i < this->consultas->getNElements(); i++){
        this->consultas->getElement(i, c);
        cout << "CONSULTA " + to_string(i + 1) + ":" << endl;
        c->mostrar();
        cout << endl;
    }
}
bool Hospital::findPacienteByDni(Paciente *&p) {
    return (this->pacientes->findElementByDataType(p));
}
bool Hospital::findMedicoByLastname(Medico *&m) {
    return (this->medicos->findElementByDataType(m));
}
void saveConsultasByDni(const string &dni) {
    
}

// Getters
string Hospital::getName() {
    return name;
}

// Destructors
Hospital::~Hospital() {
    // Delete Paciente
    Paciente *p = nullptr;
    for (int i = 0; i < this->pacientes->getNElements(); ++i) {
        this->pacientes->getElement(i, p);
        delete p;
    }
    delete this->pacientes;
    // Delete Medico
    Medico *m = nullptr;
    for (int i = 0; i < this->medicos->getNElements(); ++i) {
        this->medicos->getElement(i, m);
        delete m;
    }
    delete this->medicos;
    // Delete Consultas
    Consulta *c = nullptr;
    for (int i = 0; i < this->consultas->getNElements(); ++i) {
        this->consultas->getElement(i, c);
        delete c;
    }
    delete this->consultas;
}
