//
// Created by utec on 30/10/19.
//

#ifndef DAMAS_CASILLA_H
#define DAMAS_CASILLA_H

#include "tipos.h"

class casilla_t {
private:
 longitud height;
 longitud width;
public:
    casilla_t(longitud h, longitud w);
    longitud get_width();
    longitud get_height();
};


#endif //DAMAS_CASILLA_H
