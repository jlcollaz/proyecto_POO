#ifndef PROYECTO_POOX_ROBOT_H
#define PROYECTO_POOX_ROBOT_H

#include <vector>
#include "tipos.h"
#include "almacen.h"
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
    robot_t(posicion _posX, posicion _posY, posicion _homeX, posicion _homeY, vector<TipoString> _productos);
    void set_homeX(posicion X);
    void set_homeY(posicion Y);
    void set_posX(posicion X);
    void set_posY(posicion Y);
    void set_color(TipoString co);
    posicion get_posX();
    posicion get_posY();
    TipoString get_color();
    void moverse(posicion Xdestino, posicion Ydestino, vector<vector<int>> listadepuntos);
    vector<vector<int>> encontrar_caminocorto(posicion Xdestino, posicion Ydestino); // usar algoritmo A*
    void ingresar_objetos(vector<TipoString> productos);
    void retirar_objetos(vector<TipoString> productos);
    void verificar();
    void home();
};

#endif //PROYECTO_POOX_ROBOT_H
