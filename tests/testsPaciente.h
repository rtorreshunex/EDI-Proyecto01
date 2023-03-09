#include "iostream"
#include "../src/Paciente.h"

using namespace std;

#ifndef PRUEBASPACIENTE_H
#define PRUEBASPACIENTE_H

/**
 *  CASO    CONSTRUCTOR
 *   1      Paciente p1("Emilia", "Suárez Pérez", "12345678A", Femenino, 67)
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 *   2      Paciente p2("Juan", "Pérez Pérez", "12345678B", Masculino, 24)
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 *   3      Paciente p3("Bon", "Hanssen", "12345678C", noDefinido, 36)
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 */
void testsMostrarPaciente();
/**
 *  CASO    COMPARACIÓN     RESULTADO
 *   1      p1 < p2         true
 *   2      p2 > p3         true
 *   3      p1 == p3        true
 */
void testsOperatorsPaciente();

// Invoca todas las pruebas anteriores
void testsPaciente();

#endif //PRUEBASPACIENTE_H