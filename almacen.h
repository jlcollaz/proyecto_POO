//
// Created by NINCOL on 1/11/2019.
//

#ifndef PROYECTO_POOX_ALMACEN_H
#define PROYECTO_POOX_ALMACEN_H


#include "tipos.h"


class almacen_t {
private:
    TipoEntero largo;
    TipoEntero ancho;
    TipoEntero alto;
public:
    almacen_t();
    almacen_t(TipoEntero lar, TipoEntero anc, TipoEntero alt);
    TipoEntero get_largo();
    TipoEntero get_ancho();
    TipoEntero get_alto();
};



#endif //PROYECTO_POOX_ALMACEN_H
