//
// Created by utec on 22/11/19.
//

#ifndef PROYECTO_POO_SLOT_H
#define PROYECTO_POO_SLOT_H


#include "tipos.h"
#include "almacen.h"

class slot_t {
private:
    TipoEntero capacidad;
    TipoString tipo_producto;
    TipoEntero altura;
    TipoEntero peso;
    TipoEntero posx;
    TipoEntero posy;
    TipoString estado;
public:
    slot_t(TipoEntero altura,  TipoString tipo_producto, TipoEntero posx, TipoEntero posy, TipoEntero peso, TipoEntero capacidad, TipoString estado){ }
    ~slot_t()= default;
    void set_producto(TipoString pro) { tipo_producto=pro;}
    void set_altura(TipoEntero al) {altura=al;}
    void set_posx(TipoEntero X) { posx=X;}
    void set_posy(TipoEntero Y) { posy=Y;}
};


#endif //PROYECTO_POO_SLOT_H
