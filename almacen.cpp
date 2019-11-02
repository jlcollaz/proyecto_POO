//
// Created by NINCOL on 1/11/2019.
//

#include "almacen.h"
almacen_t::almacen_t(TipoEntero lar, TipoEntero anc, TipoEntero alt) {
    largo = lar;
    ancho = anc;
    alto = alt;
}

TipoEntero almacen_t::get_largo() {
    return largo;
}

TipoEntero almacen_t::get_ancho() {
    return ancho;
}

TipoEntero almacen_t::get_alto() {
    return alto;
}