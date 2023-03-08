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
    bool operator < (const Paciente &paciente);
    bool operator <= (const Paciente &paciente);
    bool operator > (const Paciente &paciente);
    bool operator == (const Paciente &paciente);

    // Getters
    string getName();
    string getLastname();
    string getDni();
    Gender getGender();
    int getAge();

    // Setters
    void setName(string name);
    void setLastname(string lastname);
    void setDni(string dni);
    void setGender(Gender gender);
    void setAge(int age);


    // Destructors

    // Pre   = { }
    // Compl = O(1)
    // Desc: Destructor.
    ~Paciente();
};


#endif //PACIENTE_H
