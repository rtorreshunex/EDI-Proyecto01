//
// Created by ruben on 6/02/23.
//

#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <iostream>
using namespace std;
enum Gender {Masculino, Femenino, noDefinido};

class Paciente {
private:
    // Attributes
    string name;
    string lastname;
    string dni;
    Gender gender;
    int age;
public:
    // Constructors
    /**
        * Pre   = {}
        * Post  = {El objeto Paciente es creado y todos sus campos están inicializados a valores por defecto.}
        * Compl = O(1)
        * Desc: Constructor por defecto de la clase Paciente que inicializa todos los campos del objeto a valores por defecto.
    */
    Paciente();

    /**
        * Pre   = {name, lastname, dni son cadenas de caracteres no vacías; gender es un género válido (masculino, femenino, otro);
        *          age es un entero no negativo.}
        * Post  = {Se crea un nuevo objeto Paciente con los campos inicializados con los valores proporcionados en los parámetros.}
        * Compl = O(1)
        * Desc: Constructor de la clase Paciente que inicializa todos los campos del objeto con los valores proporcionados en los parámetros.
    */
    Paciente(string name, string lastname, string dni, Gender gender, int age);

    // Methods
    /**
        * Pre   = { }
        * Post   = { Se muestra por pantalla la información del paciente }
        * Compl = O(1)
        * Desc: Este método se encarga de imprimir en la salida estándar (consola) la información
        *       del paciente, incluyendo su nombre, apellidos, DNI, género y edad.
    */
    void mostrar();

    /**
       * Pre       = {el atributo dni del paciente actual y del que se pasa como parámetro deben ser correctos}
       * Post     = {Devuelve verdadero si el dni del paciente actual es anterior al dni del paciente pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara el dni del paciente actual con el dni del paciente pasado como parámetro, devolviendo verdadero si el dni del paciente actual es anterior al dni del paciente pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator < (const Paciente &paciente);

    /**
       * Pre       = {el atributo dni del paciente actual y del que se pasa como parámetro deben ser correctos}
       * Post     = {Devuelve verdadero si el dni del paciente actual es posterior al dni del paciente pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara el dni del paciente actual con el dni del paciente pasado como parámetro, devolviendo verdadero si el dni del paciente actual es posterior al dni del paciente pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator > (const Paciente &paciente);

    /**
       * Pre       = {el atributo dni del paciente actual y del que se pasa como parámetro deben ser correctos}
       * Post     = {Devuelve verdadero si el dni del paciente actual es igual al dni del paciente pasada como parámetro, de lo contrario, devuelve falso.}
       * Compl = O(1)
       * Desc: Operador que compara el dni del paciente actual con el dni del paciente pasado como parámetro, devolviendo verdadero si el dni del paciente actual es igual al dni del paciente pasada como parámetro, de lo contrario, devuelve falso.
    */
    bool operator == (const Paciente &paciente);

    // Getters
    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo name}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo name de este Paciente.
    */
    string getName();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo lastname}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo lastname de este Paciente.
    */
    string getLastname();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo dni}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo dni de este Paciente.
    */
    string getDni();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo gender}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo gender de este Paciente.
    */
    Gender getGender();

    /**
       * Pre       = {}
       * Post     = {Se devuelve el valor del atributo age}
       * Compl = O(1)
       * Desc:    Este método devuelve el valor del atributo age de este Paciente.
    */
    int getAge();

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
       * Pre       = {dni debe estar inicializado con un valor}
       * Post     = {El valor del atributo dni se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo dni de este Medico con el valor pasado como parámetro.
    */
    void setDni(string dni);

    /**
       * Pre       = {gender debe estar inicializado con un valor}
       * Post     = {El valor del atributo gender se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo gender de este Medico con el valor pasado como parámetro.
    */
    void setGender(Gender gender);

    /**
       * Pre       = {age debe estar inicializado con un valor}
       * Post     = {El valor del atributo age se actualiza con el valor pasado como parámetro}
       * Compl = O(1)
       * Desc:    Este método actualiza el valor del atributo age de este Medico con el valor pasado como parámetro.
    */
    void setAge(int age);

    // Destructors
    /**
       * Pre       = {}
       * Post     = {}
       * Compl = O(1)
       * Desc:    Este es el destructor de la clase Paciente, se ejecuta cuando se destruye un objeto de esta clase.
    */
    ~Paciente();
};


#endif //PACIENTE_H
