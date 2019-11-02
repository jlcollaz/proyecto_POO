#include "funciones.h"

int main(){
    int **MatrizMapa = new int *[10];
    int Objeto = 1;
    for (int i = 0; i < 10; i++){
        MatrizMapa[i] = new int [10];
    }
    LlenarMapa(MatrizMapa);
    ColocarObjetos(MatrizMapa, Objeto);
    cout << "El mapa del almacen es: " << endl;
    ImprimirMatriz(MatrizMapa);
    cout << endl;
    int NumRobots = 0, NumRobot = -1;
    ValidarNumRobots(NumRobots);
    cout << "El numero de Robots es: " << NumRobots << endl;
    GenerarRobots(NumRobots, MatrizMapa, NumRobot);
    cout << endl;
    ImprimirMatriz(MatrizMapa);
    int Eleccion = 0;
    ValidarEleccion(Eleccion, NumRobots);
    cout << "El robot seleccionado es: " << Eleccion;
    Operacion(Eleccion, MatrizMapa, Objeto);
    return 0;
}

