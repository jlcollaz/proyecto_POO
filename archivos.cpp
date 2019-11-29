//
// Created by Joan Mercedes on 28/11/2019.
//
#include "archivos.h"
using namespace std;

void lector_archivo(string nombrefisico)
{
    fstream original(nombrefisico, ios::in);
    // Verificando si se pudo abrir el archivo
    if (!original.is_open()) {
        cout << "Error abriendo archivo \"procesos.txt\"\n";
        return;
    }
    map<int, int> data;
    string key;
    while (getline(original, key, ' ')){
        data[stoi(key)]++;
    }
    original.close();
}

void generar_archivos_posiciones(string archivoPos) {
    // Crear un objeto archivo que crea un archivo
    fstream posiciones(archivoPos, ios::out);
    // Verificando si se pudo abrir el archivo
    if (!posiciones.is_open()) {
        cout << "Error abriendo archivo \"posiciones.txt\"\n";
        return;
    }
    posiciones.close();
}

void generar_archivos_final(string archivoFilas) {
    // Crear un objeto archivo que crea un archivo
    fstream filas(archivoFilas, ios::out);
    // Verificando si se pudo abrir el archivo
    if (!filas.is_open()) {
        cout << "Error abriendo archivo \"estados.txt\"\n";
        return;
    }
    filas.close();
}