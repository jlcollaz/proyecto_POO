#include <iostream>
#include <SFML/Graphics.hpp>
#include "almacen.h"
#include "menu_t.h"


int main(){
    menu_t hola;
    hola.iniciar_matriz();
    hola.mostrar_menu();
    hola.escoger_opcion();
    return 0;
}