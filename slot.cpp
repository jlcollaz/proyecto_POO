//
// Created by utec on 22/11/19.
//

#include "slot.h"

slot_t::slot_t() {
}

void slot_t::set_producto(TipoString pro) {
    tipo_producto = pro;
}

void slot_t::set_altura(TipoEntero al) {
    altura = al;
}

void slot_t::set_posx(TipoEntero X) {
    posx = X;
}

void slot_t::set_posy(TipoEntero Y) {
    posy = Y;
}

void slot_t::set_vacio(TipoString valor) {
    if(valor == "S") vacio = true;
    else vacio = false;
}

TipoEntero slot_t::get_estado() {
    if(altura == capacidad) return 0;
    int cap;
    cap = altura - capacidad;
    return cap;
}

bool slot_t::get_vacio() {
    return vacio;
}
