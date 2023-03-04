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
    string informe;
    FechaYHora fechayhora;
public:
    // Constructors
    Consulta();
    Consulta(Paciente *paciente, Medico *medico, const TipoConsulta &tipoConsulta, const bool &alta, const string &informe, const FechaYHora &fechayhora);
    Consulta(Paciente *paciente, Medico *medico, const TipoConsulta &tipoConsulta, const FechaYHora &fechayhora);
    Consulta(Paciente *paciente, Medico *medico);
    Consulta(Paciente *paciente);

    // Methods
    void mostrar();
    bool operator < (const Consulta &consulta);

    // Getters
    TipoConsulta getTipoConsulta();
    bool isAlta();
    string getInforme();
    FechaYHora getFechayhora();

    // Setters
    void setTipoConsulta(TipoConsulta tipoConsulta);
    void setAlta(bool alta);
    void setInforme(string informe);
    void setFechayhora(FechaYHora fechayhora);

    // Destructors
    ~Consulta();
};


#endif //CONSULTA_H
