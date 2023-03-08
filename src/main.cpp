#include <iostream>
#include "Paciente.h"
#include "Medico.h"
#include "Hospital.h"

using namespace std;

// Muestra el menu por pantalla y devuelve una opcion elegida.
int menu(string name) {

    int option;

    do {
        cout << endl;
        cout << "--------  " << name << "  --------"  << endl << endl;

        cout << "     1. Mostrar Estadísticas               " << endl;
        cout << "     2. Mostrar Pacientes                  " << endl;
        cout << "     3. Mostrar Médicos                    " << endl;
        cout << "     4. Mostrar Consultas                  " << endl;
        cout << "     5. Buscar Paciente por su DNI         " << endl;
        cout << "     6. Buscar Médico por su apellido      " << endl;
        cout << "     7. Guardar Consultas de un Paciente   " << endl;
        cout <<                                                  endl;
        cout << "     0. Finalizar.                         " << endl;
        cout << "                        Opción:  ";

        cin >> option;
        cin.ignore();

    } while ((option < 0) || (option > 7));

    return option;
}

int main() {

    Hospital  *hospital  = new Hospital("Hospital UEX");
    bool fin = false;
    int option;
    string search;
    Paciente *p = new Paciente;
    Medico *m = new Medico;

    // 1. Crear hospital (los datos se cargan automáticamente).

    // 2. Muestra el menú hasta que se pulse "fin"
    do {
        option = menu(hospital->getName());

        switch (option) {
            case 1:
                hospital->printEstadisticas();
                break;

            case 2:
                hospital->printPacientes();
                break;

            case 3:
                hospital->printMedicos();
                break;

            case 4:
                hospital->printConsultas();
                break;

            case 5:
                cout << "DNI del paciente: ";
                cin >> search;
                cin.ignore();
                p->setDni(search);
                if(hospital->findPacienteByDni(p))
                    p->mostrar();
                break;

            case 6:
                cout << "Apellido del médico: ";
                cin >> search;
                cin.ignore();
                m->setLastname(search);
                if(hospital->findMedicoByLastname(m))
                    m->mostrar();
                break;

            case 7:
                cout << "DNI del paciente: ";
                cin >> search;
                cin.ignore();
                if(hospital->saveConsultasByDni(search))
                    cout << "El archivo " + search + ".txt se ha guardado correctamente" << endl;
                else cout << "Ha ocurrido un error al guardar el archivo" << endl;
                break;

            case 0:
                fin = true;
                break;

            default:
                break;

        }

    } while (!fin);

    // 3. Elimina hospital (los datos se almacenan automáticamente).
    delete p;
    delete m;
    delete hospital;

    return 0;
}
