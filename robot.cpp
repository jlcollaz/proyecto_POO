
#include "robot.h"

robot_t::robot_t(posicion _posX, posicion _posY, posicion _homeX, posicion _homeY, vector<TipoString> _productos) {
    posY = _posY;
    posX = _posX;
    homeX = _homeX;
    homeY = _homeY;
}

void robot_t::set_homeX(posicion X) {
    homeX = X;
}

void robot_t::set_homeY(posicion Y) {
    homeY = Y;
}

void robot_t::set_posX(posicion X) {
    posX = X;
}

void robot_t::set_posY(posicion Y) {
    posY = Y;
}

posicion robot_t::get_posX() {
    return posX;
}

posicion robot_t::get_posY() {
    return posY;
}

void robot_t::moverse(posicion Xdestino, posicion Ydestino, vector<vector<int>> listadepuntos) {

}

vector<vector<int>> robot_t::encontrar_caminocorto(posicion Xdestino, posicion Ydestino) {
    return vector<vector<int>>();
}

void robot_t::ingresar_objetos(vector<TipoString> productos) {

}

void robot_t::retirar_objetos(vector<TipoString> productos) {

}

void robot_t::verificar() {

}

void robot_t::home() {

}

void robot_t::set_color(TipoString co) {
    color = co;
}

TipoString robot_t::get_color() {
    return color;
}
