//
// Created by jorge on 25/11/19.
//

#include "menu_t.h"
#include "robot.h"

void menu_t::mostrar_menu() {
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Redimensionar matriz\n";
    cout << "2. Añadir objeto\n";
    cout << "3. Mostrar matriz\n\n";
    cout << "0. Para Salir\n\n";
}

void menu_t::escoger_opcion() {
    TipoString opc;
    cout<<"Ingrese opción: ";cin>>opc;
    while (opc != "1" and opc != "2" and opc != "3" and opc != "4"){
        cout<<"Ingrese opción valida: ";cin>>opc;
    }
    while (opc != "&"){
        if(opc == "1") redimensionar_matriz();
        else if (opc == "2") agregar_robot();
        else if (opc == "3") mostrar_matriz();
        else if (opc == "0") break;
        cout<<"Ingrese opción: ";cin>>opc;
    }
}

void menu_t::agregar_robot() {
    auto nombre = input<TipoString>("Ingrese Nombre : ");
    auto color  = input<TipoString >("Ingrese color (Un caracter): ");

    auto x = input<TipoEntero>("Ingrese posicion X : ");

    while (x < 0 || x >= almacenn.get_ancho()) {
        cout << "Posicion X Incorrecta, los limites son: 0, "
             << almacenn.get_ancho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    TipoEntero y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 0 || y >= almacenn.get_ancho()) {
        cout  << "Posicion Y Incorrecta, los limites son: 0, "
              << almacenn.get_largo() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }

    almacenn.anadir_robot(new robot_t(nombre, color, x, y));
}

void menu_t::mostrar_matriz() {
    almacenn.actualizar_almacen_t();
    cout << '\n';
    almacenn.dibujar_almacen_t(cout);
    cout << '\n';
    almacenn.mostrar_robot(cout);
    cout << '\n';

}

void menu_t::redimensionar_matriz() {
    TipoEntero lar, anc, alt;
    cout<<"Ingrese nuevo largo de la matriz";cin>>lar;
    cout<<"Ingrese nuevo ancho de la matriz";cin>>anc;
    cout<<"Ingrese nuevo alto de la matriz";cin>>alt;
    crear(lar, anc);
}

void menu_t::iniciar_matriz() {
    TipoEntero lar, anc, alt;
    cout << "Ingrese largo de la matriz: ";cin >> lar;
    cout << "Ingrese ancho de la matriz: ";cin >> anc;
    cout << "Ingrese alto de la matriz: ";cin >> alt;
    crear(lar, anc);
}

void menu_t::crear(TipoEntero lar, TipoEntero anc) {
    almacenn.contruir(lar, anc);
}
