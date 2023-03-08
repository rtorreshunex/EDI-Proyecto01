//
// Created by ruben on 12/02/23.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef MEDICO_H
#define MEDICO_H


class Medico {
private:
    // Attributes
    string name;
    string lastname;
    string specialty;
public:
    // Constructors
    /**
       * Pre       = {}
       * Post     = {Crea una nueva instancia de Medico con valores predeterminados para sus atributos.}
       * Compl = O(1)
       * Desc:    Este es el constructor por defecto de la clase Medico, que crea una nueva instancia de Medico con valores predeterminados para sus atributos.
    */
    Medico();

    /**
       * Pre       = {}
       * Post     = {Crea una nueva instancia de Medico con los atributos especificados.}
       * Compl = O(1)
       * Desc:    Este es el constructor de la clase Medico, que crea una nueva instancia de Medico con los atributos especificados.
    */
    Medico(string name, string lastname, string specialty);

    /**
       * Pre       = {}
       * Post     = {Crea una nueva instancia de Medico con los mismos atributos que el medico original.}
       * Compl = O(1)
       * Desc:    Este es el constructor de copia de la clase Medico, que crea una nueva instancia de Medico con los mismos atributos que el medico original.
    */
    Medico(const Medico &medico);

    // Methods
    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(1)
       * Desc:    Este método muestra por consola la información del objeto Medico.
    */
    void mostrar();

    /**
       * Pre       = {el atributo lastname del medico actual y del que se pasa como parámetro deben ser correctos}
       * Post     = {Devuelve verdadero si el apellido del medico actual es anterior al apellido del medico pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara el apellido del medico actual con el apellido del medico pasado como parámetro, devolviendo verdadero si el apellido del medico actual es anterior al apellido del medico pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator < (const Medico &medico);

    /**
       * Pre       = {el atributo lastname del medico actual y del que se pasa como parámetro deben ser correctos}
       * Post     = {Devuelve verdadero si el apellido del medico actual es posterior al apellido del medico pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara el apellido del medico actual con el apellido del medico pasado como parámetro, devolviendo verdadero si el apellido del medico actual es posterior al apellido del medico pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator > (const Medico &medico);

    /**
       * Pre       = {el atributo lastname del medico actual y del que se pasa como parámetro deben ser correctos}
       * Post     = {Devuelve verdadero si el apellido del medico actual es igual al apellido del medico pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara el apellido del medico actual con el apellido del medico pasado como parámetro, devolviendo verdadero si el apellido del medico actual es igual al apellido del medico pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator == (const Medico &medico);

    // Getters
    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo name}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo name de este Medico.
    */
    string getName();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo lastname}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo lastname de este Medico.
    */
    string getLastname();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo specialty}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo specialty de este Medico.
    */
    string getSpecialty();

    // Setters
    /**
       * Pre       = {name debe estar inicializado con un valor}
       * Post     = {El valor del atributo name se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo name de este Medico con el valor pasado como parámetro.
    */
    void setName(string name);

    /**
       * Pre       = {lastname debe estar inicializado con un valor}
       * Post     = {El valor del atributo lastname se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo lastname de este Medico con el valor pasado como parámetro.
    */
    void setLastname(string lastname);

    /**
       * Pre       = {specialty debe estar inicializado con un valor}
       * Post     = {El valor del atributo specialty se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo specialty de este Medico con el valor pasado como parámetro.
    */
    void setSpecialty(string specialty);

    // Destructors
    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(1)
       * Desc:    Este es el destructor de la clase Medico, se ejecuta cuando se destruye un objeto de esta clase.
    */
    ~Medico();
};


#endif //MEDICO_H
