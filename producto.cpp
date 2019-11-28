//
// Created by NINCOL on 1/11/2019.
//

#include "producto.h"
producto_t::producto_t(TipoString tip, TipoString nom, TipoDouble tam, TipoEntero can, TipoEntero num_p) {
    tipo = tip;
    nombre = nom;
    tamano = tam;
    cantidad = can;
    numero_proc = num_p;
}