#include "funciones.h"
#include "almacen.h"
#include "slot.h"

int main(){
    TipoEntero lar, anc, alt;
    cout<<"Ingrese largo de la matriz";cin>>lar;
    cout<<"Ingrese ancho de la matriz";cin>>anc;
    cout<<"Ingrese alto de la matriz";cin>>alt;
    almacen_t mat(lar, anc, alt);
    mat.actualizar_almacen_t();
    cout << '\n';
    mat.dibujar_almacen_t(cout);
    cout << '\n';

    return 0;
}

void antiguo(){
    almacen_t mat;
    mat.actualizar_almacen_t();
    cout << '\n';
    mat.dibujar_almacen_t(cout);
    cout << '\n';

    almacen_t matriz;
    TipoEntero lar, anc, alt;
    //Dar valores a la matriz
    cout<<"Ingrese largo de la matriz ";cin>>lar; matriz.set_largo(lar);
    cout<<"Ingrese ancho de la matriz ";cin>>anc; matriz.set_ancho(anc);
    cout<<"Ingrese alto de la matriz ";cin>>lar; matriz.set_alto(alt);
    //Generar la matriz
    vector<vector<slot_t>> matrix;
    for(int i = 0; i<matriz.get_largo(); i++)
    {
        vector<slot_t> myvector;
        for(int j = 0; j<matriz.get_ancho(); j++)
        {
            //Generar slots
            TipoString name, respuesta;
            slot_t tempi;
            tempi.set_posy(j+1);
            tempi.set_posx(i+1);
            tempi.set_altura(matriz.get_alto());
            cout<<"¿Desea crear un slot (posicion("<<i+1<<";"<<j+1<<")) vacío? (S = si/N = no) ";cin>>respuesta;
            while (respuesta != "S" and respuesta != "N"){
                cout<<"Ingrese opción valida"<<endl;
                cout<<"¿Desea crear un slot vacío? (S = si/N = no) ";cin>>respuesta;
            }
            if(respuesta == "S"){
                tempi.set_producto("vacio");
            }
            else {
                cout<<"Ingrese nombre de producto: ";cin>>name;
                tempi.set_producto(name);
                tempi.set_altura(alt);
            }
            tempi.set_vacio(respuesta);
            myvector.push_back(tempi);
        }
        matrix.push_back(myvector);
    }
}

/*
                tempi.set_vacio(respuesta);
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
