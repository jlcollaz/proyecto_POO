#ifndef PROYECTO_POOX_ALMACEN_H
#define PROYECTO_POOX_ALMACEN_H

#include "tipos.h"
#include <vector>
#include "robot.h"


class almacen_t {
private:
    TipoEntero largo;
    TipoEntero ancho;
    TipoEntero alto;
    TipoString punto = ".";
    vector<vector<TipoString>> matriz;
    vector<robot_t*> robots;
public:
    almacen_t();
    void contruir(TipoEntero x, TipoEntero y);
    almacen_t(TipoEntero lar, TipoEntero anc, TipoEntero alt);
    TipoEntero get_largo();
    TipoEntero get_ancho();
    TipoEntero get_alto();
    void set_largo(TipoEntero lar);
    void set_ancho(TipoEntero anc);
    void set_alto(TipoEntero alt);
    virtual ~almacen_t();
    void actualizar_almacen_t();
    void dibujar_almacen_t(ostream &os);
    void resize_matriz(TipoEntero lar, TipoEntero anc);
    TipoEntero get_numero_robots();
    void anadir_robot(robot_t* robott);
    void mostrar_robot(ostream &os);
};



#endif
