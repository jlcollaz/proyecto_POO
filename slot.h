#ifndef PROYECTO_POO_SLOT_H
#define PROYECTO_POO_SLOT_H

#include "tipos.h"

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
    TipoEntero costo = 0;
public:
    slot_t();
    slot_t(TipoEntero PX, TipoEntero PY);
    void set_producto(TipoString pro);
    void set_altura(TipoEntero al);
    void set_posx(TipoEntero X);
    void set_posy(TipoEntero Y);
    void set_capaciadad(TipoEntero Y);
    void set_vacio(TipoString valor);
    void set_costo(TipoEntero cos);
    TipoEntero get_costo();
    bool get_vacio();
    TipoEntero get_estado();
    ~slot_t()= default;
};


#endif
