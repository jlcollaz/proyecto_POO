#include <iostream>
#include <SFML/Graphics.hpp>
#include "almacen.h"
#include "menu_t.h"

void grafico(TipoEntero x, TipoEntero y){
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
    almacen_t tablero;
    tablero.hacer(600, 600, x, y, &window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        tablero.draw();
        // window.draw(shape);
        window.display();
    }
}

int main(){
    menu_t proyecto;
    proyecto.iniciar_matriz();
    proyecto.mostrar_menu();
    proyecto.escoger_opcion();
    return 0;
}