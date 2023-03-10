#include "iostream"
#include "../src/Paciente.h"
#include "../src/VoVSorted.h"

using namespace std;

#ifndef TESTSVOVSORTED_H
#define TESTSVOVSORTED_H

/**
 *  - Se crea un puntero v a un objeto de la clase VoVSorted (constructor por defecto)
 *  - isEmpty() = true
 *  - isFull() = false
 *  - Se llena el vector apuntado por v con punteros a paciente
 *  - isEmpty() = false
 *  - isFull() = true
 *  - Se comprueba que los elementos esten insertados en orden
 *  - Se libera la memoria de todos los objetos creados
 */
void testsPushVoVSorted();
/**
 *  - Se crea un puntero v a un objeto de la clase VoVSorted (constructor por defecto)
 *  - isEmpty() = true
 *  - isFull() = false
 *  - Se añaden al vector apuntado por v punteros a paciente
 *  - isEmpty() = false
 *  - isFull() = false
 *  - Se eliminan todos los elementos
 *  - isEmpty() = true
 *  - Se libera la memoria de todos los objetos creados
 */
void testsPopVoVSorted();
/**
 *  - Se crea un puntero v a un objeto de la clase VoVSorted (constructor por defecto)
 *  - isEmpty() = true
 *  - isFull() = false
 *  - Se añaden al vector apuntado por v punteros a paciente
 *  - isEmpty() = false
 *  - isFull() = false
 *  - Se obtiene el elemento en la posición 3 del vector y si apunta desde el puntero
 *    p1 y se añade el dni del objeto apuntado por p1 al objeto apuntado por p2 creado
 *    con constructor por defecto
 *    *p1 == *p2 = true
 *  - Se libera la memoria de todos los objetos creados
 */
void testsFindElementByDataTypeVoVSorted();

// Invoca todas las pruebas anteriores
void testsVoVSorted();

#endif //TESTSVOVSORTED_H
