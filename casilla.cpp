    //
// Created by utec on 30/10/19.
//

#include "casilla.h"

casilla_t::casilla_t(longitud h, longitud w):
    height{h}, width(w) {

}

longitud casilla_t::get_width() {
    return width;
}

longitud casilla_t::get_height() {
    return height;
}
