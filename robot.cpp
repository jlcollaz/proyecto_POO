
#include "robot.h"
robot::robot(posicion _posX, posicion _posY, posicion _homeX, posicion _homeY, vector<TipoString> _productos){
    posY = _posY;
    posX = _posX;
    homeX = _homeX;
    homeY = _homeY;
    productos = [];
};
void robot:: set_homeX(posicion _X){
    homeX = _X;
}
void robot :: set_homeY(posicion _Y){
    homeY = _Y;
}
void robot ::set_posX(posicion _X) {
    posX = _X;
}
void robot::set_posY(posicion _Y) {
    posY = _Y;
}
posicion robot::get_posX() {
    return posX;
}
posicion robot::get_posY(){
    return posY;
}