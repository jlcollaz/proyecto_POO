#include "funciones.h"
#include "almacen.h"

int main(){
    almacen_t matriz;
    TipoEntero lar, anc, alt;
    cout<<"Ingrese largo de la matriz ";cin>>lar; matriz.set_largo(lar);
    cout<<"Ingrese ancho de la matriz ";cin>>anc; matriz.set_ancho(anc);
    cout<<"Ingrese alto de la matriz ";cin>>lar; matriz.set_alto(alt);


    vector<vector<slot_t>> matrix;
    for(int i = 0; i<matriz.get_largo(); i++)
    {
        vector<slot_t> myvector;
        for(int j = 0; j<matriz.get_ancho(); j++)
        {
            TipoString name;
            slot_t temp;
            temp.set_posy(j+1);
            temp.set_posx(i+1);
            temp.set_altura(matriz.get_alto());
            cout<<"Ingrese nombre de producto: ";cin>>name;
            temp.set_producto(name);
            myvector.push_back(temp);
        }
        matrix.push_back(myvector);
    }

    return 0;
}

/*
vector<vector<int> > matrix;
for(int i = 0; i<matriz.get_largo(); i++)
{
for(int j = 0; j<matriz.get_ancho(); j++)
{
cout<<"Enter the number for Matrix 1";
cin>>matrix[i][j];
}
}

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
Operacion(Eleccion, MatrizMapa, Objeto);*/
