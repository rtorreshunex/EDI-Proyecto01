#include <iostream>
#include "../src/Paciente.h"
#include "../src/Medico.h"
#include "../src/Consulta.h"
#include "../src/VoVSorted.h"

using namespace std;

#ifndef INITIALTESTS_H
#define INITIALTESTS_H

// Constructors
/**
 *  CASO    CONSTRUCTOR                                                         getName()       getLastname()   getDni()        getGender()     getAge()
 *   1      *p1 = new Paciente                                                  ""              ""              ""              noDefinido      0
 *   2      *p2 = new Paciente("Paciente", "2", "00000000A", Femenino, 0)       "Paciente"      "2"             "00000000A"     Femenino        40
 *   3      *p3 = p2                                                            "Paciente"      "2"             "00000000A"     Femenino        40
 */
void testsConstructorsPaciente();
/**
 *  CASO    CONSTRUCTOR                                     getName()       getLastname()       getSpecialty()
 *   1      *m1 = new Medico                                ""              ""                  ""
 *   2      *m2 = new Medico("Medico", "2", "Huesos")       "Medico"        "2"                 "Huesos"
 *   3      *m3 = m2                                        "Medico"        "2"                 "Huesos"
 */
void testsConstructorsMedico();
/**
 *  CASO    CONSTRUCTOR                                     getPaciente()       getMedico()       getTipoConsulta()     isAlta()    getReport()     getFechayhora()
 *   1      *c1 = new Consulta                              NULL                NULL              Pendiente             false       ""              fechaYHora
 *   2      *c2 = new Consulta(p, m, Urgente, fechaYHora)   p                   m                 Urgente               false       ""              fechaYHora
 *   3      *c3 = c2                                        p                   m                 Urgente               false       ""              fechaYHora
 */
void testsConstructorsConsulta();
/**
 *  CASO    CONSTRUCTOR                                     getNElements()
 *   1      *v = new VoVSorted<Paciente>                    0
 */
void testsConstructorsVoVSorted();

// Setters
/**
 *  CASO    CONSTRUCTOR               getName()     getLastname()       getDni()        getGender()     getAge()
 *   1      p->setName(name)          name
 *   2      p->setLastname(lastname)                lastname
 *   3      p->setDni(dni)                                              dni
 *   4      p->setGender(gender)                                                        gender
 *   5      p->setAge(age)                                                                               age
 */
void testsSettersPaciente();
/**
 *  CASO    CONSTRUCTOR               getName()     getLastname()       getSpecialty()
 *   1      p->setName(name)          name
 *   2      p->setLastname(lastname)                lastname
 *   3      m->setSpecialty(specialty)                                  specialty
 */
void testsSettersMedico();
/**
 *  CASO    CONSTRUCTOR                         getPaciente()       getMedico()         getTipoConsulta()       isAlta()    getReport()     getFechayhora()
 *   1      c->setPaciente(p)                   p
 *   2      c->setMedico(m)                                         m
 *   3      c->setTipoConsulta(tipoConsulta)                                            tipoConsulta
 *   4      c->setAlta(alta)                                                                                    alta
 *   5      c->setReport(report)                                                                                            report
 *   6      c->setFechayhora(fechaYHora)                                                                                                    fechaYHora
 */
void testsSettersConsulta();

// Invoca todas las pruebas anteriores
bool initialTests();

#endif //INITIALTESTS_H