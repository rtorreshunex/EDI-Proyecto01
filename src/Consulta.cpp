//
// Created by ruben on 13/02/23.
//

#include "Consulta.h"

// Constructors
Consulta::Consulta() {
    this->paciente = NULL;
    this->medico = NULL;
    this->tipoConsulta = Pendiente;
    this->alta = false;
    this->report = "";
    this->fechayhora = FechaYHora();
}
Consulta::Consulta(Paciente *paciente, Medico *medico, const TipoConsulta &tipoConsulta, const FechaYHora &fechayhora) {
    this->paciente = paciente;
    this->medico = medico;
    this->tipoConsulta = tipoConsulta;
    this->alta = false;
    this->report = "";
    this->fechayhora = fechayhora;
}

// Methods
void Consulta::mostrar() {
    cout << "- PACIENTE:" << endl;
    this->paciente->mostrar();
    cout << "- MÉDICO:" << endl;
    this->medico->mostrar();
    string tipoConsulta;
    switch (this->tipoConsulta) {
        case 0:
            tipoConsulta = "Pendiente";
            break;
        case 1:
            tipoConsulta = "Urgente";
            break;
        case 2:
            tipoConsulta = "Externa";
            break;
    }
    cout << "- Tipo de Consulta: " + tipoConsulta << endl;
    cout << "- Alta: ";
    if(this->alta)
        cout << "Si" << endl;
    else cout << "No" << endl;
    cout << "- Informe: " + this->report << endl;
    cout << "- Fecha: ";
    this->fechayhora.mostrar();
}

bool Consulta::operator < (const Consulta &consulta) {
    return (this->fechayhora < consulta.fechayhora);
}
bool Consulta::operator > (const Consulta &consulta) {
    return (this->fechayhora > consulta.fechayhora);
}
bool Consulta::operator == (const Consulta &consulta) {
    return (this->fechayhora == consulta.fechayhora);
}

// Getters
Paciente *Consulta::getPaciente() {
    return this->paciente;
}
Medico *Consulta::getMedico() {
    return this->medico;
}
TipoConsulta Consulta::getTipoConsulta() {
    return this->tipoConsulta;
}
bool Consulta::isAlta() {
    return this->alta;
}
string Consulta::getReport() {
    return this->report;
}
FechaYHora Consulta::getFechayhora() {
    return this->fechayhora;
}

// Setters
void Consulta::setPaciente(Paciente *paciente) {
    this->paciente = paciente;
}

void Consulta::setMedico(Medico *medico) {
    this->medico = medico;
}
void Consulta::setTipoConsulta(TipoConsulta tipoConsulta) {
    this->tipoConsulta = tipoConsulta;
}
void Consulta::setAlta(bool alta) {
    this->alta = alta;
}
void Consulta::setReport(string report) {
    this->report += " " + report;
}
void Consulta::setFechayhora(FechaYHora fechayhora) {
    this->fechayhora = fechayhora;
}

// Destructors
Consulta::~Consulta() {

}