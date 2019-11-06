#include "funciones.h"

void ValidarNumRobots(int &NumRobots){
    do {
        cout << "Ingrese el numero de robots: ";
        cin >> NumRobots;
    } while (NumRobots < 3);
}
void LlenarMapa(int **Matriz){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            *(*(Matriz + i)+ j) = 0;
        }
    }
}
void ImprimirMatriz(int **Matriz){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << *(*(Matriz + i)+ j) << "  ";
        }
        cout << endl;
    }
}
void ColocarObjetos(int **Matriz, int &Objeto){
    int X1 = rand()%10, Y1 = rand()%10, X2 = rand()%10, Y2 = rand()%10,X3 = rand()%10, Y3 = rand()%10;
    if (*(*(Matriz + Y1)+ X1) == 0){
        *(*(Matriz + Y1)+ X1) = Objeto;
        Objeto++;
    }
    if (*(*(Matriz + Y2)+ X2) == 0){
        *(*(Matriz + Y2)+ X2) = Objeto;
        Objeto++;
    }
    if (*(*(Matriz + Y3)+ X3) == 0){
        *(*(Matriz + Y3)+ X3) = Objeto;
        Objeto++;
    }
}
void DarPosicion(int **Matriz, int cont){
    int Xo, Yo;
    cout << "Dame la posicion en X-Y del Robot: "; cin >> Xo; cin >> Yo;
    while (*(*(Matriz + Yo)+ Xo) != 0){
        cout << "La posicion para X-Y anterior ya esta ocupada, por favor dame otra: "; cin >> Xo; cin >> Yo;
    }
    *(*(Matriz + Yo)+ Xo) = cont;
}
void GenerarRobots(int num, int **Matriz, int NumRobot){
    int cont = 0;
    while(cont < num){
        DarPosicion(Matriz, NumRobot);
        cont ++;
        NumRobot--;
    }

}
void ValidarEleccion(int &Eleccion, int NumRobots){
    do {
        cout << "Elija uno de los robot en funcionamiento: ";
        cin >> Eleccion;
    } while (Eleccion >= NumRobots && Eleccion <= 1);
}
void MenuDeOperaciones(int &operacion){
    cout << "Que deberia hacer el robot? " << endl;
    cout << "1. Ingresar Objeto al almacen" << endl;
    cout << "2. Retirar Objeto del almacen" << endl;
    cin >> operacion;
    if (operacion < 1 || operacion > 2){
        while (operacion < 1 || operacion > 2){
            cout << "Opcion invalida, por favor vuelva a intentar: ";
            cin >> operacion;
        }
    }
}
void IngresarObjeto(int objeto, int robot, int **Matriz){

}
void RetirarObjeto(int objeto, int robot, int **Matriz){

}
void Operacion(int RobotElec, int **Matriz, int Objeto){
    int operacion = 0;
    MenuDeOperaciones(operacion);
    switch(operacion){
        case 1:
            IngresarObjeto(Objeto, RobotElec, Matriz);
            break;
        case 2:
            RetirarObjeto(Objeto, RobotElec, Matriz);
            break;
        default:
            break;


    }
}