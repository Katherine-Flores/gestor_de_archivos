#include <iostream>
#include <fstream>
#include "archivos.h"
using namespace std;

int opc;

int main() {
    cout << "Iniciando..." << "\n" << "---Bienvenido al Gestor de Archivos de Katherine Flores---" << endl;
    cout << "Que desea realizar?" << endl;
    do{
    cout << "Opciones:" << "\n" << "Abrir Archivo [1]" << "\n" << "Eliminar Archivo [2]" << "\n" <<
    "Renombrar Archivo [3]" << "\n" << "Mover Archivo [4]" << "\n" << "Modificar Archivo [5]" << "\n" <<
    "salir [0]" << endl;
    cin >> opc;

    switch (opc) {
        case 1:
            abrirArchivo();
            break;
        case 2:
            eliminarArchivo();
            break;
        case 3:
            renombrarArchivo();
            break;
        case 4:
            moverArchivo();
            break;
        case 5:
            modificarArchivo();
            break;
        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    }while (opc != 0);
    return 0;
}
