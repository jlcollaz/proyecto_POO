#include "robot.h"
robot_t::robot_t(){}

robot_t::robot_t(TipoString name, TipoString co, posicion hx, posicion hy) {
    homeX = hx;
    homeY = hy;
    color = co;
    nombre = name;
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

void robot_t::set_nombre(TipoString name) {
    nombre = name;
}

void robot_t::set_color(TipoString co) {
    color = co;
}

TipoString robot_t::get_color() {
    return color;
}

posicion robot_t::get_posX() {
    return posX;
}

posicion robot_t::get_posY() {
    return posY;
}

posicion robot_t::get_home_posX() {
    return homeX;
}

posicion robot_t::get_home_posY() {
    return homeY;
}

TipoString robot_t::mostrarPosicion() {
    return "X = " + to_string(homeX) + " Y = " + to_string(homeY);
}

TipoString robot_t::get_nombre() {
    return nombre;
}


robot_t::~robot_t() {}

/*void robot_t::moverse(posicion Xdestino, posicion Ydestino, vector<vector<int>> listadepuntos) {

}
*/

/*
void robot_t::ingresar_objetos(vector<TipoString> productos) {

}

void robot_t::retirar_objetos(vector<TipoString> productos) {

}

void robot_t::verificar() {

}

void robot_t::home() {

}
*/