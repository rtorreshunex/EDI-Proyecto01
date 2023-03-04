//
// Created by ruben on 12/02/23.
//

#include "Medico.h"

// Constructors
Medico::Medico() {
    this->name = "";
    this->lastname = "";
    this->specialty = "";
}
Medico::Medico(string name, string lastname, string specialty) {
    this->name = name;
    this->lastname = lastname;
    this->specialty = specialty;
}
Medico::Medico(const Medico &medico) {
    this->name = medico.name;
    this->lastname = medico.lastname;
    this->specialty = medico.specialty;
}

// Methods
void Medico::mostrar() {
    cout << "-- Nombre: " + this->name << endl;
    cout << "-- Apellidos: " + this->lastname << endl;
    cout << "-- Especialidad: " + this->specialty << endl;
}

// Getters
string Medico::getName() {
    return this->name;
}
string Medico::getLastname() {
    return this->lastname;
}
string Medico::getSpecialty() {
    return this->specialty;
}

// Setters
void Medico::setName(string name) {
    this->name = name;
}
void Medico::setLastname(string lastname) {
    this->lastname = lastname;
}
void Medico::setSpecialty(string specialty) {
    this->specialty = specialty;
}

// Destructors
Medico::~Medico() {

}