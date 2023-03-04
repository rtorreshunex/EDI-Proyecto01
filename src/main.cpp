#include <iostream>
#include "pruebasPaciente.h"
#include "Paciente.h"
#include "Medico.h"
#include "FechaYHora.h"
#include "Consulta.h"
#include "Hospital.h"
#include "VoVSorted.h"

using namespace std;

// Muestra el menu por pantalla y devuelve una opcion elegida.
int menu(string nombre) {

    int opcion;

    do {
        cout << endl;
        cout << "--------  " << nombre << "  --------"  << endl << endl;

        cout << "     1. Mostrar Estadísticas               " << endl;
        cout << "     2. Mostrar Pacientes                  " << endl;
        cout << "     3. Mostrar Médicos                    " << endl;
        cout << "     4. ...                                " << endl;
        cout <<                                                  endl;
        cout << "     0. Finalizar.                         " << endl;
        cout << "                        Opción:  ";

        cin >> opcion;
        cin.ignore();

    } while ((opcion < 0) || (opcion > 3));

    return opcion;
}

int main() {

    Hospital  *hospital  = nullptr;
    bool       fin       = false;
    int        opcion;

    // 1. Crear hospital (los datos se cargan automáticamente).
    // hospital = ...

    // 2. Muestra el menú hasta que se pulse "fin"
    do {
        opcion = menu(hospital->getName());

        switch (opcion) {
            case 1:
                hospital->mostrarEstadisticas();
                break;

            case 2:
                hospital->mostrarPacientes();
                break;

            case 3:
                hospital->mostrarMedicos();
                break;

            case 4:
                . . .
                break;

                // Resto de opciones (algoritmos)

            case 0:
                fin = true;
                break;

            default:
                break;

        }

    } while (!fin);

    // 3. Elimina hospital (los datos se almacenan automáticamente).
    delete hospital;

    return 0;
}
