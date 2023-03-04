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
    Paciente();
    Paciente(string name, string lastname, string dni, Gender gender, int age);

    // Methods
    void mostrar();

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
    ~Paciente();
};


#endif //PACIENTE_H
