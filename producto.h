//
// Created by NINCOL on 1/11/2019.
//

#ifndef PROYECTO_POOX_PRODUCTO_H
#define PROYECTO_POOX_PRODUCTO_H

#include "tipos.h"

class producto_t {
private:
    TipoString tipo;
    TipoString nombre;
    TipoDouble tamano;
    TipoEntero cantidad;
    TipoEntero numero_proc;
public:
    producto_t(TipoString tip, TipoString nom, TipoDouble tam, TipoEntero can, TipoEntero num_p);
};

#endif //PROYECTO_POOX_PRODUCTO_H
