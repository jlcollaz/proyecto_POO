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
    TipoEntero estado;
    bool vacio;
public:
    slot_t();
    void set_producto(TipoString pro);
    void set_altura(TipoEntero al);
    void set_posx(TipoEntero X);
    void set_posy(TipoEntero Y);
    void set_vacio(TipoString valor);
    bool get_vacio();
    TipoEntero get_estado();
    ~slot_t()= default;
};


#endif
