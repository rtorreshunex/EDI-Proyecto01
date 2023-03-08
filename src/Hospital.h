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

template class VoVSorted<Paciente>;
template class VoVSorted<Medico>;
template class VoVSorted<Consulta>;

#ifndef HOSPITAL_H
#define HOSPITAL_H


class Hospital {
private:
    // Attributes
    string name;
    VoVSorted <Paciente> *pacientes;
    VoVSorted <Medico> *medicos;
    VoVSorted <Consulta> *consultas;

    // Methods
    void loadPacientes();
    void loadMedicos();
    void loadConsultas();
public:
    // Constructors
    Hospital(const string &name);

    // Methods
    void printEstadisticas();
    void printPacientes();
    void printMedicos();
    void printConsultas();
    bool findPacienteByDni(Paciente *&p);
    bool findMedicoByLastname(Medico *&m);
    bool saveConsultasByDni(const string &dni);

    // Getters
    string getName();

    // Destructors
    ~Hospital();
};


#endif //HOSPITAL_H
