#ifndef PROYECTO_POOX_ALMACEN_H
#define PROYECTO_POOX_ALMACEN_H

#include "tipos.h"
#include "slot.h"
//#include "robot.h"


class almacen_t {
private:
    TipoEntero largo;
    TipoEntero ancho;
    TipoEntero alto;
    TipoString punto = ".";
    vector<vector<TipoString >> matriz;
    //vector<vector<slot_t>> plano;
  //  vector<robot_t*> robots;
public:
    almacen_t();
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
};



#endif
