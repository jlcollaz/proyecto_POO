#ifndef PROYECTO_POOX_ROBOT_H
#define PROYECTO_POOX_ROBOT_H

#include <vector>
#include "tipos.h"
#include "producto.h"

class robot_t{
private:
    posicion posX;
    posicion posY;
    posicion homeX;
    posicion homeY;
    TipoString nombre;
    TipoString color;
    vector<TipoString> productos;
public:
    robot_t();
    robot_t(TipoString nombre, TipoString color, posicion homeX, posicion _homeY);
    virtual ~robot_t();
    void set_homeX(posicion X);
    void set_homeY(posicion Y);
    void set_posX(posicion X);
    void set_posY(posicion Y);
    void set_color(TipoString co);
    void set_nombre(TipoString name);
    posicion get_posX();
    posicion get_posY();
    posicion get_home_posX();
    posicion get_home_posY();
    TipoString get_color();
    TipoString mostrarPosicion();
    TipoString get_nombre();
    void moverse(TipoEntero posX, TipoEntero posY);
    void ingresar_objetos(vector<TipoString> productos);
    void retirar_objetos(vector<TipoString> productos);
    void verificar();
    void home();
};

#endif //PROYECTO_POOX_ROBOT_H
