#include "menu_t.h"

void menu_t::mostrar_menu() {
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Añadir robot\n";
    cout << "2. Mostrat matriz\n";
    cout << "3. Mostrar matriz gráfica\n\n";
    cout << "0. Para Salir\n\n";
}

void menu_t::escoger_opcion() {
    TipoString opc;
    cout<<"Ingrese opción: ";cin>>opc;
    while (opc != "1" & opc != "2" & opc != "3" & opc != "4"){
        cout<<"Ingrese opción valida: ";cin>>opc;
    }
    while (opc != "&"){
        if(opc == "1") agregar_robot();
        else if (opc == "2") mostrar_matriz();
        else if (opc == "3") mostrar_grafico();
        else if (opc == "0") break;
        cout<<"Ingrese opción: ";cin>>opc;
    }
}

void menu_t::agregar_robot() {
    auto nombre = input<TipoString>("Ingrese Nombre : ");
    auto color  = input<TipoString >("Ingrese color (Un caracter): ");

    auto x = input<TipoEntero>("Ingrese posicion X : ");

    while (x < 1 || x >= almacenn.get_ancho()+1) {
        cout << "Posicion X Incorrecta, los limites son: 0, "
             << almacenn.get_ancho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    TipoEntero y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 1 || y >= almacenn.get_ancho()+1) {
        cout  << "Posicion Y Incorrecta, los limites son: 0, "
              << almacenn.get_largo() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }

    almacenn.anadir_robot(new robot_t(nombre, color, x, y));
}

void menu_t::mostrar_matriz() {
    almacenn.actualizar_almacen_t();
    cout << '\n';
    almacenn.dibujar_almacen_t(cout);
    cout << '\n';
    almacenn.mostrar_robot(cout);
    cout << '\n';

}

void menu_t::iniciar_matriz() {
    ifstream original;
    original.open("slots.txt", ios::in);
    // Verificando si se pudo abrir el archivo
    if (original.fail()) {
        cout << "Error abriendo archivo \"slots.txt\"\n";
    }
    vector<TipoString> data;
    string key;
    while(getline(original, key))
    {
        data.emplace_back(key);
    }
    original.close();

    TipoString lar = data[0], anc = data[1], alt = data[2];
    TipoEntero x,y,z;
    x = stoi(lar);
    y = stoi(anc);
    z = stoi(alt);
    almacenn.set_largo(x);
    almacenn.set_ancho(y);
    almacenn.set_alto(z);
    crear(x, y);
    //almacenn.contruir_plano();
}

void menu_t::crear(TipoEntero lar, TipoEntero anc) {
    almacenn.contruir(lar, anc);
}

void menu_t::mostrar_grafico() {
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
    almacenn.hacer(600, 600, almacenn.get_largo(), almacenn.get_ancho(), &window);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        almacenn.draw();
        // window.draw(shape);
        window.display();
    }
}

