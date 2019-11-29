#ifndef PROYECTO_POOX_ALMACEN_H
#define PROYECTO_POOX_ALMACEN_H

#include "tipos.h"
#include "robot.h"
#include "casilla.h"
#include "slot.h"


class almacen_t {
private:
    longitud height;
    longitud width;
    TipoEntero largo;
    TipoEntero ancho;
    TipoEntero alto;
    TipoString punto = ".";
    sf::RenderWindow* canvas;
    vector<vector<TipoString>> matriz;
    vector<vector<casilla_t>> casillas;
    vector<vector<slot_t>> plano;
    vector<robot_t*> robots;
    void draw_rectangle(longitud x,longitud y,
                        longitud tamano_x, longitud tamano_y);
    void draw_rectangle_robot(longitud x,longitud y,
                              longitud tamano_x, longitud tamano_y);
public:
    almacen_t();
    void hacer(longitud hei, longitud wid,
               cantidad row, cantidad col,
               sf::RenderWindow* cn);
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
    void draw();
    void contruirps(TipoEntero lar, TipoEntero anc);
    void contruir_plano();
};

#endif
