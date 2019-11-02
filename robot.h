//
// Created by NINCOL on 1/11/2019.
//

#ifndef PROYECTO_POOX_ROBOT_H
#define PROYECTO_POOX_ROBOT_H

#include <vector>
#include "tipos.h"

class robot{
private:
    posicion inicial;
public:
    void moverse(posicion robot, posicion destino);
    void ingresar_objetos();
    void retirar_objetos();
    void verificar();
    void encontrar_caminocorto(posicion robot, posicion destino)
    void home();
};


#endif //PROYECTO_POOX_ROBOT_H
