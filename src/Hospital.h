//
// Created by ruben on 27/02/23.
//
#include <string>
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
    /**
       * Pre   = {}
       * Post  = {Los pacientes se cargan desde un archivo CSV a la lista de pacientes del objeto Hospital}
       * Compl = O(n)
       * Desc  = Este método carga los datos de pacientes desde un archivo CSV y los guarda en la lista de pacientes del objeto Hospital.
    */
    void loadPacientes();

    /**
       * Pre   = {}
       * Post  = {Los médicos se cargan desde un archivo CSV a la lista de médicos del objeto Hospital}
       * Compl = O(n)
       * Desc  = Este método carga los datos de médicos desde un archivo CSV y los guarda en la lista de médicos del objeto Hospital.
    */
    void loadMedicos();

    /**
       * Pre   = {Se han cargado los pacientes y médicos en la lista de pacientes y médicos del objeto Hospital}
       * Post  = {Las consultas se cargan desde un archivo CSV y se guardan en la lista de consultas del objeto Hospital}
       * Compl = O(n * log(n))
       * Desc  = Este método carga los datos de consultas desde un archivo CSV y los guarda en la lista de consultas del objeto Hospital. Se asume que los pacientes y médicos ya han sido cargados en las listas correspondientes.
    */
    void loadConsultas();
public:
    // Constructors
    /**
       * Pre   = {}
       * Post  = {El objeto Hospital es creado con los atributos name, pacientes, medicos y consultas inicializados}
       * Compl = O(1)
       * Desc  = Este constructor crea un objeto Hospital y lo inicializa con los atributos name, pacientes, medicos y consultas.
                Además, carga los datos de pacientes, médicos y consultas desde algún medio de almacenamiento, como una base de datos o un archivo.
    */
    Hospital(const string &name);

    // Methods
    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(1)
       * Desc: Imprime las estadísticas del hospital: número de pacientes, médicos y consultas.
    */
    void printEstadisticas();

    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(n)
       * Desc: Imprime la información de todos los pacientes del hospital.
    */
    void printPacientes();

    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(n)
       * Desc: Imprime la información de todos los médicos del hospital.
    */
    void printMedicos();

    /**
       * Pre       = {}
       * Post     = {Imprime por consola información sobre todas las consultas del hospital}
       * Compl = O(n)
       * Desc: Este método recorre la lista de consultas del hospital e imprime por consola información detallada sobre cada una de ellas, utilizando el método "mostrar" de la clase Consulta. La complejidad de este método depende del tamaño de la lista de consultas del hospital.
    */
    void printConsultas();

    /**
       * Pre       = {p debe estar con el atributo dni inicializado}
       * Post     = {Devuelve true si el objeto Paciente con el DNI correspondiente se encuentra en la lista de pacientes del hospital}
       * Compl = O(n)
       * Desc: Busca en la lista de pacientes del hospital el objeto Paciente con el DNI correspondiente y devuelve true si lo encuentra.
    */
    bool findPacienteByDni(Paciente *&p);

    /**
       * Pre       = {m debe estar con el atributo lastname inicializado}
       * Post     = {Devuelve true si el objeto Medico con el apellido correspondiente se encuentra en la lista de medicos del hospital}
       * Compl = O(n)
       * Desc: Busca en la lista de medicos del hospital el objeto Medico con el apellido correspondiente y devuelve true si lo encuentra.
    */
    bool findMedicoByLastname(Medico *&m);

    /**
       * Pre       = {}
       * Post     = {Se han guardado las consultas del paciente en un archivo txt en la carpeta files/, se devuelve true si se han guardado las consultas, false en caso contrario}
       * Compl = O(n)
       * Desc: Busca al paciente en la lista de pacientes del hospital. Si lo encuentra, abre un archivo de texto en la carpeta files/ con el nombre del DNI del paciente y escribe las consultas realizadas al paciente en el archivo. Devuelve true si se han guardado las consultas, false en caso contrario.
    */
    bool saveConsultasByDni(const string &dni);

    // Getters
    /**
       * Pre       = {}
       * Post     = {Devuelve el nombre del hospital}
       * Compl = O(1)
       * Desc: Devuelve el nombre del hospital.
    */
    string getName();

    // Destructors
    /**
       * Pre       = {}
       * Post     = {Todos los elementos de pacientes, medicos y consultas se eliminan}
       * Compl = O(n)
       * Desc: Libera la memoria de todos los objetos creados en la instancia de la clase Hospital, incluyendo pacientes, médicos y consultas.
    */
    ~Hospital();
};


#endif //HOSPITAL_H
