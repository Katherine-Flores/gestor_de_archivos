//
// Created by kathe on 7/03/2023.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char directorio [250];
char destino [250];
char lineanueva [250];
string linea, texto;

void direccion(){
    cout << "Escriba la direccion del archivo" << endl;
    cin >> directorio;
}

void abrirArchivo(){
    direccion();
    ifstream archivo(directorio);
    while (getline(archivo, linea)){
        texto = texto + linea + "\n";
    }
    archivo.close();
    cout << texto << endl;
}

void modificarArchivo(){
    abrirArchivo();
    cout << "Ingrese el texto que desea agregar" << endl;
    cin.ignore();
    cin.getline(lineanueva, 250);

    ofstream archivo(directorio, ios::app);
    archivo << "\n" << lineanueva << endl;
    archivo.close();
    cout << lineanueva << endl;
}

void moverArchivo(){
    direccion();
    cout << "Ingrese la ruta de destino" << endl;
    cin >> destino;
    ::rename(directorio, destino);
}

void eliminarArchivo(){
    direccion();
    ::remove(directorio);
}

void renombrarArchivo(){
    direccion();
    char nuevoNombre [250];
    cout << "Escriba la dirección con el nuevo nombre del archivo" << endl;
    cin >> nuevoNombre;
    ::rename(directorio, nuevoNombre);
}