#include <iostream>
#include "../src/Consulta.h"

using namespace std;

#ifndef TESTSCONSULTA_H
#define TESTSCONSULTA_H

/**
 *  CASO    CONSTRUCTOR
 *   1      Consulta c1(p, m, Urgente, fechaYHora1)
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 *   2      Consulta c2(p, m, Pendiente, fechaYHora2)
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 *   3      Consulta c3(p, m, Externa, fechaYHora3)
 *          Muestra los datos pasados por el constructor en pantalla con el formato "campo: dato"
 */
void testsMostrarConsulta();
/**
 *  CASO    COMPARACIÓN     RESULTADO
 *   1      c1 < c2         true
 *   2      c2 > c3         true
 *   3      c1 == c3        true
 */
void testsOperatorsConsulta();

// Invoca todas las pruebas anteriores
void testsConsulta();

#endif //TESTSCONSULTA_H
