//
// Created by ruben on 27/02/23.
//

#include "Hospital.h"

// Constructors
Hospital::Hospital(const string &name) {
    this->name = name;
    this->pacientes = new VoVUnsorted<Paciente *>;
    this->medicos = new VoVUnsorted<Medico *>;
    this->consultas = new VoVSorted<Consulta *>;
}

// Methods
// PRIVATE
void Hospital::loadPacientes(){
    ifstream ifs;
    string name;
    string lastname;
    string dni;
    string g;
    string gender;
    string age;
    Paciente *p = nullptr;
    ifs.open("../files/pacientes.csv");
    if (ifs.fail()) {
        cerr << "ERROR: fichero no encontrado." << endl;
    } else {
        while (!ifs.eof()) {
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
    Medico *m = nullptr;
    ifs.open("../files/medicos.csv");
    if (ifs.fail()) {
        cerr << "ERROR: fichero no encontrado." << endl;
    } else {
        while (!ifs.eof()) {
            getline(ifs, name, ';');
            if (!ifs.eof()) {
                getline(ifs, lastname, ';');
                getline(ifs, especialidad, '\n');
                m = new Medico(name, lastname, especialidad);
                this->medicos->push(m);
            }
        }
        ifs.close();
    }
}

void Hospital::loadConsultas(){}

// PUBLIC
void Hospital::printPacientes(){}
void Hospital::printMedicos(){}
void Hospital::printConsultas(){}

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
