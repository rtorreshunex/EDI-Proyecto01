//
// Created by ruben on 6/02/23.
//

#include "Paciente.h"

// Constructors
Paciente::Paciente() {
    this->name = "";
    this->lastname = "";
    this->dni = "";
    this->gender = noDefinido;
    this->age = 0;
}
Paciente::Paciente(string name, string lastname, string dni, Gender gender, int age){
    this->name = name;
    this->lastname = lastname;
    this->dni = dni;
    this->gender = gender;
    this->age = age;
}

// Methods
void Paciente::mostrar(){
    cout << "-- Nombre: " + this->name << endl;
    cout << "-- Apellidos: " + this->lastname << endl;
    cout << "-- DNI: " + this->dni << endl;
    string gender;
    switch (this->gender) {
        case 0:
            gender = "Masculino";
            break;
        case 1:
            gender = "Femenino";
            break;
        case 2:
            gender = "No Definido";
            break;
    }
    cout << "-- Género: " + gender << endl;
    cout << "-- Edad: " + to_string(this->age) << endl;
}

bool Paciente::operator < (const Paciente &paciente) {
    return (this->dni < paciente.dni);
}
bool Paciente::operator <= (const Paciente &paciente) {
    return (this->dni <= paciente.dni);
}
bool Paciente::operator > (const Paciente &paciente) {
    return (this->dni > paciente.dni);
}
bool Paciente::operator == (const Paciente &paciente) {
    return (this->dni == paciente.dni);
}

// Getters
string Paciente::getName() {
    return this->name;
}
string Paciente::getLastname() {
    return this->lastname;
}
string Paciente::getDni() {
    return this->dni;
}
Gender Paciente::getGender() {
    return this->gender;
}
int Paciente::getAge() {
    return this->age;
}

// Setters
void Paciente::setName(string name) {
    this->name = name;
}
void Paciente::setLastname(string lastname) {
    this->lastname = lastname;
}
void Paciente::setDni(string dni) {
    this->dni = dni;
}
void Paciente::setGender(Gender gender) {
    this->gender = gender;
}
void Paciente::setAge(int age) {
    this->age = age;
}

// Destructors
Paciente::~Paciente() {

}
