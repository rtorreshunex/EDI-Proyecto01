//
// Created by ruben on 27/02/23.
//
#include <string>
#include "VoVUnsorted.h"
#include "VoVSorted.h"
#include "Paciente.h"
#include "Medico.h"
#include "Consulta.h"
#include <fstream>
using namespace std;

#ifndef HOSPITAL_H
#define HOSPITAL_H


class Hospital {
private:
    // Attributes
    string name;
    VoVUnsorted <Paciente *> *pacientes;
    VoVUnsorted <Medico *> *medicos;
    VoVSorted <Consulta *> *consultas;

    // Methods
    void loadPacientes();
    void loadMedicos();
    void loadConsultas();
public:
    // Constructors
    Hospital(const string &name);

    // Methods
    void printPacientes();
    void printMedicos();
    void printConsultas();

    // Getters
    string getName();

    // Destructors
    ~Hospital();
};


#endif //HOSPITAL_H
