//
// Created by ruben on 13/02/23.
//

#ifndef CONSULTA_H
#define CONSULTA_H


#include "Paciente.h"
#include "Medico.h"
#include "FechaYHora.h"

enum TipoConsulta {Pendiente, Urgente, Externa};

class Consulta {
private:
    // Attributes
    Paciente *paciente;
    Medico *medico;
    TipoConsulta tipoConsulta;
    bool alta;
    string report;
    FechaYHora fechayhora;
public:
    // Constructors
    Consulta();
    Consulta(Paciente *paciente, Medico *medico, const TipoConsulta &tipoConsulta, const bool &alta, const string &report, const FechaYHora &fechayhora);
    Consulta(Paciente *paciente, Medico *medico, const TipoConsulta &tipoConsulta, const FechaYHora &fechayhora);
    Consulta(Paciente *paciente, Medico *medico);
    Consulta(Paciente *paciente);

    // Methods
    void mostrar();
    bool operator < (const Consulta &consulta);
    bool operator <= (const Consulta &consulta);
    bool operator > (const Consulta &consulta);
    bool operator == (const Consulta &consulta);

    // Getters
    Paciente *getPaciente() const;
    Medico *getMedico() const;
    TipoConsulta getTipoConsulta();
    bool isAlta();
    string getReport();
    FechaYHora getFechayhora();

    // Setters
    void setTipoConsulta(TipoConsulta tipoConsulta);
    void setAlta(bool alta);
    void setReport(string report);
    void setFechayhora(FechaYHora fechayhora);

    // Destructors
    ~Consulta();
};


#endif //CONSULTA_H
