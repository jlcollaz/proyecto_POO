#ifndef PROYECTOJOAN_FUNCIONES_H
#define PROYECTOJOAN_FUNCIONES_H

#include <iostream>
#include <cstdlib>
using namespace std;

void ValidarNumRobots(int &NumRobots);
void LlenarMapa(int **Matriz);
void ImprimirMatriz(int **Matriz);
void ColocarObjetos(int **Matriz, int &Objeto);
void DarPosicion(int **Matriz, int cont);
void GenerarRobots(int num, int **Matriz, int NumRobot);
void ValidarEleccion(int &Eleccion, int NumRobots);
void MenuDeOperaciones(int &operacion);
void IngresarObjeto(int objeto, int robot, int **Matriz);
void RetirarObjeto(int objeto, int robot, int **Matriz);
void Operacion(int RobotElec, int **Matriz, int Objeto);


#endif //PROYECTOJOAN_FUNCIONES_H
