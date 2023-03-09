#include <iostream>
#include "../src/Medico.h"

using namespace std;

#ifndef TESTSMEDICO_H
#define TESTSMEDICO_H

/**
 *  CASO    CONSTRUCTOR
 *   1      Medico m1("Emilia", "Suárez Pérez", "Huesos")
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 *   2      Medico m2("Juan", "Suárez Pérez", "Cabeza")
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 *   3      Medico m3("Bon", "Hanssen", "Pies")
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 */
void testsMostrarMedico();
/**
 *  CASO    COMPARACIÓN     RESULTADO
 *   1      m3 < m1         true
 *   2      m2 > m3         true
 *   3      m1 == m2        true
 */
void testsOperatorsMedico();

// Invoca todas las pruebas anteriores
void testsMedico();

#endif //TESTSMEDICO_H