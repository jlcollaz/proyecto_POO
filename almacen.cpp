#include "almacen.h"
#include <string>
#include <iomanip>
#include <algorithm>
#include <iostream>
using namespace std;


void almacen_t::resize_matriz(TipoEntero lar, TipoEntero anc) {
    matriz.resize(lar);
    for (auto& item: matriz)
        item.resize(anc);
}

almacen_t::almacen_t(TipoEntero lar, TipoEntero anc, TipoEntero alt) {
    resize_matriz(lar,anc);
}

TipoEntero almacen_t::get_largo() {
    return matriz.size();
}

TipoEntero almacen_t::get_ancho() {
    return matriz[0].size();
}

TipoEntero almacen_t::get_alto() {
    return alto;
}

void almacen_t::set_largo(TipoEntero lar) {
    largo = lar;
}

void almacen_t::set_ancho(TipoEntero anc) {
    ancho = anc;
}

void almacen_t::set_alto(TipoEntero alt) {
    alto = alt;
}

void almacen_t::actualizar_almacen_t() {
    cout<<"actualizar"<<endl;
    for (auto &row: matriz)
        for (auto &cell: row)
            cell = punto;

    for (auto& item: robots)
        matriz[item->get_home_posX()][item->get_home_posY()-1]
            = item->get_color();
    cout<<"actualizar2"<<endl;
}

void almacen_t::dibujar_almacen_t(ostream &os) {
    os << '\n';
    os << setw(3) << ' ';
    for (auto j = 1; j < get_ancho()+1; ++j)
        os << setw(3) << j;
    os << '\n';
    for (auto i = 1; i < get_largo(); ++i) {
        os << setw(3) << i;
        for (auto j = 0; j < get_ancho(); ++j) {
            os << setw(3) << matriz[i][j];
        }
        os << '\n';
    }
}

TipoEntero almacen_t::get_numero_robots() {
    return 0;
}

void almacen_t::anadir_robot(robot_t* rob) {
    robots.emplace_back(rob);
}

void almacen_t::mostrar_robot(ostream &os) {
    cout<<"robot"<<endl;
    int i = 0;
    for (auto& item: robots) {
        os << "* * * * * * [" << i+1 << "] ";
        os << " Nombre = " << item->get_nombre() << " "
           << item->mostrarPosicion()
           << " Color = " << item->get_color() << '\n';
        i++;
    }
}

void almacen_t::contruir(TipoEntero x, TipoEntero y) {
    resize_matriz(x+1, y);
}

void almacen_t::draw_rectangle(longitud x, longitud y, longitud tamano_x, longitud tamano_y) {
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(tamano_x, tamano_y));
    rectangle.setPosition(x, y);
    rectangle.setOutlineThickness(1);
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setOutlineColor(sf::Color::Yellow);
    canvas->draw(rectangle);
}

void almacen_t::draw_rectangle_robot(longitud x, longitud y, longitud tamano_x, longitud tamano_y) {
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(tamano_x, tamano_y));
    rectangle.setPosition(x, y);
    rectangle.setOutlineThickness(1);
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setOutlineColor(sf::Color::Yellow);
    canvas->draw(rectangle);
}

void almacen_t::hacer(longitud hei, longitud wid, cantidad row, cantidad col, sf::RenderWindow *cn) {
    height = hei;
    width = wid;
    largo = row;
    ancho = col;
    canvas = cn;
    longitud hc = height / largo;
    longitud wc = width / ancho;
    casillas.resize(largo);
    for (auto &roww: casillas)
        for (int i = 0; i < ancho; i++) {
            //row.push_back(casilla_t(hc, wc));
            roww.emplace_back(hc, wc);}
}

void almacen_t::draw() {
    for (auto i = 0; i < largo; i++) {
        for (auto j = 0; j < ancho; j++) {
            int cont=0;
            for (auto& item: robots) {
                if(item->get_home_posX()-1 == i and item->get_home_posY()-1 == j) {
                    draw_rectangle_robot(casillas[i][j].get_width() * i,casillas[i][j].get_height() * j,
                                         casillas[i][j].get_width(),casillas[i][j].get_height());
                    cont=1;
                }
            }
            if(cont == 0)
                draw_rectangle(casillas[i][j].get_width() * i,casillas[i][j].get_height() * j,
                               casillas[i][j].get_width(),casillas[i][j].get_height());
        }
    }

}

