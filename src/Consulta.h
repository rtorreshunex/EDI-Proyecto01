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
    /**
       * Pre       = {}
       * Post     = {Crea un objeto de tipo Consulta con sus atributos inicializados en valores predeterminados}
       * Compl = O(1)
       * Desc: Constructor de la clase Consulta que inicializa los atributos del objeto en valores predeterminados
    */
    Consulta();

    /**
       * Pre       = {paciente debe apuntar a un objeto Paciente inicializado, medico debe apuntar a un objeto
       *              Medico inicializado, tipoConsulta debe tener un valor entre 0 y 2, y fechayhora debe estar
       *              correctamente inicializado}
       * Post     = {Se crea una instancia de Consulta con los valores asignados a sus atributos}
       * Compl = O(1)
       * Desc: Constructor de la clase Consulta que inicializa los valores de los atributos del objeto creado.
    */
    Consulta(Paciente *paciente, Medico *medico, const TipoConsulta &tipoConsulta, const FechaYHora &fechayhora);

    // Methods
    /**
       * Pre       = {La consulta tiene que tener un paciente y un médico asignados}
       * Post     = {Muestra por pantalla la información de la consulta.}
       * Compl = O(1)
       * Desc: Método que muestra por pantalla la información de la consulta, incluyendo información del paciente, médico, tipo de consulta, alta, informe y fecha.
    */
    void mostrar();

    /**
       * Pre       = {la fecha hora de la consulta actual y de la que se pasa como parámetro deben ser correctas}
       * Post     = {Devuelve verdadero si la fecha y hora de la consulta actual es anterior a la fecha y hora de la consulta pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara la fecha y hora de la consulta actual con la fecha y hora de la consulta pasada como parámetro, devolviendo verdadero si la fecha y hora de la consulta actual es anterior a la fecha y hora de la consulta pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator < (const Consulta &consulta);

    /**
       * Pre       = {la fecha hora de la consulta actual y de la que se pasa como parámetro deben ser correctas}
       * Post     = {Devuelve verdadero si la fecha y hora de la consulta actual es posterior a la fecha y hora de la consulta pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara la fecha y hora de la consulta actual con la fecha y hora de la consulta pasada como parámetro, devolviendo verdadero si la fecha y hora de la consulta actual es posterior a la fecha y hora de la consulta pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator > (const Consulta &consulta);

    /**
       * Pre       = {la fecha hora de la consulta actual y de la que se pasa como parámetro deben ser correctas}
       * Post     = {Devuelve verdadero si la fecha y hora de la consulta actual es igual a la fecha y hora de la consulta pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara la fecha y hora de la consulta actual con la fecha y hora de la consulta pasada como parámetro, devolviendo verdadero si la fecha y hora de la consulta actual es igual a la fecha y hora de la consulta pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator == (const Consulta &consulta);

    // Getters
    /**
       * Pre       = {}
       * Post     = {Devuelve un puntero al objeto de tipo Paciente que corresponde a la consulta actual.}
       * Compl = O(1)
       * Desc: Método que devuelve un puntero al objeto de tipo Paciente que corresponde a la consulta actual.
    */
    Paciente *getPaciente() const;

    /**
       * Pre       = {}
       * Post     = {Se devuelve un puntero al objeto Medico asociado con esta Consulta}
       * Compl = O(1)
       * Desc:    Este método devuelve un puntero al objeto Medico asociado con esta Consulta.
    */
    Medico *getMedico() const;

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo tipoConsulta}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo tipoConsulta de esta Consulta.
    */
    TipoConsulta getTipoConsulta();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo alta}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo alta de esta Consulta.
    */
    bool isAlta();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo report}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo report de esta Consulta.
    */
    string getReport();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo fechayhora}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo fechayhora de esta Consulta.
    */
    FechaYHora getFechayhora();

    // Setters
    /**
       * Pre       = {tipoConsulta debe estar inicializado con un valor}
       * Post     = {El valor del atributo tipoConsulta se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo tipoConsulta de este Medico con el valor pasado como parámetro.
    */
    void setTipoConsulta(TipoConsulta tipoConsulta);

    /**
       * Pre       = {alta debe estar inicializado con un valor}
       * Post     = {El valor del atributo alta se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo alta de este Medico con el valor pasado como parámetro.
    */
    void setAlta(bool alta);

    /**
       * Pre       = {report debe estar inicializado con un valor}
       * Post     = {El valor del atributo report se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo report de este Medico con el valor pasado como parámetro.
    */
    void setReport(string report);

    /**
       * Pre       = {fechayhora debe estar inicializado con un valor}
       * Post     = {El valor del atributo fechayhora se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo fechayhora de este Medico con el valor pasado como parámetro.
    */
    void setFechayhora(FechaYHora fechayhora);

    // Destructors
    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(1)
       * Desc:    Este es el destructor de la clase Consulta, se ejecuta cuando se destruye un objeto de esta clase.
    */
    ~Consulta();
};


#endif //CONSULTA_H
