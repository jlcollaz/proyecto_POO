#ifndef PROYECTO_POO_MENU_T_H
#define PROYECTO_POO_MENU_T_H

#include "almacen.h"
#include "tipos.h"

template <typename T>
T input(string label) {
    T value;
    cout << label;
    cin >> value;
    return value;
}


class menu_t {
private:
    almacen_t almacenn;
public:
    void crear(TipoEntero lar, TipoEntero anc);
    void iniciar_matriz();
    void mostrar_menu();
    void escoger_opcion();
    void agregar_robot();
    void mostrar_matriz();
    void mostrar_grafico();
};


#endif //PROYECTO_POO_MENU_T_H
